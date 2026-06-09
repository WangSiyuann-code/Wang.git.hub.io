import time
import math
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
#from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.action.server import ServerGoalHandle

import tf2_ros
from rclpy.task import Future
from nav2_msgs.action import NavigateToPose
from geometry_msgs.msg import Point, Twist, Pose, PoseStamped
from geometry_msgs.msg import PoseWithCovarianceStamped

from sfr_coursework2_interface_package.action import DroneControl

class GammaSystemControllerNode(Node):

    def __init__(self):
        super().__init__('gamma_system_controller_node')

        # Setting up the TransformListener.
        self.transform_listener_buffer = tf2_ros.Buffer()
        self.transform_listener = tf2_ros.TransformListener(self.transform_listener_buffer, self)
        
        
        # Set up publisher
        self.cmd_vel_publisher = self.create_publisher(
            msg_type=Twist,
            topic='/model/box/cmd_vel',
            qos_profile=1)
            
        #while not self.count_subscribers('/model/box/cmd_vel'):
            #print(f"Waiting for subscriber to be connected...")
            #time.sleep(1)
        
        # Set up action server
        self.action_server = ActionServer(
            self,
            DroneControl,
            '/gamma_system/set_pose',
            self.execute_callback)
        self.get_logger().info('Gamma System Controller Node (Action Server) has been started.')
        
        
    def execute_callback(self, goal: ServerGoalHandle) -> DroneControl.Result:
        self.get_logger().info('Received goal request...')
        target_pose_stamped = goal.request.desired_pose
        target_position = target_pose_stamped.pose.position
        
        feedback_msg = DroneControl.Feedback()
        result = DroneControl.Result()
        
        start_time = self.get_logger().get_clock().now()
        
        rate = self.create_rate(100)
        
        success = False
        
        while rclpy.ok():
            # fail if not succeed within 5 seconds
            current_time = self.get_logger().get_clock().now()
            if (current_time - start_time).nanoseconds / 1e9 > 5.0:
                self.get_logger().warn('Action Timed Out')
                break
                      
            if goal.is_cancel_requested:
                goal.canceled()
                self.get_logger().info('Goal Canceled')
                self.stop_drone()
                return result
        
            try:
                t = self.transform_listener_buffer.lookup_transform(
                    'flying_box', 
                    'box',      
                    rclpy.time.Time())
            except tf2_ros.TransformException as e:
                self.get_logger().warn(f'Could not get transform: {e}')
                continue
            
            current_x = t.transform.translation.x
            current_y = t.transform.translation.y
            current_z = t.transform.translation.z
            
            feedback_msg.current_pose.header.stamp = self.get_logger().get_clock().now().to_msg()
            feedback_msg.current_pose.header.frame_id = 'world'
            feedback_msg.current_pose.pose.position.x = current_x
            feedback_msg.current_pose.pose.position.y = current_y
            feedback_msg.current_pose.pose.position.z = current_z
            feedback_msg.current_pose.pose.orientation = t.transform.rotation
            
            goal.publish_feedback(feedback_msg)
            
            error_x = target_position.x - current_x
            error_y = target_position.y - current_y
            error_z = target_position.z - current_z
            
            distance = math.sqrt(error_x**2 + error_y**2 + error_z**2)
            if distance < 0.1:
                success = True
                self.stop_drone()
                break
                
            # 7. 计算控制量 (P-Controller)
            Kp = 2.0 # 比例系数，可根据效果调整
            
            vel_x = Kp * error_x
            vel_y = Kp * error_y
            vel_z = Kp * error_z
            
            ang_z = 0.0 
            
            vel_x = max(min(vel_x, 0.5), -0.5)
            vel_y = max(min(vel_y, 0.5), -0.5)
            vel_z = max(min(vel_z, 0.5), -0.5)
            ang_z = max(min(ang_z, 0.8), -0.8)

            # 9. 发布命令
            cmd = Twist()
            cmd.linear.x = vel_x
            cmd.linear.y = vel_y
            cmd.linear.z = vel_z
            cmd.angular.x = 0.0
            cmd.angular.y = 0.0
            cmd.angular.z = ang_z
            
            self.cmd_vel_publisher.publish(cmd)
            
            rate.sleep()

        if success:
            goal_handle.succeed()
            result.success = True
            self.get_logger().info('Goal Succeeded')
        else:
            goal_handle.abort()
            result.success = False
            self.stop_drone()
            self.get_logger().info('Goal Failed or Timed Out.')
            
        return result

    def stop_drone(self):
        stop_msg = Twist()
        self.cmd_vel_publisher.publish(stop_msg)

def main(args=None):
    try:
        rclpy.init(args=args)
        node = GammaSystemControllerNode()
        rclpy.spin(node)

    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)



if __name__ == '__main__':
    main()

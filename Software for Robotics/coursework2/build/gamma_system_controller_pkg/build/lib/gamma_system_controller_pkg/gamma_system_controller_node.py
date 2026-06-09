import time
import math
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.action.server import ServerGoalHandle

import tf2_ros
import tf2_geometry_msgs
from geometry_msgs.msg import Point, Twist, Pose, PoseStamped
from geometry_msgs.msg import TransformStamped
from sfr_coursework2_interface_package.action import DroneControl

class GammaSystemControllerNode(Node):

    def __init__(self):
        super().__init__('gamma_system_controller_node')

        # Setting up the Listener.
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)
        
        # Publisher
        self.cmd_vel_publisher = self.create_publisher(
            msg_type=Twist,
            topic='/model/box/cmd_vel',
            qos_profile=1)
        
        # Action Server
        self._action_server = ActionServer(
            self,
            DroneControl,
            'gamma_system/set_pose',
            self.execute_callback
        )
        
        self.get_logger().info('Gamma System Controller Node Ready. Waiting for Action Request.')
        
    def stop_drone(self):
        stop_msg = Twist()
        self.cmd_vel_publisher.publish(stop_msg)
        
    def execute_callback(self, goal: ServerGoalHandle):
        self.get_logger().info('Received action request. Calculating target...')
        
        result = DroneControl.Result()
        feedback_msg = DroneControl.Feedback()
        target_position = None
        world_frame = 'shapes'
        target_name = 'target_0' 
        target_id = 12
        start_time = self.get_clock().now()

        
        try:
            t_target = self.tf_buffer.lookup_transform(
                    world_frame, 
                    target_name, 
                    rclpy.time.Time())
                
            tx = t_target.transform.translation.x
            ty = t_target.transform.translation.y
            tz = t_target.transform.translation.z
            target_position = {'x': tx, 'y': ty, 'z': tz + 1.0}
                
            self.get_logger().info(f'Found target_0 at ({tx:.2f}, {ty:.2f}, {tz:.2f}). Fly to ({tx:.2f}, {ty:.2f}, {tz+1.0:.2f})')
            
        except Exception as e:
            self.get_logger().error(f'Exception looking up target_0: {e}')
            goal.abort()
            result.success = False
            return result

        success = False
        timeout_sec = 5.0
        loop_rate = 0.01   # 10ms = 100 Hz
        feedback_msg = DroneControl.Feedback()
        
        while rclpy.ok():
            now = self.get_clock().now()
            elapsed = (now - start_time).nanoseconds * 1e-9
            if elapsed > timeout_sec:
                self.get_logger().warn("TIMEOUT: action will abort")
                self.stop_drone()
                break
            
            if goal.is_cancel_requested:
                goal.canceled()
                self.stop_drone()
                return result

            try:
                t_drone = self.tf_buffer.lookup_transform(
                    world_frame, 
                    'box', 
                    rclpy.time.Time())
            except tf2_ros.TransformException as e:
                time.sleep(loop_rate)
                continue
            
            cur_x = t_drone.transform.translation.x
            cur_y = t_drone.transform.translation.y
            cur_z = t_drone.transform.translation.z
            
            feedback_msg.current_pose.header.stamp = self.get_clock().now().to_msg()
            feedback_msg.current_pose.header.frame_id = world_frame
            feedback_msg.current_pose.pose.position.x = cur_x
            feedback_msg.current_pose.pose.position.y = cur_y
            feedback_msg.current_pose.pose.position.z = cur_z
            feedback_msg.current_pose.pose.orientation = t_drone.transform.rotation
            goal.publish_feedback(feedback_msg)
            
            err_wx = target_position['x'] - cur_x
            err_wy = target_position['y'] - cur_y
            err_wz = target_position['z'] - cur_z
            
            distance = math.sqrt(err_wx**2 + err_wy**2 + err_wz**2)
            if distance < 0.10:
                success = True
                self.stop_drone()
                break
            
            q = t_drone.transform.rotation
            siny_cosp = 2 * (q.w * q.z + q.x * q.y)
            cosy_cosp = 1 - 2 * (q.y * q.y + q.z * q.z)
            yaw = math.atan2(siny_cosp, cosy_cosp)
            
            bx = math.cos(yaw)*err_wx + math.sin(yaw)*err_wy
            by = -math.sin(yaw)*err_wx + math.cos(yaw)*err_wy
            
            # During testing, even when all four action calls runs at V_MAX, the target position could not be reached. And I tried many ways to design the V_distribution.
            K_far = 30
            K_near = 0.5
            def gain(e):
                return K_far if abs(e) > 0.5 else K_near

            vx = gain(bx) * bx
            vy = gain(by) * by
            vz = 0.8 * err_wz
            
            MIN_V = 0.12
            if abs(vx) < MIN_V: vx = math.copysign(MIN_V, vx)
            if abs(vy) < MIN_V: vy = math.copysign(MIN_V, vy)
            
            V_MAX = 0.5
            vx = max(min(vx, V_MAX), -V_MAX)
            vy = max(min(vy, V_MAX), -V_MAX)
            vz = max(min(vz, V_MAX), -V_MAX)
            
            cmd = Twist()
            cmd.linear.x = vx
            cmd.linear.y = vy
            cmd.linear.z = vz
            self.cmd_vel_publisher.publish(cmd)
            time.sleep(loop_rate)
            #rate.sleep()

        if success:
            goal.succeed()
            result.success = True
            self.get_logger().info('Success: Reached 1m above target_0')
        else:
            goal.abort()
            result.success = False
            self.stop_drone()
            self.get_logger().info('Failed: Did not reach target in time')
            
        return result



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

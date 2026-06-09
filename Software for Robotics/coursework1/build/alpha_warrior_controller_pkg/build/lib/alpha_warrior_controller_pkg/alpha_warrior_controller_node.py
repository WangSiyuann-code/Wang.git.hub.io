import math
import time
import rclpy
from rclpy.node import Node

from sfr_coursework1_interface_package.srv import TurnRobotOn, TurnRobotOff
from sfr_coursework1_interface_package.msg import TaskSpacePose, WheelAngularVelocities

ROBOT_WHEEL_RADIUS = 0.1   # (r)
ROBOT_WHEEL_BASE = 0.19    # (l)

class AlphaWarriorControllerNode(Node):

    def __init__(self):
        super().__init__('alpha_warrior_controller_node')
        self.get_logger().info('Alpha Warrior Controller Node starts')

        self.state = 'WAITING_FOR_SERVICE'
        self.current_pose = None
        self.start_pose_for_move = None

        self.desired_angle_deg = 21.0
        self.target_angle_rad = math.radians(self.desired_angle_deg)
        self.get_logger().info(f'Target angle: {self.desired_angle_deg} degrees ({self.target_angle_rad:.2f} radians)')
        
        self.turn_on_client = self.create_client(
            srv_type = TurnRobotOn,
            srv_name ='/turn_robot_on')

        self.turn_off_client = self.create_client(
            srv_type = TurnRobotOff,
            srv_name='/turn_robot_off')

        self.velocity_publisher = self.create_publisher(
            msg_type = WheelAngularVelocities,
            topic='/wheel_angular_velocities',
            qos_profile=10)
            
        self.pose_subscriber = self.create_subscription(
            msg_type = TaskSpacePose,
            topic = '/task_space_pose',
            callback = self.pose_callback,
            qos_profile = 10)
            
        # timer
        self.timer_period = 0.5
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

        self.start_robot()

    def pose_callback(self, msg: TaskSpacePose):
    
        self.current_pose = msg

    def start_robot(self):

        while not self.turn_on_client.wait_for_service(timeout_sec=1.0):
            if self.state == 'WAITING_FOR_SERVICE':
                self.get_logger().info("'turn_robot_on' service not available, waiting...")
            
        self.get_logger().info("'turn_robot_on' service FOUND. Calling...")
        request = TurnRobotOn.Request()
        
        future = self.turn_on_client.call_async(request)
        future.add_done_callback(self.turn_on_callback)

    def turn_on_callback(self, future):

        try:
            response = future.result()
            if response.success:
                self.get_logger().info("Alpha Warrior is ON. Rotation starts.")
                self.state = 'ROTATING'
            else:
                self.get_logger().error("Failed to turn on robot. ")
        except Exception as e:
            self.get_logger().error(f"Service call failed: {e}")


    def timer_callback(self):
        
        if self.current_pose is None or self.state in ['WAITING_FOR_SERVICE', 'DONE']:
            return
            
        vel_msg = WheelAngularVelocities()

        if self.state == 'ROTATING':
        
            rotate_angle = self.target_angle_rad - self.current_pose.phi_z
            rotate_angle = math.atan2(math.sin(rotate_angle), math.cos(rotate_angle))
            angle_tolerance = math.radians(0.05) 

            if abs(rotate_angle) < angle_tolerance:
                current_z_degrees = math.degrees(self.current_pose.phi_z)
                self.get_logger().info(f"Rotation complete. Final angle: {current_z_degrees:.2f} degrees({self.current_pose.phi_z:.2f} radians). Movement Starts.")
                self.state = 'MOVING'
                self.start_pose_for_move = self.current_pose
                self.velocity_publisher.publish(vel_msg)
                return
            
            
            kp_rot = 1.0
            control_omega = kp_rot * rotate_angle
            
            # v=0, omega-> wl, wr
            # rotate -> vl = -vr
            
            v_r = (control_omega * ROBOT_WHEEL_BASE) / 2.0
            v_l = -v_r
            
            vel_msg.left_wheel_angular_velocity = v_l / ROBOT_WHEEL_RADIUS
            vel_msg.right_wheel_angular_velocity = v_r / ROBOT_WHEEL_RADIUS

            self.velocity_publisher.publish(vel_msg)

        elif self.state == 'MOVING':
            target_distance = 1.0
            distance_tolerance = 0.001

            dx = self.current_pose.x - self.start_pose_for_move.x
            dy = self.current_pose.y - self.start_pose_for_move.y
            distance_travelled = math.sqrt(dx**2 + dy**2)
            
            distance_left = target_distance - distance_travelled

            if distance_left < distance_tolerance:
                self.get_logger().info(f"Move complete. Distance travelled: {distance_travelled:.3f}m.")
                self.state = 'STOPPING'

                self.velocity_publisher.publish(vel_msg)
                self.stop_robot()
                return


            kp_lin = 0.5
            control_v = kp_lin * distance_left
            control_v = max(-0.1, min(0.1, control_v))


            angle_error = self.target_angle_rad - self.current_pose.phi_z
            angle_error = math.atan2(math.sin(angle_error), math.cos(angle_error))
            
            kp_rot_straight = 0.8
            control_omega = kp_rot_straight * angle_error

            # v_robo -> v_wheel_r&l
            v_r = control_v + (control_omega * ROBOT_WHEEL_BASE) / 2.0
            v_l = control_v - (control_omega * ROBOT_WHEEL_BASE) / 2.0
            
            vel_msg.left_wheel_angular_velocity = v_l / ROBOT_WHEEL_RADIUS
            vel_msg.right_wheel_angular_velocity = v_r / ROBOT_WHEEL_RADIUS
            
            self.velocity_publisher.publish(vel_msg)

        elif self.state == 'STOPPING':
            self.velocity_publisher.publish(vel_msg)

    def stop_robot(self):
        self.get_logger().info("Calling 'turn_robot_off' service...")
        request = TurnRobotOff.Request()

        future = self.turn_off_client.call_async(request)
        future.add_done_callback(self.turn_off_callback)

    def turn_off_callback(self, future):
        try:
            response = future.result()
            if response.success:
                self.get_logger().info("Alpha Warrior is OFF.")
            else:
                self.get_logger().warn("Robot failed to turn off, but task is complete anyway.")
        except Exception as e:
            self.get_logger().error(f"Turn off service call failed: {e}")
        
        self.state = 'DONE'
        self.timer.cancel()
        self.get_logger().info("Controller node task finished and is now idle.")


def main(args=None):
    try:
        rclpy.init(args=args)
        node = AlphaWarriorControllerNode()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()


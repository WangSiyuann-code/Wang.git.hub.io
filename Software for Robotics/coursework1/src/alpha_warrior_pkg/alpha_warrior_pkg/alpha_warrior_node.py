import math
import time
import rclpy
from rclpy.node import Node

from sfr_coursework1_interface_package.srv import TurnRobotOn, TurnRobotOff
from sfr_coursework1_interface_package.msg import TaskSpacePose, WheelAngularVelocities

class AlphaWarriorNode(Node):

    def __init__(self):
        super().__init__('alpha_warrior_node')
        self.get_logger().info('alpha_warrior_node starts...')
        
        self.state = False #robot starts in OFF state

        self.v_wheel_l = 0.0
        self.v_wheel_r = 0.0

        self.pose_x = 0.0
        self.pose_y = 0.0
        self.pose_phi_z = 0.0

        self.r = 0.1
        self.l = 0.19
        self.v_min = -0.1
        self.v_max = 0.1

        self.turn_on_service = self.create_service(
            srv_type = TurnRobotOn,
            srv_name ='/turn_robot_on',
            callback = self.turn_on_callback)

        self.turn_off_service = self.create_service(
            srv_type = TurnRobotOff,
            srv_name = '/turn_robot_off',
            callback = self.turn_off_callback)

        self.pose_publisher = self.create_publisher(
            msg_type = TaskSpacePose,
            topic = '/task_space_pose',
            qos_profile=10)

        self.velocity_subscriber = self.create_subscription(
            msg_type = WheelAngularVelocities,
            topic = '/wheel_angular_velocities',
            callback = self.velocity_callback,
            qos_profile = 10)

        self.update_timer = self.create_timer(
            0.1,  # 10 Hz
            self.update_pose_callback)

    def turn_on_callback(self,
                                   request: TurnRobotOn.Request,
                                   response: TurnRobotOn.Response
                                   ) -> TurnRobotOn.Response:

        if not self.state:
            self.state = True
            response.success = True
            self.get_logger().info('alpha_warrior is [ON]')
        else:
            response.success = False
            self.get_logger().warn('the state of alpha_warrior is already [ON]')
        return response

    def turn_off_callback(self,
                                   request: TurnRobotOff.Request,
                                   response: TurnRobotOff.Response
                                   ) -> TurnRobotOff.Response:

        if self.state:
            self.state = False
            response.success = True
            self.get_logger().info('alpha_warrior is [OFF]')
            
            # Whenever the robot is triggered to the OFF state. The internal states v_wheel_l&r must be set to zero.
            self.v_wheel_l = 0.0
            self.v_wheel_r = 0.0
        else:
            response.success = False
            self.get_logger().warn('the state of alpha_warrior is already [OFF]')
        return response

    def velocity_callback(self, msg: WheelAngularVelocities):
    
        if not self.state:
            return
            
        self.v_wheel_l = msg.left_wheel_angular_velocity
        self.v_wheel_r = msg.right_wheel_angular_velocity
        
    def update_pose_callback(self):
    
        if not self.state:
            return

        # velocity calculation
        v_l1 = self.r * self.v_wheel_l
        v_r1 = self.r * self.v_wheel_r
        
        v_l2 = max(self.v_min, min(self.v_max, v_l1))
        v_r2 = max(self.v_min, min(self.v_max, v_r1))
        
        v = (v_l2 + v_r2) / 2.0
        omega = (v_r2 - v_l2) / self.l

        dt = 0.1
        delta_phi_z = omega * dt
        delta_x = v * math.cos(self.pose_phi_z) * dt
        delta_y = v * math.sin(self.pose_phi_z) * dt
        
        self.pose_x += delta_x
        self.pose_y += delta_y
        self.pose_phi_z += delta_phi_z
        
        self.pose_phi_z = math.atan2(math.sin(self.pose_phi_z), math.cos(self.pose_phi_z))

        pose_msg = TaskSpacePose()
        pose_msg.x = self.pose_x
        pose_msg.y = self.pose_y
        pose_msg.phi_z = self.pose_phi_z
        
        self.pose_publisher.publish(pose_msg)


def main(args=None):
    try:
        rclpy.init(args=args)
        node = AlphaWarriorNode()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()


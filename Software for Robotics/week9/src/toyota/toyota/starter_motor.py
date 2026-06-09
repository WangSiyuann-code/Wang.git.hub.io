import time
from ros_gz_interfaces.srv import SetEntityPose

import rclpy
from rclpy.node import Node

class StarterMotor(Node):

    def __init__(self):
        super().__init__('starter_motor')

        self.service_client = self.create_client(
            srv_type=SetEntityPose,
            srv_name='/world/lidar_sensor/set_pose')

        while not self.service_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info(f'service {self.service_client.srv_name} not available, waiting...')


    def send_pose_to_gazebo(self):

        request = SetEntityPose.Request()

        request.entity.name = "Construction Cone"

        # Set the position
        request.pose.position.x = 0.0
        request.pose.position.y = 0.0
        request.pose.position.z = 10.0

        # Set the orientation
        request.pose.orientation.x = 0.0
        request.pose.orientation.y = 0.0
        request.pose.orientation.z = 10.0
        request.pose.orientation.w = 1.0

        return self.service_client.call_async(request)


def main(args=None):
    try:
        rclpy.init(args=args)

        node = StarterMotor()
        future = node.send_pose_to_gazebo()
        rclpy.spin_until_future_complete(node, future)

    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)



if __name__ == '__main__':
    main()

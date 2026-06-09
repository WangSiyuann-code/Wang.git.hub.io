from math import sin, cos, pi
from geometry_msgs.msg import TransformStamped

import rclpy
from rclpy.node import Node

import tf2_ros

class Chair(Node):

    def __init__(self):
        super().__init__('chair')

        self.robot_name = "omega_enforcer"
        self.transform_broadcaster = tf2_ros.TransformBroadcaster(self)

        self.timer_period: float = 0.01
        self.timer_elapsed_time: float = 0
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

    def timer_callback(self):
        #trajectory_radius = 0.2
        #trajectory_frequency = 0.1

        tfs = TransformStamped()
        tfs.header.stamp = self.get_clock().now().to_msg()
        tfs.header.frame_id = 'turbo_droid'
        tfs.child_frame_id = self.robot_name

        # Set the translation of the transform
        tfs.transform.translation.x = 0.0
        tfs.transform.translation.y = 0.02 * self.timer_elapsed_time
        tfs.transform.translation.z = 0.0

        # Set the rotation of the transform
        phi: float = 0
        tfs.transform.rotation.w = cos(phi/2.0)
        tfs.transform.rotation.x = 0.0
        tfs.transform.rotation.y = 0.0
        tfs.transform.rotation.z = 0.0

        # Send the transformation
        self.transform_broadcaster.sendTransform(tfs)

        # Update internal time counter
        self.timer_elapsed_time += self.timer_period


def main(args=None):
    try:
        rclpy.init(args=args)

        node = Chair()

        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)

if __name__ == '__main__':
    main()

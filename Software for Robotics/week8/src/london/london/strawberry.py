import rclpy
from rclpy.node import Node

import tf2_ros

class Strawberry(Node):

    def __init__(self):
        super().__init__('strawberry')

        # Setting up the Transform_Listener
        self.transform_listener_buffer = tf2_ros.Buffer()
        self.transform_listener = tf2_ros.TransformListener(self.transform_listener_buffer, self)

        # Information about the transform we want to listen to
        self.parent_name = "turbo_droid"
        self.child_name = "omega_enforcer"

        self.timer_period: float = 0.1
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

    def timer_callback(self):

        try:
            tfs =   self.transform_listener_buffer.lookup_transform(
                    self.parent_name,
                    self.child_name,
                    rclpy.time.Time())

            self.get_logger().info(f"Transform: {tfs}")

        except tf2_ros.TransformException as e:

            self.get_logger().error(
                f'Could not get transform from `{self.parent_name}` to `{self.child_name}`: {e}')


def main(args=None):

    try:
        rclpy.init(args=args)

        node = Strawberry()

        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)

if __name__ == '__main__':
    main()

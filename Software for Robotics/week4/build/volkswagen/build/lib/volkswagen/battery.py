
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int32


class BatteryNode(Node):

    def __init__(self):
        super().__init__('battery')

        self.battery_publisher = self.create_publisher(
            msg_type=Int32,
            topic='/disassemble',
            qos_profile=1)

        timer_period: float = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.incremental_id: int = 0

    def timer_callback(self):

        msg = Int32()
        msg.data = 66

        self.battery_publisher.publish(msg)
        self.incremental_id = self.incremental_id + 1
        self.get_logger().info('Publishing "%s"'%msg.data)


def main(args=None):

    try:
        rclpy.init(args=args)

        node = BatteryNode()

        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()

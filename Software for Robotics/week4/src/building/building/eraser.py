
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Bool


class EraserNode(Node):

    def __init__(self):
        super().__init__('eraser')
        self.eraser_subscriber = self.create_subscription(
            msg_type=Bool,
            topic='/london',
            callback=self.eraser_subscriber_callback,
            qos_profile=1)

    def eraser_subscriber_callback(self, msg: Bool):
        
        self.get_logger().info(f"""
        I have received message.
        It says
            
               '{msg.data}'
               
             """)


def main(args=None):

    try:
        rclpy.init(args=args)

        node = EraserNode()

        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()

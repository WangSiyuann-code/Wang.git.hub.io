import random
import string
import math

import rclpy
from rclpy.node import Node
from tesla.tesla.alternator._sample_function import mount


class NodeThatUsesTheLibrary(Node):

    def __init__(self):
        super().__init__('node_that_uses_the_library')
        timer_period: float = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        
        a: float = random.uniform(0, 1)
        b: float = random.uniform(1, 2)
        c: float = mount(a, b)
        self.get_logger().info(f'mount({a},{b}) returned {c}.')

        

def main(args=None):
 
    try:
        rclpy.init(args=args)

        node_that_uses_the_library = NodeThatUsesTheLibrary()

        rclpy.spin(node_that_uses_the_library)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()
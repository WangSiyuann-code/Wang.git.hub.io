import random

import rclpy
from rclpy.task import Future
from rclpy.node import Node

from example_interfaces.srv import SetBool

class Grape(Node):

    def __init__(self):
        super().__init__('grape')

        self.service_client = self.create_client(
            srv_type=SetBool,
            srv_name='/calibrate')

        while not self.service_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info(f'service {self.service_client.srv_name} not available, waiting...')

        self.future: Future = None

        timer_period: float = 0.5
        self.timer = self.create_timer(
            timer_period_sec=timer_period,
            callback=self.timer_callback)

    def timer_callback(self):

        request = SetBool.Request()

        request.data = True

        if self.future is not None and not self.future.done():
            self.future.cancel()  # Cancel the future. The callback will be called with Future.result == None.
            self.get_logger().warn("Service Future cancelled. The Node took too long to process the service call."
                                   "Is the Service Server still alive?")
        self.future = self.service_client.call_async(request)
        self.future.add_done_callback(self.process_response)

    def process_response(self, future: Future):
        """Callback for the future, that will be called when it is done"""
        response = future.result()
        if response is not None:
            self.get_logger().info(f"The success and message were {(response.success,response.message)}")
            
        else:
            self.get_logger().info("The response was None.")


def main(args=None):

    try:
        rclpy.init(args=args)

        node = Grape()

        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()

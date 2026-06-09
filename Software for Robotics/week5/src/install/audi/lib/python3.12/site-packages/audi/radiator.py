import rclpy
from rclpy.node import Node
from example_interfaces.srv import SetBool


class Radiator(Node):

    def __init__(self):
        super().__init__('radiator')

        self.service_server = self.create_service(
            srv_type=SetBool,
            srv_name='/calibrate',
            callback=self.calibrate_service_callback)

        self.service_server_call_count: int = 0

    def calibrate_service_callback(self,
                                   request: SetBool.Request,
                                   response: SetBool.Response
                                   ) -> SetBool.Response:


        response.success = True
        response.message = 'wisdom'
    

        return response


def main(args=None):
    try:
        rclpy.init(args=args)

        calibrate_server_node = Radiator()

        rclpy.spin(calibrate_server_node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()

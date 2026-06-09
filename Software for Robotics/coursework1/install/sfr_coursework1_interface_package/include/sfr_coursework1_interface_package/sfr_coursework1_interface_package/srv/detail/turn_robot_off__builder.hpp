// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sfr_coursework1_interface_package:srv/TurnRobotOff.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfr_coursework1_interface_package/srv/turn_robot_off.hpp"


#ifndef SFR_COURSEWORK1_INTERFACE_PACKAGE__SRV__DETAIL__TURN_ROBOT_OFF__BUILDER_HPP_
#define SFR_COURSEWORK1_INTERFACE_PACKAGE__SRV__DETAIL__TURN_ROBOT_OFF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sfr_coursework1_interface_package/srv/detail/turn_robot_off__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sfr_coursework1_interface_package
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_coursework1_interface_package::srv::TurnRobotOff_Request>()
{
  return ::sfr_coursework1_interface_package::srv::TurnRobotOff_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace sfr_coursework1_interface_package


namespace sfr_coursework1_interface_package
{

namespace srv
{

namespace builder
{

class Init_TurnRobotOff_Response_success
{
public:
  Init_TurnRobotOff_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sfr_coursework1_interface_package::srv::TurnRobotOff_Response success(::sfr_coursework1_interface_package::srv::TurnRobotOff_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_coursework1_interface_package::srv::TurnRobotOff_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_coursework1_interface_package::srv::TurnRobotOff_Response>()
{
  return sfr_coursework1_interface_package::srv::builder::Init_TurnRobotOff_Response_success();
}

}  // namespace sfr_coursework1_interface_package


namespace sfr_coursework1_interface_package
{

namespace srv
{

namespace builder
{

class Init_TurnRobotOff_Event_response
{
public:
  explicit Init_TurnRobotOff_Event_response(::sfr_coursework1_interface_package::srv::TurnRobotOff_Event & msg)
  : msg_(msg)
  {}
  ::sfr_coursework1_interface_package::srv::TurnRobotOff_Event response(::sfr_coursework1_interface_package::srv::TurnRobotOff_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_coursework1_interface_package::srv::TurnRobotOff_Event msg_;
};

class Init_TurnRobotOff_Event_request
{
public:
  explicit Init_TurnRobotOff_Event_request(::sfr_coursework1_interface_package::srv::TurnRobotOff_Event & msg)
  : msg_(msg)
  {}
  Init_TurnRobotOff_Event_response request(::sfr_coursework1_interface_package::srv::TurnRobotOff_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TurnRobotOff_Event_response(msg_);
  }

private:
  ::sfr_coursework1_interface_package::srv::TurnRobotOff_Event msg_;
};

class Init_TurnRobotOff_Event_info
{
public:
  Init_TurnRobotOff_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurnRobotOff_Event_request info(::sfr_coursework1_interface_package::srv::TurnRobotOff_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TurnRobotOff_Event_request(msg_);
  }

private:
  ::sfr_coursework1_interface_package::srv::TurnRobotOff_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_coursework1_interface_package::srv::TurnRobotOff_Event>()
{
  return sfr_coursework1_interface_package::srv::builder::Init_TurnRobotOff_Event_info();
}

}  // namespace sfr_coursework1_interface_package

#endif  // SFR_COURSEWORK1_INTERFACE_PACKAGE__SRV__DETAIL__TURN_ROBOT_OFF__BUILDER_HPP_

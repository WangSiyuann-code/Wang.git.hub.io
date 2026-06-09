// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sfr_coursework1_interface_package:msg/TaskSpacePose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfr_coursework1_interface_package/msg/task_space_pose.hpp"


#ifndef SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__TASK_SPACE_POSE__BUILDER_HPP_
#define SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__TASK_SPACE_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sfr_coursework1_interface_package/msg/detail/task_space_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sfr_coursework1_interface_package
{

namespace msg
{

namespace builder
{

class Init_TaskSpacePose_phi_z
{
public:
  explicit Init_TaskSpacePose_phi_z(::sfr_coursework1_interface_package::msg::TaskSpacePose & msg)
  : msg_(msg)
  {}
  ::sfr_coursework1_interface_package::msg::TaskSpacePose phi_z(::sfr_coursework1_interface_package::msg::TaskSpacePose::_phi_z_type arg)
  {
    msg_.phi_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfr_coursework1_interface_package::msg::TaskSpacePose msg_;
};

class Init_TaskSpacePose_y
{
public:
  explicit Init_TaskSpacePose_y(::sfr_coursework1_interface_package::msg::TaskSpacePose & msg)
  : msg_(msg)
  {}
  Init_TaskSpacePose_phi_z y(::sfr_coursework1_interface_package::msg::TaskSpacePose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TaskSpacePose_phi_z(msg_);
  }

private:
  ::sfr_coursework1_interface_package::msg::TaskSpacePose msg_;
};

class Init_TaskSpacePose_x
{
public:
  Init_TaskSpacePose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskSpacePose_y x(::sfr_coursework1_interface_package::msg::TaskSpacePose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TaskSpacePose_y(msg_);
  }

private:
  ::sfr_coursework1_interface_package::msg::TaskSpacePose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfr_coursework1_interface_package::msg::TaskSpacePose>()
{
  return sfr_coursework1_interface_package::msg::builder::Init_TaskSpacePose_x();
}

}  // namespace sfr_coursework1_interface_package

#endif  // SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__TASK_SPACE_POSE__BUILDER_HPP_

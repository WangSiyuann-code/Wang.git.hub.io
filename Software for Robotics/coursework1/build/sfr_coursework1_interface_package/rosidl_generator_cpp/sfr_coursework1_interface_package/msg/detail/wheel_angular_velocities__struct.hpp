// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sfr_coursework1_interface_package:msg/WheelAngularVelocities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfr_coursework1_interface_package/msg/wheel_angular_velocities.hpp"


#ifndef SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__WHEEL_ANGULAR_VELOCITIES__STRUCT_HPP_
#define SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__WHEEL_ANGULAR_VELOCITIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sfr_coursework1_interface_package__msg__WheelAngularVelocities __attribute__((deprecated))
#else
# define DEPRECATED__sfr_coursework1_interface_package__msg__WheelAngularVelocities __declspec(deprecated)
#endif

namespace sfr_coursework1_interface_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelAngularVelocities_
{
  using Type = WheelAngularVelocities_<ContainerAllocator>;

  explicit WheelAngularVelocities_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_wheel_angular_velocity = 0.0;
      this->left_wheel_angular_velocity = 0.0;
    }
  }

  explicit WheelAngularVelocities_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_wheel_angular_velocity = 0.0;
      this->left_wheel_angular_velocity = 0.0;
    }
  }

  // field types and members
  using _right_wheel_angular_velocity_type =
    double;
  _right_wheel_angular_velocity_type right_wheel_angular_velocity;
  using _left_wheel_angular_velocity_type =
    double;
  _left_wheel_angular_velocity_type left_wheel_angular_velocity;

  // setters for named parameter idiom
  Type & set__right_wheel_angular_velocity(
    const double & _arg)
  {
    this->right_wheel_angular_velocity = _arg;
    return *this;
  }
  Type & set__left_wheel_angular_velocity(
    const double & _arg)
  {
    this->left_wheel_angular_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sfr_coursework1_interface_package::msg::WheelAngularVelocities_<ContainerAllocator> *;
  using ConstRawPtr =
    const sfr_coursework1_interface_package::msg::WheelAngularVelocities_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sfr_coursework1_interface_package::msg::WheelAngularVelocities_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sfr_coursework1_interface_package::msg::WheelAngularVelocities_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sfr_coursework1_interface_package::msg::WheelAngularVelocities_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sfr_coursework1_interface_package::msg::WheelAngularVelocities_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sfr_coursework1_interface_package::msg::WheelAngularVelocities_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sfr_coursework1_interface_package::msg::WheelAngularVelocities_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sfr_coursework1_interface_package::msg::WheelAngularVelocities_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sfr_coursework1_interface_package::msg::WheelAngularVelocities_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sfr_coursework1_interface_package__msg__WheelAngularVelocities
    std::shared_ptr<sfr_coursework1_interface_package::msg::WheelAngularVelocities_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sfr_coursework1_interface_package__msg__WheelAngularVelocities
    std::shared_ptr<sfr_coursework1_interface_package::msg::WheelAngularVelocities_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelAngularVelocities_ & other) const
  {
    if (this->right_wheel_angular_velocity != other.right_wheel_angular_velocity) {
      return false;
    }
    if (this->left_wheel_angular_velocity != other.left_wheel_angular_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelAngularVelocities_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelAngularVelocities_

// alias to use template instance with default allocator
using WheelAngularVelocities =
  sfr_coursework1_interface_package::msg::WheelAngularVelocities_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sfr_coursework1_interface_package

#endif  // SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__WHEEL_ANGULAR_VELOCITIES__STRUCT_HPP_

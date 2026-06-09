// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sfr_coursework1_interface_package:msg/WheelAngularVelocities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfr_coursework1_interface_package/msg/wheel_angular_velocities.h"


#ifndef SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__WHEEL_ANGULAR_VELOCITIES__STRUCT_H_
#define SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__WHEEL_ANGULAR_VELOCITIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/WheelAngularVelocities in the package sfr_coursework1_interface_package.
typedef struct sfr_coursework1_interface_package__msg__WheelAngularVelocities
{
  double right_wheel_angular_velocity;
  double left_wheel_angular_velocity;
} sfr_coursework1_interface_package__msg__WheelAngularVelocities;

// Struct for a sequence of sfr_coursework1_interface_package__msg__WheelAngularVelocities.
typedef struct sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence
{
  sfr_coursework1_interface_package__msg__WheelAngularVelocities * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__WHEEL_ANGULAR_VELOCITIES__STRUCT_H_

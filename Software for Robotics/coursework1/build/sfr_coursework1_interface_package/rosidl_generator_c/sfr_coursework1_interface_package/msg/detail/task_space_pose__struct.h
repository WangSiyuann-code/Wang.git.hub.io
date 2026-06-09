// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sfr_coursework1_interface_package:msg/TaskSpacePose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfr_coursework1_interface_package/msg/task_space_pose.h"


#ifndef SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__TASK_SPACE_POSE__STRUCT_H_
#define SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__TASK_SPACE_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TaskSpacePose in the package sfr_coursework1_interface_package.
typedef struct sfr_coursework1_interface_package__msg__TaskSpacePose
{
  double x;
  double y;
  double phi_z;
} sfr_coursework1_interface_package__msg__TaskSpacePose;

// Struct for a sequence of sfr_coursework1_interface_package__msg__TaskSpacePose.
typedef struct sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence
{
  sfr_coursework1_interface_package__msg__TaskSpacePose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__TASK_SPACE_POSE__STRUCT_H_

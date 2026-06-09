// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sfr_coursework1_interface_package:srv/TurnRobotOn.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfr_coursework1_interface_package/srv/turn_robot_on.h"


#ifndef SFR_COURSEWORK1_INTERFACE_PACKAGE__SRV__DETAIL__TURN_ROBOT_ON__STRUCT_H_
#define SFR_COURSEWORK1_INTERFACE_PACKAGE__SRV__DETAIL__TURN_ROBOT_ON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TurnRobotOn in the package sfr_coursework1_interface_package.
typedef struct sfr_coursework1_interface_package__srv__TurnRobotOn_Request
{
  uint8_t structure_needs_at_least_one_member;
} sfr_coursework1_interface_package__srv__TurnRobotOn_Request;

// Struct for a sequence of sfr_coursework1_interface_package__srv__TurnRobotOn_Request.
typedef struct sfr_coursework1_interface_package__srv__TurnRobotOn_Request__Sequence
{
  sfr_coursework1_interface_package__srv__TurnRobotOn_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_coursework1_interface_package__srv__TurnRobotOn_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/TurnRobotOn in the package sfr_coursework1_interface_package.
typedef struct sfr_coursework1_interface_package__srv__TurnRobotOn_Response
{
  bool success;
} sfr_coursework1_interface_package__srv__TurnRobotOn_Response;

// Struct for a sequence of sfr_coursework1_interface_package__srv__TurnRobotOn_Response.
typedef struct sfr_coursework1_interface_package__srv__TurnRobotOn_Response__Sequence
{
  sfr_coursework1_interface_package__srv__TurnRobotOn_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_coursework1_interface_package__srv__TurnRobotOn_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  sfr_coursework1_interface_package__srv__TurnRobotOn_Event__request__MAX_SIZE = 1
};
// response
enum
{
  sfr_coursework1_interface_package__srv__TurnRobotOn_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/TurnRobotOn in the package sfr_coursework1_interface_package.
typedef struct sfr_coursework1_interface_package__srv__TurnRobotOn_Event
{
  service_msgs__msg__ServiceEventInfo info;
  sfr_coursework1_interface_package__srv__TurnRobotOn_Request__Sequence request;
  sfr_coursework1_interface_package__srv__TurnRobotOn_Response__Sequence response;
} sfr_coursework1_interface_package__srv__TurnRobotOn_Event;

// Struct for a sequence of sfr_coursework1_interface_package__srv__TurnRobotOn_Event.
typedef struct sfr_coursework1_interface_package__srv__TurnRobotOn_Event__Sequence
{
  sfr_coursework1_interface_package__srv__TurnRobotOn_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_coursework1_interface_package__srv__TurnRobotOn_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SFR_COURSEWORK1_INTERFACE_PACKAGE__SRV__DETAIL__TURN_ROBOT_ON__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sfr_ca7_interface_package:action/MoveIn1D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfr_ca7_interface_package/action/move_in1_d.h"


#ifndef SFR_CA7_INTERFACE_PACKAGE__ACTION__DETAIL__MOVE_IN1_D__STRUCT_H_
#define SFR_CA7_INTERFACE_PACKAGE__ACTION__DETAIL__MOVE_IN1_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MoveIn1D in the package sfr_ca7_interface_package.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_Goal
{
  float goal_value;
} sfr_ca7_interface_package__action__MoveIn1D_Goal;

// Struct for a sequence of sfr_ca7_interface_package__action__MoveIn1D_Goal.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_Goal__Sequence
{
  sfr_ca7_interface_package__action__MoveIn1D_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_ca7_interface_package__action__MoveIn1D_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/MoveIn1D in the package sfr_ca7_interface_package.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_Result
{
  float end_value;
} sfr_ca7_interface_package__action__MoveIn1D_Result;

// Struct for a sequence of sfr_ca7_interface_package__action__MoveIn1D_Result.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_Result__Sequence
{
  sfr_ca7_interface_package__action__MoveIn1D_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_ca7_interface_package__action__MoveIn1D_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/MoveIn1D in the package sfr_ca7_interface_package.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_Feedback
{
  float current_value;
} sfr_ca7_interface_package__action__MoveIn1D_Feedback;

// Struct for a sequence of sfr_ca7_interface_package__action__MoveIn1D_Feedback.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_Feedback__Sequence
{
  sfr_ca7_interface_package__action__MoveIn1D_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_ca7_interface_package__action__MoveIn1D_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "sfr_ca7_interface_package/action/detail/move_in1_d__struct.h"

/// Struct defined in action/MoveIn1D in the package sfr_ca7_interface_package.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  sfr_ca7_interface_package__action__MoveIn1D_Goal goal;
} sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Request;

// Struct for a sequence of sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Request.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Request__Sequence
{
  sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveIn1D in the package sfr_ca7_interface_package.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Response;

// Struct for a sequence of sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Response.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Response__Sequence
{
  sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MoveIn1D in the package sfr_ca7_interface_package.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Request__Sequence request;
  sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Response__Sequence response;
} sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Event;

// Struct for a sequence of sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Event.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Event__Sequence
{
  sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_ca7_interface_package__action__MoveIn1D_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveIn1D in the package sfr_ca7_interface_package.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} sfr_ca7_interface_package__action__MoveIn1D_GetResult_Request;

// Struct for a sequence of sfr_ca7_interface_package__action__MoveIn1D_GetResult_Request.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_GetResult_Request__Sequence
{
  sfr_ca7_interface_package__action__MoveIn1D_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_ca7_interface_package__action__MoveIn1D_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "sfr_ca7_interface_package/action/detail/move_in1_d__struct.h"

/// Struct defined in action/MoveIn1D in the package sfr_ca7_interface_package.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_GetResult_Response
{
  int8_t status;
  sfr_ca7_interface_package__action__MoveIn1D_Result result;
} sfr_ca7_interface_package__action__MoveIn1D_GetResult_Response;

// Struct for a sequence of sfr_ca7_interface_package__action__MoveIn1D_GetResult_Response.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_GetResult_Response__Sequence
{
  sfr_ca7_interface_package__action__MoveIn1D_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_ca7_interface_package__action__MoveIn1D_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  sfr_ca7_interface_package__action__MoveIn1D_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  sfr_ca7_interface_package__action__MoveIn1D_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MoveIn1D in the package sfr_ca7_interface_package.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  sfr_ca7_interface_package__action__MoveIn1D_GetResult_Request__Sequence request;
  sfr_ca7_interface_package__action__MoveIn1D_GetResult_Response__Sequence response;
} sfr_ca7_interface_package__action__MoveIn1D_GetResult_Event;

// Struct for a sequence of sfr_ca7_interface_package__action__MoveIn1D_GetResult_Event.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_GetResult_Event__Sequence
{
  sfr_ca7_interface_package__action__MoveIn1D_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_ca7_interface_package__action__MoveIn1D_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "sfr_ca7_interface_package/action/detail/move_in1_d__struct.h"

/// Struct defined in action/MoveIn1D in the package sfr_ca7_interface_package.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  sfr_ca7_interface_package__action__MoveIn1D_Feedback feedback;
} sfr_ca7_interface_package__action__MoveIn1D_FeedbackMessage;

// Struct for a sequence of sfr_ca7_interface_package__action__MoveIn1D_FeedbackMessage.
typedef struct sfr_ca7_interface_package__action__MoveIn1D_FeedbackMessage__Sequence
{
  sfr_ca7_interface_package__action__MoveIn1D_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfr_ca7_interface_package__action__MoveIn1D_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SFR_CA7_INTERFACE_PACKAGE__ACTION__DETAIL__MOVE_IN1_D__STRUCT_H_

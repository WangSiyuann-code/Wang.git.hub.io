// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sfr_coursework1_interface_package:msg/WheelAngularVelocities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfr_coursework1_interface_package/msg/wheel_angular_velocities.h"


#ifndef SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__WHEEL_ANGULAR_VELOCITIES__FUNCTIONS_H_
#define SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__WHEEL_ANGULAR_VELOCITIES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "sfr_coursework1_interface_package/msg/rosidl_generator_c__visibility_control.h"

#include "sfr_coursework1_interface_package/msg/detail/wheel_angular_velocities__struct.h"

/// Initialize msg/WheelAngularVelocities message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sfr_coursework1_interface_package__msg__WheelAngularVelocities
 * )) before or use
 * sfr_coursework1_interface_package__msg__WheelAngularVelocities__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
bool
sfr_coursework1_interface_package__msg__WheelAngularVelocities__init(sfr_coursework1_interface_package__msg__WheelAngularVelocities * msg);

/// Finalize msg/WheelAngularVelocities message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
void
sfr_coursework1_interface_package__msg__WheelAngularVelocities__fini(sfr_coursework1_interface_package__msg__WheelAngularVelocities * msg);

/// Create msg/WheelAngularVelocities message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sfr_coursework1_interface_package__msg__WheelAngularVelocities__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
sfr_coursework1_interface_package__msg__WheelAngularVelocities *
sfr_coursework1_interface_package__msg__WheelAngularVelocities__create(void);

/// Destroy msg/WheelAngularVelocities message.
/**
 * It calls
 * sfr_coursework1_interface_package__msg__WheelAngularVelocities__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
void
sfr_coursework1_interface_package__msg__WheelAngularVelocities__destroy(sfr_coursework1_interface_package__msg__WheelAngularVelocities * msg);

/// Check for msg/WheelAngularVelocities message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
bool
sfr_coursework1_interface_package__msg__WheelAngularVelocities__are_equal(const sfr_coursework1_interface_package__msg__WheelAngularVelocities * lhs, const sfr_coursework1_interface_package__msg__WheelAngularVelocities * rhs);

/// Copy a msg/WheelAngularVelocities message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
bool
sfr_coursework1_interface_package__msg__WheelAngularVelocities__copy(
  const sfr_coursework1_interface_package__msg__WheelAngularVelocities * input,
  sfr_coursework1_interface_package__msg__WheelAngularVelocities * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
const rosidl_type_hash_t *
sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
const rosidl_runtime_c__type_description__TypeDescription *
sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
const rosidl_runtime_c__type_description__TypeSource *
sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
const rosidl_runtime_c__type_description__TypeSource__Sequence *
sfr_coursework1_interface_package__msg__WheelAngularVelocities__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/WheelAngularVelocities messages.
/**
 * It allocates the memory for the number of elements and calls
 * sfr_coursework1_interface_package__msg__WheelAngularVelocities__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
bool
sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence__init(sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence * array, size_t size);

/// Finalize array of msg/WheelAngularVelocities messages.
/**
 * It calls
 * sfr_coursework1_interface_package__msg__WheelAngularVelocities__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
void
sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence__fini(sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence * array);

/// Create array of msg/WheelAngularVelocities messages.
/**
 * It allocates the memory for the array and calls
 * sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence *
sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence__create(size_t size);

/// Destroy array of msg/WheelAngularVelocities messages.
/**
 * It calls
 * sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
void
sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence__destroy(sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence * array);

/// Check for msg/WheelAngularVelocities message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
bool
sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence__are_equal(const sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence * lhs, const sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence * rhs);

/// Copy an array of msg/WheelAngularVelocities messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfr_coursework1_interface_package
bool
sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence__copy(
  const sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence * input,
  sfr_coursework1_interface_package__msg__WheelAngularVelocities__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SFR_COURSEWORK1_INTERFACE_PACKAGE__MSG__DETAIL__WHEEL_ANGULAR_VELOCITIES__FUNCTIONS_H_

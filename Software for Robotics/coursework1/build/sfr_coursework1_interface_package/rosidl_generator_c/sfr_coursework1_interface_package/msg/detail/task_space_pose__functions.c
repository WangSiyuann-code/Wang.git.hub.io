// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sfr_coursework1_interface_package:msg/TaskSpacePose.idl
// generated code does not contain a copyright notice
#include "sfr_coursework1_interface_package/msg/detail/task_space_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sfr_coursework1_interface_package__msg__TaskSpacePose__init(sfr_coursework1_interface_package__msg__TaskSpacePose * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // phi_z
  return true;
}

void
sfr_coursework1_interface_package__msg__TaskSpacePose__fini(sfr_coursework1_interface_package__msg__TaskSpacePose * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // phi_z
}

bool
sfr_coursework1_interface_package__msg__TaskSpacePose__are_equal(const sfr_coursework1_interface_package__msg__TaskSpacePose * lhs, const sfr_coursework1_interface_package__msg__TaskSpacePose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // phi_z
  if (lhs->phi_z != rhs->phi_z) {
    return false;
  }
  return true;
}

bool
sfr_coursework1_interface_package__msg__TaskSpacePose__copy(
  const sfr_coursework1_interface_package__msg__TaskSpacePose * input,
  sfr_coursework1_interface_package__msg__TaskSpacePose * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // phi_z
  output->phi_z = input->phi_z;
  return true;
}

sfr_coursework1_interface_package__msg__TaskSpacePose *
sfr_coursework1_interface_package__msg__TaskSpacePose__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework1_interface_package__msg__TaskSpacePose * msg = (sfr_coursework1_interface_package__msg__TaskSpacePose *)allocator.allocate(sizeof(sfr_coursework1_interface_package__msg__TaskSpacePose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sfr_coursework1_interface_package__msg__TaskSpacePose));
  bool success = sfr_coursework1_interface_package__msg__TaskSpacePose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sfr_coursework1_interface_package__msg__TaskSpacePose__destroy(sfr_coursework1_interface_package__msg__TaskSpacePose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sfr_coursework1_interface_package__msg__TaskSpacePose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence__init(sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework1_interface_package__msg__TaskSpacePose * data = NULL;

  if (size) {
    data = (sfr_coursework1_interface_package__msg__TaskSpacePose *)allocator.zero_allocate(size, sizeof(sfr_coursework1_interface_package__msg__TaskSpacePose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sfr_coursework1_interface_package__msg__TaskSpacePose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sfr_coursework1_interface_package__msg__TaskSpacePose__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence__fini(sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sfr_coursework1_interface_package__msg__TaskSpacePose__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence *
sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence * array = (sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence *)allocator.allocate(sizeof(sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence__destroy(sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence__are_equal(const sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence * lhs, const sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sfr_coursework1_interface_package__msg__TaskSpacePose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence__copy(
  const sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence * input,
  sfr_coursework1_interface_package__msg__TaskSpacePose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sfr_coursework1_interface_package__msg__TaskSpacePose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sfr_coursework1_interface_package__msg__TaskSpacePose * data =
      (sfr_coursework1_interface_package__msg__TaskSpacePose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sfr_coursework1_interface_package__msg__TaskSpacePose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sfr_coursework1_interface_package__msg__TaskSpacePose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sfr_coursework1_interface_package__msg__TaskSpacePose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

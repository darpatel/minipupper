// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mini_pupper_interfaces:msg/LineDetectionResult.idl
// generated code does not contain a copyright notice
#include "mini_pupper_interfaces/msg/detail/line_detection_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `linear`
// Member `angular`
#include "rosidl_runtime_c/string_functions.h"

bool
mini_pupper_interfaces__msg__LineDetectionResult__init(mini_pupper_interfaces__msg__LineDetectionResult * msg)
{
  if (!msg) {
    return false;
  }
  // linear
  if (!rosidl_runtime_c__String__init(&msg->linear)) {
    mini_pupper_interfaces__msg__LineDetectionResult__fini(msg);
    return false;
  }
  // angular
  if (!rosidl_runtime_c__String__init(&msg->angular)) {
    mini_pupper_interfaces__msg__LineDetectionResult__fini(msg);
    return false;
  }
  return true;
}

void
mini_pupper_interfaces__msg__LineDetectionResult__fini(mini_pupper_interfaces__msg__LineDetectionResult * msg)
{
  if (!msg) {
    return;
  }
  // linear
  rosidl_runtime_c__String__fini(&msg->linear);
  // angular
  rosidl_runtime_c__String__fini(&msg->angular);
}

bool
mini_pupper_interfaces__msg__LineDetectionResult__are_equal(const mini_pupper_interfaces__msg__LineDetectionResult * lhs, const mini_pupper_interfaces__msg__LineDetectionResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linear
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->linear), &(rhs->linear)))
  {
    return false;
  }
  // angular
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->angular), &(rhs->angular)))
  {
    return false;
  }
  return true;
}

bool
mini_pupper_interfaces__msg__LineDetectionResult__copy(
  const mini_pupper_interfaces__msg__LineDetectionResult * input,
  mini_pupper_interfaces__msg__LineDetectionResult * output)
{
  if (!input || !output) {
    return false;
  }
  // linear
  if (!rosidl_runtime_c__String__copy(
      &(input->linear), &(output->linear)))
  {
    return false;
  }
  // angular
  if (!rosidl_runtime_c__String__copy(
      &(input->angular), &(output->angular)))
  {
    return false;
  }
  return true;
}

mini_pupper_interfaces__msg__LineDetectionResult *
mini_pupper_interfaces__msg__LineDetectionResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mini_pupper_interfaces__msg__LineDetectionResult * msg = (mini_pupper_interfaces__msg__LineDetectionResult *)allocator.allocate(sizeof(mini_pupper_interfaces__msg__LineDetectionResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mini_pupper_interfaces__msg__LineDetectionResult));
  bool success = mini_pupper_interfaces__msg__LineDetectionResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mini_pupper_interfaces__msg__LineDetectionResult__destroy(mini_pupper_interfaces__msg__LineDetectionResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mini_pupper_interfaces__msg__LineDetectionResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mini_pupper_interfaces__msg__LineDetectionResult__Sequence__init(mini_pupper_interfaces__msg__LineDetectionResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mini_pupper_interfaces__msg__LineDetectionResult * data = NULL;

  if (size) {
    data = (mini_pupper_interfaces__msg__LineDetectionResult *)allocator.zero_allocate(size, sizeof(mini_pupper_interfaces__msg__LineDetectionResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mini_pupper_interfaces__msg__LineDetectionResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mini_pupper_interfaces__msg__LineDetectionResult__fini(&data[i - 1]);
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
mini_pupper_interfaces__msg__LineDetectionResult__Sequence__fini(mini_pupper_interfaces__msg__LineDetectionResult__Sequence * array)
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
      mini_pupper_interfaces__msg__LineDetectionResult__fini(&array->data[i]);
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

mini_pupper_interfaces__msg__LineDetectionResult__Sequence *
mini_pupper_interfaces__msg__LineDetectionResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mini_pupper_interfaces__msg__LineDetectionResult__Sequence * array = (mini_pupper_interfaces__msg__LineDetectionResult__Sequence *)allocator.allocate(sizeof(mini_pupper_interfaces__msg__LineDetectionResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mini_pupper_interfaces__msg__LineDetectionResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mini_pupper_interfaces__msg__LineDetectionResult__Sequence__destroy(mini_pupper_interfaces__msg__LineDetectionResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mini_pupper_interfaces__msg__LineDetectionResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mini_pupper_interfaces__msg__LineDetectionResult__Sequence__are_equal(const mini_pupper_interfaces__msg__LineDetectionResult__Sequence * lhs, const mini_pupper_interfaces__msg__LineDetectionResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mini_pupper_interfaces__msg__LineDetectionResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mini_pupper_interfaces__msg__LineDetectionResult__Sequence__copy(
  const mini_pupper_interfaces__msg__LineDetectionResult__Sequence * input,
  mini_pupper_interfaces__msg__LineDetectionResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mini_pupper_interfaces__msg__LineDetectionResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mini_pupper_interfaces__msg__LineDetectionResult * data =
      (mini_pupper_interfaces__msg__LineDetectionResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mini_pupper_interfaces__msg__LineDetectionResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mini_pupper_interfaces__msg__LineDetectionResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mini_pupper_interfaces__msg__LineDetectionResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

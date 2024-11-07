// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mini_pupper_interfaces:msg/AiLineRecognitionResult.idl
// generated code does not contain a copyright notice
#include "mini_pupper_interfaces/msg/detail/ai_line_recognition_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `direction`
// Member `extent`
// Member `orientation`
#include "rosidl_runtime_c/string_functions.h"

bool
mini_pupper_interfaces__msg__AiLineRecognitionResult__init(mini_pupper_interfaces__msg__AiLineRecognitionResult * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__init(&msg->direction)) {
    mini_pupper_interfaces__msg__AiLineRecognitionResult__fini(msg);
    return false;
  }
  // extent
  if (!rosidl_runtime_c__String__init(&msg->extent)) {
    mini_pupper_interfaces__msg__AiLineRecognitionResult__fini(msg);
    return false;
  }
  // orientation
  if (!rosidl_runtime_c__String__init(&msg->orientation)) {
    mini_pupper_interfaces__msg__AiLineRecognitionResult__fini(msg);
    return false;
  }
  return true;
}

void
mini_pupper_interfaces__msg__AiLineRecognitionResult__fini(mini_pupper_interfaces__msg__AiLineRecognitionResult * msg)
{
  if (!msg) {
    return;
  }
  // direction
  rosidl_runtime_c__String__fini(&msg->direction);
  // extent
  rosidl_runtime_c__String__fini(&msg->extent);
  // orientation
  rosidl_runtime_c__String__fini(&msg->orientation);
}

bool
mini_pupper_interfaces__msg__AiLineRecognitionResult__are_equal(const mini_pupper_interfaces__msg__AiLineRecognitionResult * lhs, const mini_pupper_interfaces__msg__AiLineRecognitionResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  // extent
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->extent), &(rhs->extent)))
  {
    return false;
  }
  // orientation
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  return true;
}

bool
mini_pupper_interfaces__msg__AiLineRecognitionResult__copy(
  const mini_pupper_interfaces__msg__AiLineRecognitionResult * input,
  mini_pupper_interfaces__msg__AiLineRecognitionResult * output)
{
  if (!input || !output) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  // extent
  if (!rosidl_runtime_c__String__copy(
      &(input->extent), &(output->extent)))
  {
    return false;
  }
  // orientation
  if (!rosidl_runtime_c__String__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  return true;
}

mini_pupper_interfaces__msg__AiLineRecognitionResult *
mini_pupper_interfaces__msg__AiLineRecognitionResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mini_pupper_interfaces__msg__AiLineRecognitionResult * msg = (mini_pupper_interfaces__msg__AiLineRecognitionResult *)allocator.allocate(sizeof(mini_pupper_interfaces__msg__AiLineRecognitionResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mini_pupper_interfaces__msg__AiLineRecognitionResult));
  bool success = mini_pupper_interfaces__msg__AiLineRecognitionResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mini_pupper_interfaces__msg__AiLineRecognitionResult__destroy(mini_pupper_interfaces__msg__AiLineRecognitionResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mini_pupper_interfaces__msg__AiLineRecognitionResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence__init(mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mini_pupper_interfaces__msg__AiLineRecognitionResult * data = NULL;

  if (size) {
    data = (mini_pupper_interfaces__msg__AiLineRecognitionResult *)allocator.zero_allocate(size, sizeof(mini_pupper_interfaces__msg__AiLineRecognitionResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mini_pupper_interfaces__msg__AiLineRecognitionResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mini_pupper_interfaces__msg__AiLineRecognitionResult__fini(&data[i - 1]);
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
mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence__fini(mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence * array)
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
      mini_pupper_interfaces__msg__AiLineRecognitionResult__fini(&array->data[i]);
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

mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence *
mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence * array = (mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence *)allocator.allocate(sizeof(mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence__destroy(mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence__are_equal(const mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence * lhs, const mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mini_pupper_interfaces__msg__AiLineRecognitionResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence__copy(
  const mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence * input,
  mini_pupper_interfaces__msg__AiLineRecognitionResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mini_pupper_interfaces__msg__AiLineRecognitionResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mini_pupper_interfaces__msg__AiLineRecognitionResult * data =
      (mini_pupper_interfaces__msg__AiLineRecognitionResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mini_pupper_interfaces__msg__AiLineRecognitionResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mini_pupper_interfaces__msg__AiLineRecognitionResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mini_pupper_interfaces__msg__AiLineRecognitionResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

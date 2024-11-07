// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mini_pupper_interfaces:msg/LineDetectionResult.idl
// generated code does not contain a copyright notice

#ifndef MINI_PUPPER_INTERFACES__MSG__DETAIL__LINE_DETECTION_RESULT__STRUCT_H_
#define MINI_PUPPER_INTERFACES__MSG__DETAIL__LINE_DETECTION_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'linear'
// Member 'angular'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LineDetectionResult in the package mini_pupper_interfaces.
typedef struct mini_pupper_interfaces__msg__LineDetectionResult
{
  rosidl_runtime_c__String linear;
  rosidl_runtime_c__String angular;
} mini_pupper_interfaces__msg__LineDetectionResult;

// Struct for a sequence of mini_pupper_interfaces__msg__LineDetectionResult.
typedef struct mini_pupper_interfaces__msg__LineDetectionResult__Sequence
{
  mini_pupper_interfaces__msg__LineDetectionResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mini_pupper_interfaces__msg__LineDetectionResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MINI_PUPPER_INTERFACES__MSG__DETAIL__LINE_DETECTION_RESULT__STRUCT_H_

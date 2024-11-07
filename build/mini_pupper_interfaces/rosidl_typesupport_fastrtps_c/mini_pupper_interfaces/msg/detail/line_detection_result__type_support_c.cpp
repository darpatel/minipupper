// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mini_pupper_interfaces:msg/LineDetectionResult.idl
// generated code does not contain a copyright notice
#include "mini_pupper_interfaces/msg/detail/line_detection_result__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mini_pupper_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mini_pupper_interfaces/msg/detail/line_detection_result__struct.h"
#include "mini_pupper_interfaces/msg/detail/line_detection_result__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // angular, linear
#include "rosidl_runtime_c/string_functions.h"  // angular, linear

// forward declare type support functions


using _LineDetectionResult__ros_msg_type = mini_pupper_interfaces__msg__LineDetectionResult;

static bool _LineDetectionResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LineDetectionResult__ros_msg_type * ros_message = static_cast<const _LineDetectionResult__ros_msg_type *>(untyped_ros_message);
  // Field name: linear
  {
    const rosidl_runtime_c__String * str = &ros_message->linear;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: angular
  {
    const rosidl_runtime_c__String * str = &ros_message->angular;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _LineDetectionResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LineDetectionResult__ros_msg_type * ros_message = static_cast<_LineDetectionResult__ros_msg_type *>(untyped_ros_message);
  // Field name: linear
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->linear.data) {
      rosidl_runtime_c__String__init(&ros_message->linear);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->linear,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'linear'\n");
      return false;
    }
  }

  // Field name: angular
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->angular.data) {
      rosidl_runtime_c__String__init(&ros_message->angular);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->angular,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'angular'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mini_pupper_interfaces
size_t get_serialized_size_mini_pupper_interfaces__msg__LineDetectionResult(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LineDetectionResult__ros_msg_type * ros_message = static_cast<const _LineDetectionResult__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name linear
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->linear.size + 1);
  // field.name angular
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->angular.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _LineDetectionResult__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mini_pupper_interfaces__msg__LineDetectionResult(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mini_pupper_interfaces
size_t max_serialized_size_mini_pupper_interfaces__msg__LineDetectionResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: linear
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: angular
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mini_pupper_interfaces__msg__LineDetectionResult;
    is_plain =
      (
      offsetof(DataType, angular) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LineDetectionResult__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mini_pupper_interfaces__msg__LineDetectionResult(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LineDetectionResult = {
  "mini_pupper_interfaces::msg",
  "LineDetectionResult",
  _LineDetectionResult__cdr_serialize,
  _LineDetectionResult__cdr_deserialize,
  _LineDetectionResult__get_serialized_size,
  _LineDetectionResult__max_serialized_size
};

static rosidl_message_type_support_t _LineDetectionResult__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LineDetectionResult,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mini_pupper_interfaces, msg, LineDetectionResult)() {
  return &_LineDetectionResult__type_support;
}

#if defined(__cplusplus)
}
#endif

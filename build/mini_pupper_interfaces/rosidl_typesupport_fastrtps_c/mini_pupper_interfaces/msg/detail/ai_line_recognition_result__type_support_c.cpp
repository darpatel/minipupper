// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mini_pupper_interfaces:msg/AiLineRecognitionResult.idl
// generated code does not contain a copyright notice
#include "mini_pupper_interfaces/msg/detail/ai_line_recognition_result__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mini_pupper_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mini_pupper_interfaces/msg/detail/ai_line_recognition_result__struct.h"
#include "mini_pupper_interfaces/msg/detail/ai_line_recognition_result__functions.h"
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

#include "rosidl_runtime_c/string.h"  // direction, extent, orientation
#include "rosidl_runtime_c/string_functions.h"  // direction, extent, orientation

// forward declare type support functions


using _AiLineRecognitionResult__ros_msg_type = mini_pupper_interfaces__msg__AiLineRecognitionResult;

static bool _AiLineRecognitionResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AiLineRecognitionResult__ros_msg_type * ros_message = static_cast<const _AiLineRecognitionResult__ros_msg_type *>(untyped_ros_message);
  // Field name: direction
  {
    const rosidl_runtime_c__String * str = &ros_message->direction;
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

  // Field name: extent
  {
    const rosidl_runtime_c__String * str = &ros_message->extent;
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

  // Field name: orientation
  {
    const rosidl_runtime_c__String * str = &ros_message->orientation;
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

static bool _AiLineRecognitionResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AiLineRecognitionResult__ros_msg_type * ros_message = static_cast<_AiLineRecognitionResult__ros_msg_type *>(untyped_ros_message);
  // Field name: direction
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->direction.data) {
      rosidl_runtime_c__String__init(&ros_message->direction);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->direction,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'direction'\n");
      return false;
    }
  }

  // Field name: extent
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->extent.data) {
      rosidl_runtime_c__String__init(&ros_message->extent);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->extent,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'extent'\n");
      return false;
    }
  }

  // Field name: orientation
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->orientation.data) {
      rosidl_runtime_c__String__init(&ros_message->orientation);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->orientation,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'orientation'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mini_pupper_interfaces
size_t get_serialized_size_mini_pupper_interfaces__msg__AiLineRecognitionResult(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AiLineRecognitionResult__ros_msg_type * ros_message = static_cast<const _AiLineRecognitionResult__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name direction
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->direction.size + 1);
  // field.name extent
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->extent.size + 1);
  // field.name orientation
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->orientation.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _AiLineRecognitionResult__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mini_pupper_interfaces__msg__AiLineRecognitionResult(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mini_pupper_interfaces
size_t max_serialized_size_mini_pupper_interfaces__msg__AiLineRecognitionResult(
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

  // member: direction
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
  // member: extent
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
  // member: orientation
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
    using DataType = mini_pupper_interfaces__msg__AiLineRecognitionResult;
    is_plain =
      (
      offsetof(DataType, orientation) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AiLineRecognitionResult__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mini_pupper_interfaces__msg__AiLineRecognitionResult(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AiLineRecognitionResult = {
  "mini_pupper_interfaces::msg",
  "AiLineRecognitionResult",
  _AiLineRecognitionResult__cdr_serialize,
  _AiLineRecognitionResult__cdr_deserialize,
  _AiLineRecognitionResult__get_serialized_size,
  _AiLineRecognitionResult__max_serialized_size
};

static rosidl_message_type_support_t _AiLineRecognitionResult__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AiLineRecognitionResult,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mini_pupper_interfaces, msg, AiLineRecognitionResult)() {
  return &_AiLineRecognitionResult__type_support;
}

#if defined(__cplusplus)
}
#endif

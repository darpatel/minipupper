// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mini_pupper_interfaces:msg/LineDetectionResult.idl
// generated code does not contain a copyright notice
#include "mini_pupper_interfaces/msg/detail/line_detection_result__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mini_pupper_interfaces/msg/detail/line_detection_result__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mini_pupper_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mini_pupper_interfaces
cdr_serialize(
  const mini_pupper_interfaces::msg::LineDetectionResult & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: linear
  cdr << ros_message.linear;
  // Member: angular
  cdr << ros_message.angular;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mini_pupper_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mini_pupper_interfaces::msg::LineDetectionResult & ros_message)
{
  // Member: linear
  cdr >> ros_message.linear;

  // Member: angular
  cdr >> ros_message.angular;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mini_pupper_interfaces
get_serialized_size(
  const mini_pupper_interfaces::msg::LineDetectionResult & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: linear
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.linear.size() + 1);
  // Member: angular
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.angular.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mini_pupper_interfaces
max_serialized_size_LineDetectionResult(
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


  // Member: linear
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

  // Member: angular
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
    using DataType = mini_pupper_interfaces::msg::LineDetectionResult;
    is_plain =
      (
      offsetof(DataType, angular) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LineDetectionResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mini_pupper_interfaces::msg::LineDetectionResult *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LineDetectionResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mini_pupper_interfaces::msg::LineDetectionResult *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LineDetectionResult__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mini_pupper_interfaces::msg::LineDetectionResult *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LineDetectionResult__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LineDetectionResult(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LineDetectionResult__callbacks = {
  "mini_pupper_interfaces::msg",
  "LineDetectionResult",
  _LineDetectionResult__cdr_serialize,
  _LineDetectionResult__cdr_deserialize,
  _LineDetectionResult__get_serialized_size,
  _LineDetectionResult__max_serialized_size
};

static rosidl_message_type_support_t _LineDetectionResult__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LineDetectionResult__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mini_pupper_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mini_pupper_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<mini_pupper_interfaces::msg::LineDetectionResult>()
{
  return &mini_pupper_interfaces::msg::typesupport_fastrtps_cpp::_LineDetectionResult__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mini_pupper_interfaces, msg, LineDetectionResult)() {
  return &mini_pupper_interfaces::msg::typesupport_fastrtps_cpp::_LineDetectionResult__handle;
}

#ifdef __cplusplus
}
#endif

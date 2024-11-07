// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from mini_pupper_interfaces:msg/AiLineRecognitionResult.idl
// generated code does not contain a copyright notice

#ifndef MINI_PUPPER_INTERFACES__MSG__DETAIL__AI_LINE_RECOGNITION_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MINI_PUPPER_INTERFACES__MSG__DETAIL__AI_LINE_RECOGNITION_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mini_pupper_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "mini_pupper_interfaces/msg/detail/ai_line_recognition_result__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace mini_pupper_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mini_pupper_interfaces
cdr_serialize(
  const mini_pupper_interfaces::msg::AiLineRecognitionResult & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mini_pupper_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mini_pupper_interfaces::msg::AiLineRecognitionResult & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mini_pupper_interfaces
get_serialized_size(
  const mini_pupper_interfaces::msg::AiLineRecognitionResult & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mini_pupper_interfaces
max_serialized_size_AiLineRecognitionResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mini_pupper_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mini_pupper_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mini_pupper_interfaces, msg, AiLineRecognitionResult)();

#ifdef __cplusplus
}
#endif

#endif  // MINI_PUPPER_INTERFACES__MSG__DETAIL__AI_LINE_RECOGNITION_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

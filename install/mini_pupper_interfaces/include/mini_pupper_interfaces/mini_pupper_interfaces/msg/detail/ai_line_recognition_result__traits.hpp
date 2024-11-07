// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mini_pupper_interfaces:msg/AiLineRecognitionResult.idl
// generated code does not contain a copyright notice

#ifndef MINI_PUPPER_INTERFACES__MSG__DETAIL__AI_LINE_RECOGNITION_RESULT__TRAITS_HPP_
#define MINI_PUPPER_INTERFACES__MSG__DETAIL__AI_LINE_RECOGNITION_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mini_pupper_interfaces/msg/detail/ai_line_recognition_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mini_pupper_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const AiLineRecognitionResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: extent
  {
    out << "extent: ";
    rosidl_generator_traits::value_to_yaml(msg.extent, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AiLineRecognitionResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: extent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extent: ";
    rosidl_generator_traits::value_to_yaml(msg.extent, out);
    out << "\n";
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AiLineRecognitionResult & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mini_pupper_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mini_pupper_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mini_pupper_interfaces::msg::AiLineRecognitionResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  mini_pupper_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mini_pupper_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mini_pupper_interfaces::msg::AiLineRecognitionResult & msg)
{
  return mini_pupper_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mini_pupper_interfaces::msg::AiLineRecognitionResult>()
{
  return "mini_pupper_interfaces::msg::AiLineRecognitionResult";
}

template<>
inline const char * name<mini_pupper_interfaces::msg::AiLineRecognitionResult>()
{
  return "mini_pupper_interfaces/msg/AiLineRecognitionResult";
}

template<>
struct has_fixed_size<mini_pupper_interfaces::msg::AiLineRecognitionResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mini_pupper_interfaces::msg::AiLineRecognitionResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mini_pupper_interfaces::msg::AiLineRecognitionResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MINI_PUPPER_INTERFACES__MSG__DETAIL__AI_LINE_RECOGNITION_RESULT__TRAITS_HPP_

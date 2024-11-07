// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mini_pupper_interfaces:msg/AiLineRecognitionResult.idl
// generated code does not contain a copyright notice

#ifndef MINI_PUPPER_INTERFACES__MSG__DETAIL__AI_LINE_RECOGNITION_RESULT__BUILDER_HPP_
#define MINI_PUPPER_INTERFACES__MSG__DETAIL__AI_LINE_RECOGNITION_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mini_pupper_interfaces/msg/detail/ai_line_recognition_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mini_pupper_interfaces
{

namespace msg
{

namespace builder
{

class Init_AiLineRecognitionResult_orientation
{
public:
  explicit Init_AiLineRecognitionResult_orientation(::mini_pupper_interfaces::msg::AiLineRecognitionResult & msg)
  : msg_(msg)
  {}
  ::mini_pupper_interfaces::msg::AiLineRecognitionResult orientation(::mini_pupper_interfaces::msg::AiLineRecognitionResult::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mini_pupper_interfaces::msg::AiLineRecognitionResult msg_;
};

class Init_AiLineRecognitionResult_extent
{
public:
  explicit Init_AiLineRecognitionResult_extent(::mini_pupper_interfaces::msg::AiLineRecognitionResult & msg)
  : msg_(msg)
  {}
  Init_AiLineRecognitionResult_orientation extent(::mini_pupper_interfaces::msg::AiLineRecognitionResult::_extent_type arg)
  {
    msg_.extent = std::move(arg);
    return Init_AiLineRecognitionResult_orientation(msg_);
  }

private:
  ::mini_pupper_interfaces::msg::AiLineRecognitionResult msg_;
};

class Init_AiLineRecognitionResult_direction
{
public:
  Init_AiLineRecognitionResult_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AiLineRecognitionResult_extent direction(::mini_pupper_interfaces::msg::AiLineRecognitionResult::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_AiLineRecognitionResult_extent(msg_);
  }

private:
  ::mini_pupper_interfaces::msg::AiLineRecognitionResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mini_pupper_interfaces::msg::AiLineRecognitionResult>()
{
  return mini_pupper_interfaces::msg::builder::Init_AiLineRecognitionResult_direction();
}

}  // namespace mini_pupper_interfaces

#endif  // MINI_PUPPER_INTERFACES__MSG__DETAIL__AI_LINE_RECOGNITION_RESULT__BUILDER_HPP_

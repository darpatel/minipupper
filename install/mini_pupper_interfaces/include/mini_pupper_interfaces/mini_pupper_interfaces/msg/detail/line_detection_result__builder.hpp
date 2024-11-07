// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mini_pupper_interfaces:msg/LineDetectionResult.idl
// generated code does not contain a copyright notice

#ifndef MINI_PUPPER_INTERFACES__MSG__DETAIL__LINE_DETECTION_RESULT__BUILDER_HPP_
#define MINI_PUPPER_INTERFACES__MSG__DETAIL__LINE_DETECTION_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mini_pupper_interfaces/msg/detail/line_detection_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mini_pupper_interfaces
{

namespace msg
{

namespace builder
{

class Init_LineDetectionResult_angular
{
public:
  explicit Init_LineDetectionResult_angular(::mini_pupper_interfaces::msg::LineDetectionResult & msg)
  : msg_(msg)
  {}
  ::mini_pupper_interfaces::msg::LineDetectionResult angular(::mini_pupper_interfaces::msg::LineDetectionResult::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mini_pupper_interfaces::msg::LineDetectionResult msg_;
};

class Init_LineDetectionResult_linear
{
public:
  Init_LineDetectionResult_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LineDetectionResult_angular linear(::mini_pupper_interfaces::msg::LineDetectionResult::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_LineDetectionResult_angular(msg_);
  }

private:
  ::mini_pupper_interfaces::msg::LineDetectionResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mini_pupper_interfaces::msg::LineDetectionResult>()
{
  return mini_pupper_interfaces::msg::builder::Init_LineDetectionResult_linear();
}

}  // namespace mini_pupper_interfaces

#endif  // MINI_PUPPER_INTERFACES__MSG__DETAIL__LINE_DETECTION_RESULT__BUILDER_HPP_

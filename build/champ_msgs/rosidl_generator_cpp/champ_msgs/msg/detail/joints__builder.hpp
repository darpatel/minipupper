// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from champ_msgs:msg/Joints.idl
// generated code does not contain a copyright notice

#ifndef CHAMP_MSGS__MSG__DETAIL__JOINTS__BUILDER_HPP_
#define CHAMP_MSGS__MSG__DETAIL__JOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "champ_msgs/msg/detail/joints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace champ_msgs
{

namespace msg
{

namespace builder
{

class Init_Joints_position
{
public:
  Init_Joints_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::champ_msgs::msg::Joints position(::champ_msgs::msg::Joints::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::champ_msgs::msg::Joints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::champ_msgs::msg::Joints>()
{
  return champ_msgs::msg::builder::Init_Joints_position();
}

}  // namespace champ_msgs

#endif  // CHAMP_MSGS__MSG__DETAIL__JOINTS__BUILDER_HPP_

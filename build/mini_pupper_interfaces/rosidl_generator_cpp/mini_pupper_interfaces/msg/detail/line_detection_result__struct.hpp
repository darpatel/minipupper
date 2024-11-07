// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mini_pupper_interfaces:msg/LineDetectionResult.idl
// generated code does not contain a copyright notice

#ifndef MINI_PUPPER_INTERFACES__MSG__DETAIL__LINE_DETECTION_RESULT__STRUCT_HPP_
#define MINI_PUPPER_INTERFACES__MSG__DETAIL__LINE_DETECTION_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mini_pupper_interfaces__msg__LineDetectionResult __attribute__((deprecated))
#else
# define DEPRECATED__mini_pupper_interfaces__msg__LineDetectionResult __declspec(deprecated)
#endif

namespace mini_pupper_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LineDetectionResult_
{
  using Type = LineDetectionResult_<ContainerAllocator>;

  explicit LineDetectionResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear = "";
      this->angular = "";
    }
  }

  explicit LineDetectionResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear(_alloc),
    angular(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear = "";
      this->angular = "";
    }
  }

  // field types and members
  using _linear_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _linear_type linear;
  using _angular_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _angular_type angular;

  // setters for named parameter idiom
  Type & set__linear(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->linear = _arg;
    return *this;
  }
  Type & set__angular(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->angular = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mini_pupper_interfaces::msg::LineDetectionResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const mini_pupper_interfaces::msg::LineDetectionResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mini_pupper_interfaces::msg::LineDetectionResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mini_pupper_interfaces::msg::LineDetectionResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mini_pupper_interfaces::msg::LineDetectionResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mini_pupper_interfaces::msg::LineDetectionResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mini_pupper_interfaces::msg::LineDetectionResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mini_pupper_interfaces::msg::LineDetectionResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mini_pupper_interfaces::msg::LineDetectionResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mini_pupper_interfaces::msg::LineDetectionResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mini_pupper_interfaces__msg__LineDetectionResult
    std::shared_ptr<mini_pupper_interfaces::msg::LineDetectionResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mini_pupper_interfaces__msg__LineDetectionResult
    std::shared_ptr<mini_pupper_interfaces::msg::LineDetectionResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LineDetectionResult_ & other) const
  {
    if (this->linear != other.linear) {
      return false;
    }
    if (this->angular != other.angular) {
      return false;
    }
    return true;
  }
  bool operator!=(const LineDetectionResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LineDetectionResult_

// alias to use template instance with default allocator
using LineDetectionResult =
  mini_pupper_interfaces::msg::LineDetectionResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mini_pupper_interfaces

#endif  // MINI_PUPPER_INTERFACES__MSG__DETAIL__LINE_DETECTION_RESULT__STRUCT_HPP_

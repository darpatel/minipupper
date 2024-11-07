// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mini_pupper_interfaces:msg/AiLineRecognitionResult.idl
// generated code does not contain a copyright notice

#ifndef MINI_PUPPER_INTERFACES__MSG__DETAIL__AI_LINE_RECOGNITION_RESULT__STRUCT_HPP_
#define MINI_PUPPER_INTERFACES__MSG__DETAIL__AI_LINE_RECOGNITION_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mini_pupper_interfaces__msg__AiLineRecognitionResult __attribute__((deprecated))
#else
# define DEPRECATED__mini_pupper_interfaces__msg__AiLineRecognitionResult __declspec(deprecated)
#endif

namespace mini_pupper_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AiLineRecognitionResult_
{
  using Type = AiLineRecognitionResult_<ContainerAllocator>;

  explicit AiLineRecognitionResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
      this->extent = "";
      this->orientation = "";
    }
  }

  explicit AiLineRecognitionResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc),
    extent(_alloc),
    orientation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
      this->extent = "";
      this->orientation = "";
    }
  }

  // field types and members
  using _direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _direction_type direction;
  using _extent_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _extent_type extent;
  using _orientation_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _orientation_type orientation;

  // setters for named parameter idiom
  Type & set__direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__extent(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->extent = _arg;
    return *this;
  }
  Type & set__orientation(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mini_pupper_interfaces::msg::AiLineRecognitionResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const mini_pupper_interfaces::msg::AiLineRecognitionResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mini_pupper_interfaces::msg::AiLineRecognitionResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mini_pupper_interfaces::msg::AiLineRecognitionResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mini_pupper_interfaces::msg::AiLineRecognitionResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mini_pupper_interfaces::msg::AiLineRecognitionResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mini_pupper_interfaces::msg::AiLineRecognitionResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mini_pupper_interfaces::msg::AiLineRecognitionResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mini_pupper_interfaces::msg::AiLineRecognitionResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mini_pupper_interfaces::msg::AiLineRecognitionResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mini_pupper_interfaces__msg__AiLineRecognitionResult
    std::shared_ptr<mini_pupper_interfaces::msg::AiLineRecognitionResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mini_pupper_interfaces__msg__AiLineRecognitionResult
    std::shared_ptr<mini_pupper_interfaces::msg::AiLineRecognitionResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AiLineRecognitionResult_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    if (this->extent != other.extent) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const AiLineRecognitionResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AiLineRecognitionResult_

// alias to use template instance with default allocator
using AiLineRecognitionResult =
  mini_pupper_interfaces::msg::AiLineRecognitionResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mini_pupper_interfaces

#endif  // MINI_PUPPER_INTERFACES__MSG__DETAIL__AI_LINE_RECOGNITION_RESULT__STRUCT_HPP_

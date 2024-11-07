// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mini_pupper_interfaces:msg/LineDetectionResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mini_pupper_interfaces/msg/detail/line_detection_result__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mini_pupper_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LineDetectionResult_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mini_pupper_interfaces::msg::LineDetectionResult(_init);
}

void LineDetectionResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mini_pupper_interfaces::msg::LineDetectionResult *>(message_memory);
  typed_message->~LineDetectionResult();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LineDetectionResult_message_member_array[2] = {
  {
    "linear",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mini_pupper_interfaces::msg::LineDetectionResult, linear),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mini_pupper_interfaces::msg::LineDetectionResult, angular),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LineDetectionResult_message_members = {
  "mini_pupper_interfaces::msg",  // message namespace
  "LineDetectionResult",  // message name
  2,  // number of fields
  sizeof(mini_pupper_interfaces::msg::LineDetectionResult),
  LineDetectionResult_message_member_array,  // message members
  LineDetectionResult_init_function,  // function to initialize message memory (memory has to be allocated)
  LineDetectionResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LineDetectionResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LineDetectionResult_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mini_pupper_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mini_pupper_interfaces::msg::LineDetectionResult>()
{
  return &::mini_pupper_interfaces::msg::rosidl_typesupport_introspection_cpp::LineDetectionResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mini_pupper_interfaces, msg, LineDetectionResult)() {
  return &::mini_pupper_interfaces::msg::rosidl_typesupport_introspection_cpp::LineDetectionResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

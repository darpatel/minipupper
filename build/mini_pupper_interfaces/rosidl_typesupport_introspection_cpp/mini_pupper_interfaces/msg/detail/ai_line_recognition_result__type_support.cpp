// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mini_pupper_interfaces:msg/AiLineRecognitionResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mini_pupper_interfaces/msg/detail/ai_line_recognition_result__struct.hpp"
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

void AiLineRecognitionResult_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mini_pupper_interfaces::msg::AiLineRecognitionResult(_init);
}

void AiLineRecognitionResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mini_pupper_interfaces::msg::AiLineRecognitionResult *>(message_memory);
  typed_message->~AiLineRecognitionResult();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AiLineRecognitionResult_message_member_array[3] = {
  {
    "direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mini_pupper_interfaces::msg::AiLineRecognitionResult, direction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "extent",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mini_pupper_interfaces::msg::AiLineRecognitionResult, extent),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mini_pupper_interfaces::msg::AiLineRecognitionResult, orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AiLineRecognitionResult_message_members = {
  "mini_pupper_interfaces::msg",  // message namespace
  "AiLineRecognitionResult",  // message name
  3,  // number of fields
  sizeof(mini_pupper_interfaces::msg::AiLineRecognitionResult),
  AiLineRecognitionResult_message_member_array,  // message members
  AiLineRecognitionResult_init_function,  // function to initialize message memory (memory has to be allocated)
  AiLineRecognitionResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AiLineRecognitionResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AiLineRecognitionResult_message_members,
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
get_message_type_support_handle<mini_pupper_interfaces::msg::AiLineRecognitionResult>()
{
  return &::mini_pupper_interfaces::msg::rosidl_typesupport_introspection_cpp::AiLineRecognitionResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mini_pupper_interfaces, msg, AiLineRecognitionResult)() {
  return &::mini_pupper_interfaces::msg::rosidl_typesupport_introspection_cpp::AiLineRecognitionResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

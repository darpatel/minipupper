// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mini_pupper_interfaces:msg/AiLineRecognitionResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mini_pupper_interfaces/msg/detail/ai_line_recognition_result__rosidl_typesupport_introspection_c.h"
#include "mini_pupper_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mini_pupper_interfaces/msg/detail/ai_line_recognition_result__functions.h"
#include "mini_pupper_interfaces/msg/detail/ai_line_recognition_result__struct.h"


// Include directives for member types
// Member `direction`
// Member `extent`
// Member `orientation`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mini_pupper_interfaces__msg__AiLineRecognitionResult__rosidl_typesupport_introspection_c__AiLineRecognitionResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mini_pupper_interfaces__msg__AiLineRecognitionResult__init(message_memory);
}

void mini_pupper_interfaces__msg__AiLineRecognitionResult__rosidl_typesupport_introspection_c__AiLineRecognitionResult_fini_function(void * message_memory)
{
  mini_pupper_interfaces__msg__AiLineRecognitionResult__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mini_pupper_interfaces__msg__AiLineRecognitionResult__rosidl_typesupport_introspection_c__AiLineRecognitionResult_message_member_array[3] = {
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mini_pupper_interfaces__msg__AiLineRecognitionResult, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "extent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mini_pupper_interfaces__msg__AiLineRecognitionResult, extent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mini_pupper_interfaces__msg__AiLineRecognitionResult, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mini_pupper_interfaces__msg__AiLineRecognitionResult__rosidl_typesupport_introspection_c__AiLineRecognitionResult_message_members = {
  "mini_pupper_interfaces__msg",  // message namespace
  "AiLineRecognitionResult",  // message name
  3,  // number of fields
  sizeof(mini_pupper_interfaces__msg__AiLineRecognitionResult),
  mini_pupper_interfaces__msg__AiLineRecognitionResult__rosidl_typesupport_introspection_c__AiLineRecognitionResult_message_member_array,  // message members
  mini_pupper_interfaces__msg__AiLineRecognitionResult__rosidl_typesupport_introspection_c__AiLineRecognitionResult_init_function,  // function to initialize message memory (memory has to be allocated)
  mini_pupper_interfaces__msg__AiLineRecognitionResult__rosidl_typesupport_introspection_c__AiLineRecognitionResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mini_pupper_interfaces__msg__AiLineRecognitionResult__rosidl_typesupport_introspection_c__AiLineRecognitionResult_message_type_support_handle = {
  0,
  &mini_pupper_interfaces__msg__AiLineRecognitionResult__rosidl_typesupport_introspection_c__AiLineRecognitionResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mini_pupper_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mini_pupper_interfaces, msg, AiLineRecognitionResult)() {
  if (!mini_pupper_interfaces__msg__AiLineRecognitionResult__rosidl_typesupport_introspection_c__AiLineRecognitionResult_message_type_support_handle.typesupport_identifier) {
    mini_pupper_interfaces__msg__AiLineRecognitionResult__rosidl_typesupport_introspection_c__AiLineRecognitionResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mini_pupper_interfaces__msg__AiLineRecognitionResult__rosidl_typesupport_introspection_c__AiLineRecognitionResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

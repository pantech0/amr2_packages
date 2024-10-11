// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from roboi_amr_msgs:msg/Ledcommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "roboi_amr_msgs/msg/detail/ledcommand__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace roboi_amr_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Ledcommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) roboi_amr_msgs::msg::Ledcommand(_init);
}

void Ledcommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<roboi_amr_msgs::msg::Ledcommand *>(message_memory);
  typed_message->~Ledcommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Ledcommand_message_member_array[3] = {
  {
    "target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs::msg::Ledcommand, target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "action",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs::msg::Ledcommand, action),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "blinkrate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs::msg::Ledcommand, blinkrate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Ledcommand_message_members = {
  "roboi_amr_msgs::msg",  // message namespace
  "Ledcommand",  // message name
  3,  // number of fields
  sizeof(roboi_amr_msgs::msg::Ledcommand),
  Ledcommand_message_member_array,  // message members
  Ledcommand_init_function,  // function to initialize message memory (memory has to be allocated)
  Ledcommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Ledcommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Ledcommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace roboi_amr_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roboi_amr_msgs::msg::Ledcommand>()
{
  return &::roboi_amr_msgs::msg::rosidl_typesupport_introspection_cpp::Ledcommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roboi_amr_msgs, msg, Ledcommand)() {
  return &::roboi_amr_msgs::msg::rosidl_typesupport_introspection_cpp::Ledcommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

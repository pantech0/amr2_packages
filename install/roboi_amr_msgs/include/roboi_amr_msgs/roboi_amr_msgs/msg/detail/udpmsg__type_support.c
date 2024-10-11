// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from roboi_amr_msgs:msg/Udpmsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "roboi_amr_msgs/msg/detail/udpmsg__rosidl_typesupport_introspection_c.h"
#include "roboi_amr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "roboi_amr_msgs/msg/detail/udpmsg__functions.h"
#include "roboi_amr_msgs/msg/detail/udpmsg__struct.h"


// Include directives for member types
// Member `st_fl`
// Member `st_fr`
// Member `st_rl`
// Member `st_rr`
#include "roboi_amr_msgs/msg/angle_status.h"
// Member `st_fl`
// Member `st_fr`
// Member `st_rl`
// Member `st_rr`
#include "roboi_amr_msgs/msg/detail/angle_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void roboi_amr_msgs__msg__Udpmsg__rosidl_typesupport_introspection_c__Udpmsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roboi_amr_msgs__msg__Udpmsg__init(message_memory);
}

void roboi_amr_msgs__msg__Udpmsg__rosidl_typesupport_introspection_c__Udpmsg_fini_function(void * message_memory)
{
  roboi_amr_msgs__msg__Udpmsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember roboi_amr_msgs__msg__Udpmsg__rosidl_typesupport_introspection_c__Udpmsg_message_member_array[5] = {
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs__msg__Udpmsg, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "st_fl",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs__msg__Udpmsg, st_fl),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "st_fr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs__msg__Udpmsg, st_fr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "st_rl",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs__msg__Udpmsg, st_rl),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "st_rr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs__msg__Udpmsg, st_rr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers roboi_amr_msgs__msg__Udpmsg__rosidl_typesupport_introspection_c__Udpmsg_message_members = {
  "roboi_amr_msgs__msg",  // message namespace
  "Udpmsg",  // message name
  5,  // number of fields
  sizeof(roboi_amr_msgs__msg__Udpmsg),
  roboi_amr_msgs__msg__Udpmsg__rosidl_typesupport_introspection_c__Udpmsg_message_member_array,  // message members
  roboi_amr_msgs__msg__Udpmsg__rosidl_typesupport_introspection_c__Udpmsg_init_function,  // function to initialize message memory (memory has to be allocated)
  roboi_amr_msgs__msg__Udpmsg__rosidl_typesupport_introspection_c__Udpmsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t roboi_amr_msgs__msg__Udpmsg__rosidl_typesupport_introspection_c__Udpmsg_message_type_support_handle = {
  0,
  &roboi_amr_msgs__msg__Udpmsg__rosidl_typesupport_introspection_c__Udpmsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roboi_amr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboi_amr_msgs, msg, Udpmsg)() {
  roboi_amr_msgs__msg__Udpmsg__rosidl_typesupport_introspection_c__Udpmsg_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboi_amr_msgs, msg, AngleStatus)();
  roboi_amr_msgs__msg__Udpmsg__rosidl_typesupport_introspection_c__Udpmsg_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboi_amr_msgs, msg, AngleStatus)();
  roboi_amr_msgs__msg__Udpmsg__rosidl_typesupport_introspection_c__Udpmsg_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboi_amr_msgs, msg, AngleStatus)();
  roboi_amr_msgs__msg__Udpmsg__rosidl_typesupport_introspection_c__Udpmsg_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboi_amr_msgs, msg, AngleStatus)();
  if (!roboi_amr_msgs__msg__Udpmsg__rosidl_typesupport_introspection_c__Udpmsg_message_type_support_handle.typesupport_identifier) {
    roboi_amr_msgs__msg__Udpmsg__rosidl_typesupport_introspection_c__Udpmsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &roboi_amr_msgs__msg__Udpmsg__rosidl_typesupport_introspection_c__Udpmsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

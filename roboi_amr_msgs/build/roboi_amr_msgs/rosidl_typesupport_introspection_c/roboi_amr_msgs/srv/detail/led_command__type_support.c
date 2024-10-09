// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from roboi_amr_msgs:srv/LedCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "roboi_amr_msgs/srv/detail/led_command__rosidl_typesupport_introspection_c.h"
#include "roboi_amr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "roboi_amr_msgs/srv/detail/led_command__functions.h"
#include "roboi_amr_msgs/srv/detail/led_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void roboi_amr_msgs__srv__LedCommand_Request__rosidl_typesupport_introspection_c__LedCommand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roboi_amr_msgs__srv__LedCommand_Request__init(message_memory);
}

void roboi_amr_msgs__srv__LedCommand_Request__rosidl_typesupport_introspection_c__LedCommand_Request_fini_function(void * message_memory)
{
  roboi_amr_msgs__srv__LedCommand_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember roboi_amr_msgs__srv__LedCommand_Request__rosidl_typesupport_introspection_c__LedCommand_Request_message_member_array[8] = {
  {
    "command_fl",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs__srv__LedCommand_Request, command_fl),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_fr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs__srv__LedCommand_Request, command_fr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_rl1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs__srv__LedCommand_Request, command_rl1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_rl2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs__srv__LedCommand_Request, command_rl2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_rl3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs__srv__LedCommand_Request, command_rl3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_rr1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs__srv__LedCommand_Request, command_rr1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_rr2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs__srv__LedCommand_Request, command_rr2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_rr3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs__srv__LedCommand_Request, command_rr3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers roboi_amr_msgs__srv__LedCommand_Request__rosidl_typesupport_introspection_c__LedCommand_Request_message_members = {
  "roboi_amr_msgs__srv",  // message namespace
  "LedCommand_Request",  // message name
  8,  // number of fields
  sizeof(roboi_amr_msgs__srv__LedCommand_Request),
  roboi_amr_msgs__srv__LedCommand_Request__rosidl_typesupport_introspection_c__LedCommand_Request_message_member_array,  // message members
  roboi_amr_msgs__srv__LedCommand_Request__rosidl_typesupport_introspection_c__LedCommand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  roboi_amr_msgs__srv__LedCommand_Request__rosidl_typesupport_introspection_c__LedCommand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t roboi_amr_msgs__srv__LedCommand_Request__rosidl_typesupport_introspection_c__LedCommand_Request_message_type_support_handle = {
  0,
  &roboi_amr_msgs__srv__LedCommand_Request__rosidl_typesupport_introspection_c__LedCommand_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roboi_amr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboi_amr_msgs, srv, LedCommand_Request)() {
  if (!roboi_amr_msgs__srv__LedCommand_Request__rosidl_typesupport_introspection_c__LedCommand_Request_message_type_support_handle.typesupport_identifier) {
    roboi_amr_msgs__srv__LedCommand_Request__rosidl_typesupport_introspection_c__LedCommand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &roboi_amr_msgs__srv__LedCommand_Request__rosidl_typesupport_introspection_c__LedCommand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "roboi_amr_msgs/srv/detail/led_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "roboi_amr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "roboi_amr_msgs/srv/detail/led_command__functions.h"
// already included above
// #include "roboi_amr_msgs/srv/detail/led_command__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void roboi_amr_msgs__srv__LedCommand_Response__rosidl_typesupport_introspection_c__LedCommand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roboi_amr_msgs__srv__LedCommand_Response__init(message_memory);
}

void roboi_amr_msgs__srv__LedCommand_Response__rosidl_typesupport_introspection_c__LedCommand_Response_fini_function(void * message_memory)
{
  roboi_amr_msgs__srv__LedCommand_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember roboi_amr_msgs__srv__LedCommand_Response__rosidl_typesupport_introspection_c__LedCommand_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs__srv__LedCommand_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboi_amr_msgs__srv__LedCommand_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers roboi_amr_msgs__srv__LedCommand_Response__rosidl_typesupport_introspection_c__LedCommand_Response_message_members = {
  "roboi_amr_msgs__srv",  // message namespace
  "LedCommand_Response",  // message name
  2,  // number of fields
  sizeof(roboi_amr_msgs__srv__LedCommand_Response),
  roboi_amr_msgs__srv__LedCommand_Response__rosidl_typesupport_introspection_c__LedCommand_Response_message_member_array,  // message members
  roboi_amr_msgs__srv__LedCommand_Response__rosidl_typesupport_introspection_c__LedCommand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  roboi_amr_msgs__srv__LedCommand_Response__rosidl_typesupport_introspection_c__LedCommand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t roboi_amr_msgs__srv__LedCommand_Response__rosidl_typesupport_introspection_c__LedCommand_Response_message_type_support_handle = {
  0,
  &roboi_amr_msgs__srv__LedCommand_Response__rosidl_typesupport_introspection_c__LedCommand_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roboi_amr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboi_amr_msgs, srv, LedCommand_Response)() {
  if (!roboi_amr_msgs__srv__LedCommand_Response__rosidl_typesupport_introspection_c__LedCommand_Response_message_type_support_handle.typesupport_identifier) {
    roboi_amr_msgs__srv__LedCommand_Response__rosidl_typesupport_introspection_c__LedCommand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &roboi_amr_msgs__srv__LedCommand_Response__rosidl_typesupport_introspection_c__LedCommand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "roboi_amr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "roboi_amr_msgs/srv/detail/led_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers roboi_amr_msgs__srv__detail__led_command__rosidl_typesupport_introspection_c__LedCommand_service_members = {
  "roboi_amr_msgs__srv",  // service namespace
  "LedCommand",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // roboi_amr_msgs__srv__detail__led_command__rosidl_typesupport_introspection_c__LedCommand_Request_message_type_support_handle,
  NULL  // response message
  // roboi_amr_msgs__srv__detail__led_command__rosidl_typesupport_introspection_c__LedCommand_Response_message_type_support_handle
};

static rosidl_service_type_support_t roboi_amr_msgs__srv__detail__led_command__rosidl_typesupport_introspection_c__LedCommand_service_type_support_handle = {
  0,
  &roboi_amr_msgs__srv__detail__led_command__rosidl_typesupport_introspection_c__LedCommand_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboi_amr_msgs, srv, LedCommand_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboi_amr_msgs, srv, LedCommand_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roboi_amr_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboi_amr_msgs, srv, LedCommand)() {
  if (!roboi_amr_msgs__srv__detail__led_command__rosidl_typesupport_introspection_c__LedCommand_service_type_support_handle.typesupport_identifier) {
    roboi_amr_msgs__srv__detail__led_command__rosidl_typesupport_introspection_c__LedCommand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)roboi_amr_msgs__srv__detail__led_command__rosidl_typesupport_introspection_c__LedCommand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboi_amr_msgs, srv, LedCommand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboi_amr_msgs, srv, LedCommand_Response)()->data;
  }

  return &roboi_amr_msgs__srv__detail__led_command__rosidl_typesupport_introspection_c__LedCommand_service_type_support_handle;
}

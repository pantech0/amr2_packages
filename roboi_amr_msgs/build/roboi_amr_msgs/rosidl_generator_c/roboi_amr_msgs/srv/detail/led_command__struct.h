// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roboi_amr_msgs:srv/LedCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__SRV__DETAIL__LED_COMMAND__STRUCT_H_
#define ROBOI_AMR_MSGS__SRV__DETAIL__LED_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COMMAND_NULL'.
enum
{
  roboi_amr_msgs__srv__LedCommand_Request__COMMAND_NULL = 0
};

/// Constant 'COMMAND_OFF'.
enum
{
  roboi_amr_msgs__srv__LedCommand_Request__COMMAND_OFF = 1
};

/// Constant 'COMMAND_ON'.
enum
{
  roboi_amr_msgs__srv__LedCommand_Request__COMMAND_ON = 2
};

/// Constant 'COMMAND_BLINK'.
enum
{
  roboi_amr_msgs__srv__LedCommand_Request__COMMAND_BLINK = 3
};

/// Struct defined in srv/LedCommand in the package roboi_amr_msgs.
typedef struct roboi_amr_msgs__srv__LedCommand_Request
{
  uint8_t command_fl;
  uint8_t command_fr;
  uint8_t command_rl1;
  uint8_t command_rl2;
  uint8_t command_rl3;
  uint8_t command_rr1;
  uint8_t command_rr2;
  uint8_t command_rr3;
} roboi_amr_msgs__srv__LedCommand_Request;

// Struct for a sequence of roboi_amr_msgs__srv__LedCommand_Request.
typedef struct roboi_amr_msgs__srv__LedCommand_Request__Sequence
{
  roboi_amr_msgs__srv__LedCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roboi_amr_msgs__srv__LedCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LedCommand in the package roboi_amr_msgs.
typedef struct roboi_amr_msgs__srv__LedCommand_Response
{
  bool success;
  rosidl_runtime_c__String message;
} roboi_amr_msgs__srv__LedCommand_Response;

// Struct for a sequence of roboi_amr_msgs__srv__LedCommand_Response.
typedef struct roboi_amr_msgs__srv__LedCommand_Response__Sequence
{
  roboi_amr_msgs__srv__LedCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roboi_amr_msgs__srv__LedCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOI_AMR_MSGS__SRV__DETAIL__LED_COMMAND__STRUCT_H_

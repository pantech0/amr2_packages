// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roboi_amr_msgs:msg/Udpmsg.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__UDPMSG__STRUCT_H_
#define ROBOI_AMR_MSGS__MSG__DETAIL__UDPMSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'st_fl'
// Member 'st_fr'
// Member 'st_rl'
// Member 'st_rr'
#include "roboi_amr_msgs/msg/detail/angle_status__struct.h"

/// Struct defined in msg/Udpmsg in the package roboi_amr_msgs.
typedef struct roboi_amr_msgs__msg__Udpmsg
{
  int32_t count;
  roboi_amr_msgs__msg__AngleStatus st_fl;
  roboi_amr_msgs__msg__AngleStatus st_fr;
  roboi_amr_msgs__msg__AngleStatus st_rl;
  roboi_amr_msgs__msg__AngleStatus st_rr;
} roboi_amr_msgs__msg__Udpmsg;

// Struct for a sequence of roboi_amr_msgs__msg__Udpmsg.
typedef struct roboi_amr_msgs__msg__Udpmsg__Sequence
{
  roboi_amr_msgs__msg__Udpmsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roboi_amr_msgs__msg__Udpmsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__UDPMSG__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roboi_amr_msgs:msg/Ledcommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__LEDCOMMAND__STRUCT_H_
#define ROBOI_AMR_MSGS__MSG__DETAIL__LEDCOMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Ledcommand in the package roboi_amr_msgs.
typedef struct roboi_amr_msgs__msg__Ledcommand
{
  uint8_t target;
  uint8_t action;
  uint16_t blinkrate;
} roboi_amr_msgs__msg__Ledcommand;

// Struct for a sequence of roboi_amr_msgs__msg__Ledcommand.
typedef struct roboi_amr_msgs__msg__Ledcommand__Sequence
{
  roboi_amr_msgs__msg__Ledcommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roboi_amr_msgs__msg__Ledcommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__LEDCOMMAND__STRUCT_H_

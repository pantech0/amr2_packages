// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roboi_amr_msgs:msg/AngleStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__ANGLE_STATUS__STRUCT_H_
#define ROBOI_AMR_MSGS__MSG__DETAIL__ANGLE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AngleStatus in the package roboi_amr_msgs.
typedef struct roboi_amr_msgs__msg__AngleStatus
{
  bool isbalarmreset;
  bool isbemergencystop;
  bool isberrorall;
  bool isblimitoverpegative;
  bool isblimitoverpositive;
  bool isbmotionmoving;
  bool isbmotionpause;
  bool isboriginreturn;
  bool isbovercurrent;
  bool isboverheat;
  bool isbpositiontableend;
  bool isbservoon;
  int32_t cmdpos;
  int32_t actpos;
  int32_t actposerr;
  int32_t actvel;
  uint16_t positemno;
} roboi_amr_msgs__msg__AngleStatus;

// Struct for a sequence of roboi_amr_msgs__msg__AngleStatus.
typedef struct roboi_amr_msgs__msg__AngleStatus__Sequence
{
  roboi_amr_msgs__msg__AngleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roboi_amr_msgs__msg__AngleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__ANGLE_STATUS__STRUCT_H_

// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from roboi_amr_msgs:msg/AngleStatus.idl
// generated code does not contain a copyright notice
#include "roboi_amr_msgs/msg/detail/angle_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "roboi_amr_msgs/msg/detail/angle_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace roboi_amr_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboi_amr_msgs
cdr_serialize(
  const roboi_amr_msgs::msg::AngleStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: isbalarmreset
  cdr << (ros_message.isbalarmreset ? true : false);
  // Member: isbemergencystop
  cdr << (ros_message.isbemergencystop ? true : false);
  // Member: isberrorall
  cdr << (ros_message.isberrorall ? true : false);
  // Member: isblimitoverpegative
  cdr << (ros_message.isblimitoverpegative ? true : false);
  // Member: isblimitoverpositive
  cdr << (ros_message.isblimitoverpositive ? true : false);
  // Member: isbmotionmoving
  cdr << (ros_message.isbmotionmoving ? true : false);
  // Member: isbmotionpause
  cdr << (ros_message.isbmotionpause ? true : false);
  // Member: isboriginreturn
  cdr << (ros_message.isboriginreturn ? true : false);
  // Member: isbovercurrent
  cdr << (ros_message.isbovercurrent ? true : false);
  // Member: isboverheat
  cdr << (ros_message.isboverheat ? true : false);
  // Member: isbpositiontableend
  cdr << (ros_message.isbpositiontableend ? true : false);
  // Member: isbservoon
  cdr << (ros_message.isbservoon ? true : false);
  // Member: cmdpos
  cdr << ros_message.cmdpos;
  // Member: actpos
  cdr << ros_message.actpos;
  // Member: actposerr
  cdr << ros_message.actposerr;
  // Member: actvel
  cdr << ros_message.actvel;
  // Member: positemno
  cdr << ros_message.positemno;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboi_amr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  roboi_amr_msgs::msg::AngleStatus & ros_message)
{
  // Member: isbalarmreset
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.isbalarmreset = tmp ? true : false;
  }

  // Member: isbemergencystop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.isbemergencystop = tmp ? true : false;
  }

  // Member: isberrorall
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.isberrorall = tmp ? true : false;
  }

  // Member: isblimitoverpegative
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.isblimitoverpegative = tmp ? true : false;
  }

  // Member: isblimitoverpositive
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.isblimitoverpositive = tmp ? true : false;
  }

  // Member: isbmotionmoving
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.isbmotionmoving = tmp ? true : false;
  }

  // Member: isbmotionpause
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.isbmotionpause = tmp ? true : false;
  }

  // Member: isboriginreturn
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.isboriginreturn = tmp ? true : false;
  }

  // Member: isbovercurrent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.isbovercurrent = tmp ? true : false;
  }

  // Member: isboverheat
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.isboverheat = tmp ? true : false;
  }

  // Member: isbpositiontableend
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.isbpositiontableend = tmp ? true : false;
  }

  // Member: isbservoon
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.isbservoon = tmp ? true : false;
  }

  // Member: cmdpos
  cdr >> ros_message.cmdpos;

  // Member: actpos
  cdr >> ros_message.actpos;

  // Member: actposerr
  cdr >> ros_message.actposerr;

  // Member: actvel
  cdr >> ros_message.actvel;

  // Member: positemno
  cdr >> ros_message.positemno;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboi_amr_msgs
get_serialized_size(
  const roboi_amr_msgs::msg::AngleStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: isbalarmreset
  {
    size_t item_size = sizeof(ros_message.isbalarmreset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: isbemergencystop
  {
    size_t item_size = sizeof(ros_message.isbemergencystop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: isberrorall
  {
    size_t item_size = sizeof(ros_message.isberrorall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: isblimitoverpegative
  {
    size_t item_size = sizeof(ros_message.isblimitoverpegative);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: isblimitoverpositive
  {
    size_t item_size = sizeof(ros_message.isblimitoverpositive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: isbmotionmoving
  {
    size_t item_size = sizeof(ros_message.isbmotionmoving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: isbmotionpause
  {
    size_t item_size = sizeof(ros_message.isbmotionpause);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: isboriginreturn
  {
    size_t item_size = sizeof(ros_message.isboriginreturn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: isbovercurrent
  {
    size_t item_size = sizeof(ros_message.isbovercurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: isboverheat
  {
    size_t item_size = sizeof(ros_message.isboverheat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: isbpositiontableend
  {
    size_t item_size = sizeof(ros_message.isbpositiontableend);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: isbservoon
  {
    size_t item_size = sizeof(ros_message.isbservoon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cmdpos
  {
    size_t item_size = sizeof(ros_message.cmdpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: actpos
  {
    size_t item_size = sizeof(ros_message.actpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: actposerr
  {
    size_t item_size = sizeof(ros_message.actposerr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: actvel
  {
    size_t item_size = sizeof(ros_message.actvel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: positemno
  {
    size_t item_size = sizeof(ros_message.positemno);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboi_amr_msgs
max_serialized_size_AngleStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: isbalarmreset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: isbemergencystop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: isberrorall
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: isblimitoverpegative
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: isblimitoverpositive
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: isbmotionmoving
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: isbmotionpause
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: isboriginreturn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: isbovercurrent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: isboverheat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: isbpositiontableend
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: isbservoon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cmdpos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: actpos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: actposerr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: actvel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: positemno
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = roboi_amr_msgs::msg::AngleStatus;
    is_plain =
      (
      offsetof(DataType, positemno) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _AngleStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const roboi_amr_msgs::msg::AngleStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AngleStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<roboi_amr_msgs::msg::AngleStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AngleStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const roboi_amr_msgs::msg::AngleStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AngleStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AngleStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AngleStatus__callbacks = {
  "roboi_amr_msgs::msg",
  "AngleStatus",
  _AngleStatus__cdr_serialize,
  _AngleStatus__cdr_deserialize,
  _AngleStatus__get_serialized_size,
  _AngleStatus__max_serialized_size
};

static rosidl_message_type_support_t _AngleStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AngleStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace roboi_amr_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_roboi_amr_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<roboi_amr_msgs::msg::AngleStatus>()
{
  return &roboi_amr_msgs::msg::typesupport_fastrtps_cpp::_AngleStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roboi_amr_msgs, msg, AngleStatus)() {
  return &roboi_amr_msgs::msg::typesupport_fastrtps_cpp::_AngleStatus__handle;
}

#ifdef __cplusplus
}
#endif

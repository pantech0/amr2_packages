// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roboi_amr_msgs:msg/AngleStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__ANGLE_STATUS__TRAITS_HPP_
#define ROBOI_AMR_MSGS__MSG__DETAIL__ANGLE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roboi_amr_msgs/msg/detail/angle_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roboi_amr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AngleStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: isbalarmreset
  {
    out << "isbalarmreset: ";
    rosidl_generator_traits::value_to_yaml(msg.isbalarmreset, out);
    out << ", ";
  }

  // member: isbemergencystop
  {
    out << "isbemergencystop: ";
    rosidl_generator_traits::value_to_yaml(msg.isbemergencystop, out);
    out << ", ";
  }

  // member: isberrorall
  {
    out << "isberrorall: ";
    rosidl_generator_traits::value_to_yaml(msg.isberrorall, out);
    out << ", ";
  }

  // member: isblimitoverpegative
  {
    out << "isblimitoverpegative: ";
    rosidl_generator_traits::value_to_yaml(msg.isblimitoverpegative, out);
    out << ", ";
  }

  // member: isblimitoverpositive
  {
    out << "isblimitoverpositive: ";
    rosidl_generator_traits::value_to_yaml(msg.isblimitoverpositive, out);
    out << ", ";
  }

  // member: isbmotionmoving
  {
    out << "isbmotionmoving: ";
    rosidl_generator_traits::value_to_yaml(msg.isbmotionmoving, out);
    out << ", ";
  }

  // member: isbmotionpause
  {
    out << "isbmotionpause: ";
    rosidl_generator_traits::value_to_yaml(msg.isbmotionpause, out);
    out << ", ";
  }

  // member: isboriginreturn
  {
    out << "isboriginreturn: ";
    rosidl_generator_traits::value_to_yaml(msg.isboriginreturn, out);
    out << ", ";
  }

  // member: isbovercurrent
  {
    out << "isbovercurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.isbovercurrent, out);
    out << ", ";
  }

  // member: isboverheat
  {
    out << "isboverheat: ";
    rosidl_generator_traits::value_to_yaml(msg.isboverheat, out);
    out << ", ";
  }

  // member: isbpositiontableend
  {
    out << "isbpositiontableend: ";
    rosidl_generator_traits::value_to_yaml(msg.isbpositiontableend, out);
    out << ", ";
  }

  // member: isbservoon
  {
    out << "isbservoon: ";
    rosidl_generator_traits::value_to_yaml(msg.isbservoon, out);
    out << ", ";
  }

  // member: cmdpos
  {
    out << "cmdpos: ";
    rosidl_generator_traits::value_to_yaml(msg.cmdpos, out);
    out << ", ";
  }

  // member: actpos
  {
    out << "actpos: ";
    rosidl_generator_traits::value_to_yaml(msg.actpos, out);
    out << ", ";
  }

  // member: actposerr
  {
    out << "actposerr: ";
    rosidl_generator_traits::value_to_yaml(msg.actposerr, out);
    out << ", ";
  }

  // member: actvel
  {
    out << "actvel: ";
    rosidl_generator_traits::value_to_yaml(msg.actvel, out);
    out << ", ";
  }

  // member: positemno
  {
    out << "positemno: ";
    rosidl_generator_traits::value_to_yaml(msg.positemno, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AngleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: isbalarmreset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isbalarmreset: ";
    rosidl_generator_traits::value_to_yaml(msg.isbalarmreset, out);
    out << "\n";
  }

  // member: isbemergencystop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isbemergencystop: ";
    rosidl_generator_traits::value_to_yaml(msg.isbemergencystop, out);
    out << "\n";
  }

  // member: isberrorall
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isberrorall: ";
    rosidl_generator_traits::value_to_yaml(msg.isberrorall, out);
    out << "\n";
  }

  // member: isblimitoverpegative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isblimitoverpegative: ";
    rosidl_generator_traits::value_to_yaml(msg.isblimitoverpegative, out);
    out << "\n";
  }

  // member: isblimitoverpositive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isblimitoverpositive: ";
    rosidl_generator_traits::value_to_yaml(msg.isblimitoverpositive, out);
    out << "\n";
  }

  // member: isbmotionmoving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isbmotionmoving: ";
    rosidl_generator_traits::value_to_yaml(msg.isbmotionmoving, out);
    out << "\n";
  }

  // member: isbmotionpause
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isbmotionpause: ";
    rosidl_generator_traits::value_to_yaml(msg.isbmotionpause, out);
    out << "\n";
  }

  // member: isboriginreturn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isboriginreturn: ";
    rosidl_generator_traits::value_to_yaml(msg.isboriginreturn, out);
    out << "\n";
  }

  // member: isbovercurrent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isbovercurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.isbovercurrent, out);
    out << "\n";
  }

  // member: isboverheat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isboverheat: ";
    rosidl_generator_traits::value_to_yaml(msg.isboverheat, out);
    out << "\n";
  }

  // member: isbpositiontableend
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isbpositiontableend: ";
    rosidl_generator_traits::value_to_yaml(msg.isbpositiontableend, out);
    out << "\n";
  }

  // member: isbservoon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isbservoon: ";
    rosidl_generator_traits::value_to_yaml(msg.isbservoon, out);
    out << "\n";
  }

  // member: cmdpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmdpos: ";
    rosidl_generator_traits::value_to_yaml(msg.cmdpos, out);
    out << "\n";
  }

  // member: actpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actpos: ";
    rosidl_generator_traits::value_to_yaml(msg.actpos, out);
    out << "\n";
  }

  // member: actposerr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actposerr: ";
    rosidl_generator_traits::value_to_yaml(msg.actposerr, out);
    out << "\n";
  }

  // member: actvel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actvel: ";
    rosidl_generator_traits::value_to_yaml(msg.actvel, out);
    out << "\n";
  }

  // member: positemno
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "positemno: ";
    rosidl_generator_traits::value_to_yaml(msg.positemno, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AngleStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace roboi_amr_msgs

namespace rosidl_generator_traits
{

[[deprecated("use roboi_amr_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const roboi_amr_msgs::msg::AngleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  roboi_amr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roboi_amr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const roboi_amr_msgs::msg::AngleStatus & msg)
{
  return roboi_amr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<roboi_amr_msgs::msg::AngleStatus>()
{
  return "roboi_amr_msgs::msg::AngleStatus";
}

template<>
inline const char * name<roboi_amr_msgs::msg::AngleStatus>()
{
  return "roboi_amr_msgs/msg/AngleStatus";
}

template<>
struct has_fixed_size<roboi_amr_msgs::msg::AngleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<roboi_amr_msgs::msg::AngleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<roboi_amr_msgs::msg::AngleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__ANGLE_STATUS__TRAITS_HPP_

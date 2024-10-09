// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roboi_amr_msgs:msg/Ledcommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOI_AMR_MSGS__MSG__DETAIL__LEDCOMMAND__TRAITS_HPP_
#define ROBOI_AMR_MSGS__MSG__DETAIL__LEDCOMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roboi_amr_msgs/msg/detail/ledcommand__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roboi_amr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ledcommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: blinkrate
  {
    out << "blinkrate: ";
    rosidl_generator_traits::value_to_yaml(msg.blinkrate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ledcommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: blinkrate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blinkrate: ";
    rosidl_generator_traits::value_to_yaml(msg.blinkrate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ledcommand & msg, bool use_flow_style = false)
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
  const roboi_amr_msgs::msg::Ledcommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  roboi_amr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roboi_amr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const roboi_amr_msgs::msg::Ledcommand & msg)
{
  return roboi_amr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<roboi_amr_msgs::msg::Ledcommand>()
{
  return "roboi_amr_msgs::msg::Ledcommand";
}

template<>
inline const char * name<roboi_amr_msgs::msg::Ledcommand>()
{
  return "roboi_amr_msgs/msg/Ledcommand";
}

template<>
struct has_fixed_size<roboi_amr_msgs::msg::Ledcommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<roboi_amr_msgs::msg::Ledcommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<roboi_amr_msgs::msg::Ledcommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOI_AMR_MSGS__MSG__DETAIL__LEDCOMMAND__TRAITS_HPP_

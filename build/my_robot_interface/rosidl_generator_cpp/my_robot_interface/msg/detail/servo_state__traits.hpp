// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_robot_interface:msg/ServoState.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACE__MSG__DETAIL__SERVO_STATE__TRAITS_HPP_
#define MY_ROBOT_INTERFACE__MSG__DETAIL__SERVO_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_robot_interface/msg/detail/servo_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_robot_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServoState & msg,
  std::ostream & out)
{
  out << "{";
  // member: servo_states
  {
    if (msg.servo_states.size() == 0) {
      out << "servo_states: []";
    } else {
      out << "servo_states: [";
      size_t pending_items = msg.servo_states.size();
      for (auto item : msg.servo_states) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServoState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: servo_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.servo_states.size() == 0) {
      out << "servo_states: []\n";
    } else {
      out << "servo_states:\n";
      for (auto item : msg.servo_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoState & msg, bool use_flow_style = false)
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

}  // namespace my_robot_interface

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interface::msg::ServoState & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interface::msg::ServoState & msg)
{
  return my_robot_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interface::msg::ServoState>()
{
  return "my_robot_interface::msg::ServoState";
}

template<>
inline const char * name<my_robot_interface::msg::ServoState>()
{
  return "my_robot_interface/msg/ServoState";
}

template<>
struct has_fixed_size<my_robot_interface::msg::ServoState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_robot_interface::msg::ServoState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_robot_interface::msg::ServoState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_ROBOT_INTERFACE__MSG__DETAIL__SERVO_STATE__TRAITS_HPP_

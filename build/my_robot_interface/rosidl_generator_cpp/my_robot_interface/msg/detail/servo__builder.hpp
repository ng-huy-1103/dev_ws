// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interface:msg/Servo.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACE__MSG__DETAIL__SERVO__BUILDER_HPP_
#define MY_ROBOT_INTERFACE__MSG__DETAIL__SERVO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interface/msg/detail/servo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interface
{

namespace msg
{

namespace builder
{

class Init_Servo_servo_states
{
public:
  Init_Servo_servo_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interface::msg::Servo servo_states(::my_robot_interface::msg::Servo::_servo_states_type arg)
  {
    msg_.servo_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interface::msg::Servo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interface::msg::Servo>()
{
  return my_robot_interface::msg::builder::Init_Servo_servo_states();
}

}  // namespace my_robot_interface

#endif  // MY_ROBOT_INTERFACE__MSG__DETAIL__SERVO__BUILDER_HPP_

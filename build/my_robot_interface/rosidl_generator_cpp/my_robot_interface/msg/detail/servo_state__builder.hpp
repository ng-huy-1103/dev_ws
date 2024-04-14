// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interface:msg/ServoState.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACE__MSG__DETAIL__SERVO_STATE__BUILDER_HPP_
#define MY_ROBOT_INTERFACE__MSG__DETAIL__SERVO_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interface/msg/detail/servo_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interface
{

namespace msg
{

namespace builder
{

class Init_ServoState_servo_states
{
public:
  Init_ServoState_servo_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interface::msg::ServoState servo_states(::my_robot_interface::msg::ServoState::_servo_states_type arg)
  {
    msg_.servo_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interface::msg::ServoState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interface::msg::ServoState>()
{
  return my_robot_interface::msg::builder::Init_ServoState_servo_states();
}

}  // namespace my_robot_interface

#endif  // MY_ROBOT_INTERFACE__MSG__DETAIL__SERVO_STATE__BUILDER_HPP_

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_robot_interface:msg/Servo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_robot_interface/msg/detail/servo__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Servo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interface::msg::Servo(_init);
}

void Servo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interface::msg::Servo *>(message_memory);
  typed_message->~Servo();
}

size_t size_function__Servo__servo_states(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__Servo__servo_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int64_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__Servo__servo_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int64_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__Servo__servo_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__Servo__servo_states(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__Servo__servo_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__Servo__servo_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Servo_message_member_array[1] = {
  {
    "servo_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(my_robot_interface::msg::Servo, servo_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__Servo__servo_states,  // size() function pointer
    get_const_function__Servo__servo_states,  // get_const(index) function pointer
    get_function__Servo__servo_states,  // get(index) function pointer
    fetch_function__Servo__servo_states,  // fetch(index, &value) function pointer
    assign_function__Servo__servo_states,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Servo_message_members = {
  "my_robot_interface::msg",  // message namespace
  "Servo",  // message name
  1,  // number of fields
  sizeof(my_robot_interface::msg::Servo),
  Servo_message_member_array,  // message members
  Servo_init_function,  // function to initialize message memory (memory has to be allocated)
  Servo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Servo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Servo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_robot_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interface::msg::Servo>()
{
  return &::my_robot_interface::msg::rosidl_typesupport_introspection_cpp::Servo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interface, msg, Servo)() {
  return &::my_robot_interface::msg::rosidl_typesupport_introspection_cpp::Servo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

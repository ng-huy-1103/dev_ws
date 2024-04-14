// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_robot_interface:msg/ServoState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_robot_interface/msg/detail/servo_state__rosidl_typesupport_introspection_c.h"
#include "my_robot_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_robot_interface/msg/detail/servo_state__functions.h"
#include "my_robot_interface/msg/detail/servo_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_robot_interface__msg__ServoState__init(message_memory);
}

void my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_fini_function(void * message_memory)
{
  my_robot_interface__msg__ServoState__fini(message_memory);
}

size_t my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__size_function__ServoState__servo_states(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__get_const_function__ServoState__servo_states(
  const void * untyped_member, size_t index)
{
  const int8_t * member =
    (const int8_t *)(untyped_member);
  return &member[index];
}

void * my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__get_function__ServoState__servo_states(
  void * untyped_member, size_t index)
{
  int8_t * member =
    (int8_t *)(untyped_member);
  return &member[index];
}

void my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__fetch_function__ServoState__servo_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__get_const_function__ServoState__servo_states(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__assign_function__ServoState__servo_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__get_function__ServoState__servo_states(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_message_member_array[1] = {
  {
    "servo_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(my_robot_interface__msg__ServoState, servo_states),  // bytes offset in struct
    NULL,  // default value
    my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__size_function__ServoState__servo_states,  // size() function pointer
    my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__get_const_function__ServoState__servo_states,  // get_const(index) function pointer
    my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__get_function__ServoState__servo_states,  // get(index) function pointer
    my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__fetch_function__ServoState__servo_states,  // fetch(index, &value) function pointer
    my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__assign_function__ServoState__servo_states,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_message_members = {
  "my_robot_interface__msg",  // message namespace
  "ServoState",  // message name
  1,  // number of fields
  sizeof(my_robot_interface__msg__ServoState),
  my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_message_member_array,  // message members
  my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_init_function,  // function to initialize message memory (memory has to be allocated)
  my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_message_type_support_handle = {
  0,
  &my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interface, msg, ServoState)() {
  if (!my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_message_type_support_handle.typesupport_identifier) {
    my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_robot_interface__msg__ServoState__rosidl_typesupport_introspection_c__ServoState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
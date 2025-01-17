# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_robot_interface:msg/ServoState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'servo_states'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ServoState(type):
    """Metaclass of message 'ServoState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_robot_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interface.msg.ServoState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__servo_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__servo_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__servo_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__servo_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__servo_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ServoState(metaclass=Metaclass_ServoState):
    """Message class 'ServoState'."""

    __slots__ = [
        '_servo_states',
    ]

    _fields_and_field_types = {
        'servo_states': 'int8[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int8'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'servo_states' not in kwargs:
            self.servo_states = numpy.zeros(2, dtype=numpy.int8)
        else:
            self.servo_states = numpy.array(kwargs.get('servo_states'), dtype=numpy.int8)
            assert self.servo_states.shape == (2, )

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if all(self.servo_states != other.servo_states):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def servo_states(self):
        """Message field 'servo_states'."""
        return self._servo_states

    @servo_states.setter
    def servo_states(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int8, \
                "The 'servo_states' numpy.ndarray() must have the dtype of 'numpy.int8'"
            assert value.size == 2, \
                "The 'servo_states' numpy.ndarray() must have a size of 2"
            self._servo_states = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'servo_states' field must be a set or sequence with length 2 and each value of type 'int' and each integer in [-128, 127]"
        self._servo_states = numpy.array(value, dtype=numpy.int8)

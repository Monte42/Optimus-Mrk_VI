# generated from rosidl_generator_py/resource/_idl.py.em
# with input from optimus_interfaces:action/ControlOptimus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlOptimus_Goal(type):
    """Metaclass of message 'ControlOptimus_Goal'."""

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
            module = import_type_support('optimus_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'optimus_interfaces.action.ControlOptimus_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__control_optimus__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__control_optimus__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__control_optimus__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__control_optimus__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__control_optimus__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlOptimus_Goal(metaclass=Metaclass_ControlOptimus_Goal):
    """Message class 'ControlOptimus_Goal'."""

    __slots__ = [
        '_left_motor_1',
        '_left_motor_2',
        '_right_motor_1',
        '_right_motor_2',
        '_is_autonomous',
        '_is_recording',
    ]

    _fields_and_field_types = {
        'left_motor_1': 'int64',
        'left_motor_2': 'int64',
        'right_motor_1': 'int64',
        'right_motor_2': 'int64',
        'is_autonomous': 'boolean',
        'is_recording': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_motor_1 = kwargs.get('left_motor_1', int())
        self.left_motor_2 = kwargs.get('left_motor_2', int())
        self.right_motor_1 = kwargs.get('right_motor_1', int())
        self.right_motor_2 = kwargs.get('right_motor_2', int())
        self.is_autonomous = kwargs.get('is_autonomous', bool())
        self.is_recording = kwargs.get('is_recording', bool())

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
        if self.left_motor_1 != other.left_motor_1:
            return False
        if self.left_motor_2 != other.left_motor_2:
            return False
        if self.right_motor_1 != other.right_motor_1:
            return False
        if self.right_motor_2 != other.right_motor_2:
            return False
        if self.is_autonomous != other.is_autonomous:
            return False
        if self.is_recording != other.is_recording:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_motor_1(self):
        """Message field 'left_motor_1'."""
        return self._left_motor_1

    @left_motor_1.setter
    def left_motor_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_motor_1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'left_motor_1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._left_motor_1 = value

    @builtins.property
    def left_motor_2(self):
        """Message field 'left_motor_2'."""
        return self._left_motor_2

    @left_motor_2.setter
    def left_motor_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_motor_2' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'left_motor_2' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._left_motor_2 = value

    @builtins.property
    def right_motor_1(self):
        """Message field 'right_motor_1'."""
        return self._right_motor_1

    @right_motor_1.setter
    def right_motor_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_motor_1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'right_motor_1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._right_motor_1 = value

    @builtins.property
    def right_motor_2(self):
        """Message field 'right_motor_2'."""
        return self._right_motor_2

    @right_motor_2.setter
    def right_motor_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_motor_2' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'right_motor_2' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._right_motor_2 = value

    @builtins.property
    def is_autonomous(self):
        """Message field 'is_autonomous'."""
        return self._is_autonomous

    @is_autonomous.setter
    def is_autonomous(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_autonomous' field must be of type 'bool'"
        self._is_autonomous = value

    @builtins.property
    def is_recording(self):
        """Message field 'is_recording'."""
        return self._is_recording

    @is_recording.setter
    def is_recording(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_recording' field must be of type 'bool'"
        self._is_recording = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ControlOptimus_Result(type):
    """Metaclass of message 'ControlOptimus_Result'."""

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
            module = import_type_support('optimus_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'optimus_interfaces.action.ControlOptimus_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__control_optimus__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__control_optimus__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__control_optimus__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__control_optimus__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__control_optimus__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlOptimus_Result(metaclass=Metaclass_ControlOptimus_Result):
    """Message class 'ControlOptimus_Result'."""

    __slots__ = [
        '_message',
        '_is_autonomous',
    ]

    _fields_and_field_types = {
        'message': 'string',
        'is_autonomous': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.message = kwargs.get('message', str())
        self.is_autonomous = kwargs.get('is_autonomous', bool())

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
        if self.message != other.message:
            return False
        if self.is_autonomous != other.is_autonomous:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def is_autonomous(self):
        """Message field 'is_autonomous'."""
        return self._is_autonomous

    @is_autonomous.setter
    def is_autonomous(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_autonomous' field must be of type 'bool'"
        self._is_autonomous = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ControlOptimus_Feedback(type):
    """Metaclass of message 'ControlOptimus_Feedback'."""

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
            module = import_type_support('optimus_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'optimus_interfaces.action.ControlOptimus_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__control_optimus__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__control_optimus__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__control_optimus__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__control_optimus__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__control_optimus__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlOptimus_Feedback(metaclass=Metaclass_ControlOptimus_Feedback):
    """Message class 'ControlOptimus_Feedback'."""

    __slots__ = [
        '_message',
    ]

    _fields_and_field_types = {
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.message = kwargs.get('message', str())

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
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ControlOptimus_SendGoal_Request(type):
    """Metaclass of message 'ControlOptimus_SendGoal_Request'."""

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
            module = import_type_support('optimus_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'optimus_interfaces.action.ControlOptimus_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__control_optimus__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__control_optimus__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__control_optimus__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__control_optimus__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__control_optimus__send_goal__request

            from optimus_interfaces.action import ControlOptimus
            if ControlOptimus.Goal.__class__._TYPE_SUPPORT is None:
                ControlOptimus.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlOptimus_SendGoal_Request(metaclass=Metaclass_ControlOptimus_SendGoal_Request):
    """Message class 'ControlOptimus_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'optimus_interfaces/ControlOptimus_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['optimus_interfaces', 'action'], 'ControlOptimus_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from optimus_interfaces.action._control_optimus import ControlOptimus_Goal
        self.goal = kwargs.get('goal', ControlOptimus_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from optimus_interfaces.action._control_optimus import ControlOptimus_Goal
            assert \
                isinstance(value, ControlOptimus_Goal), \
                "The 'goal' field must be a sub message of type 'ControlOptimus_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ControlOptimus_SendGoal_Response(type):
    """Metaclass of message 'ControlOptimus_SendGoal_Response'."""

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
            module = import_type_support('optimus_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'optimus_interfaces.action.ControlOptimus_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__control_optimus__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__control_optimus__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__control_optimus__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__control_optimus__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__control_optimus__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlOptimus_SendGoal_Response(metaclass=Metaclass_ControlOptimus_SendGoal_Response):
    """Message class 'ControlOptimus_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_ControlOptimus_SendGoal(type):
    """Metaclass of service 'ControlOptimus_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('optimus_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'optimus_interfaces.action.ControlOptimus_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__control_optimus__send_goal

            from optimus_interfaces.action import _control_optimus
            if _control_optimus.Metaclass_ControlOptimus_SendGoal_Request._TYPE_SUPPORT is None:
                _control_optimus.Metaclass_ControlOptimus_SendGoal_Request.__import_type_support__()
            if _control_optimus.Metaclass_ControlOptimus_SendGoal_Response._TYPE_SUPPORT is None:
                _control_optimus.Metaclass_ControlOptimus_SendGoal_Response.__import_type_support__()


class ControlOptimus_SendGoal(metaclass=Metaclass_ControlOptimus_SendGoal):
    from optimus_interfaces.action._control_optimus import ControlOptimus_SendGoal_Request as Request
    from optimus_interfaces.action._control_optimus import ControlOptimus_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ControlOptimus_GetResult_Request(type):
    """Metaclass of message 'ControlOptimus_GetResult_Request'."""

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
            module = import_type_support('optimus_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'optimus_interfaces.action.ControlOptimus_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__control_optimus__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__control_optimus__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__control_optimus__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__control_optimus__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__control_optimus__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlOptimus_GetResult_Request(metaclass=Metaclass_ControlOptimus_GetResult_Request):
    """Message class 'ControlOptimus_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ControlOptimus_GetResult_Response(type):
    """Metaclass of message 'ControlOptimus_GetResult_Response'."""

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
            module = import_type_support('optimus_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'optimus_interfaces.action.ControlOptimus_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__control_optimus__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__control_optimus__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__control_optimus__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__control_optimus__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__control_optimus__get_result__response

            from optimus_interfaces.action import ControlOptimus
            if ControlOptimus.Result.__class__._TYPE_SUPPORT is None:
                ControlOptimus.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlOptimus_GetResult_Response(metaclass=Metaclass_ControlOptimus_GetResult_Response):
    """Message class 'ControlOptimus_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'optimus_interfaces/ControlOptimus_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['optimus_interfaces', 'action'], 'ControlOptimus_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from optimus_interfaces.action._control_optimus import ControlOptimus_Result
        self.result = kwargs.get('result', ControlOptimus_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from optimus_interfaces.action._control_optimus import ControlOptimus_Result
            assert \
                isinstance(value, ControlOptimus_Result), \
                "The 'result' field must be a sub message of type 'ControlOptimus_Result'"
        self._result = value


class Metaclass_ControlOptimus_GetResult(type):
    """Metaclass of service 'ControlOptimus_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('optimus_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'optimus_interfaces.action.ControlOptimus_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__control_optimus__get_result

            from optimus_interfaces.action import _control_optimus
            if _control_optimus.Metaclass_ControlOptimus_GetResult_Request._TYPE_SUPPORT is None:
                _control_optimus.Metaclass_ControlOptimus_GetResult_Request.__import_type_support__()
            if _control_optimus.Metaclass_ControlOptimus_GetResult_Response._TYPE_SUPPORT is None:
                _control_optimus.Metaclass_ControlOptimus_GetResult_Response.__import_type_support__()


class ControlOptimus_GetResult(metaclass=Metaclass_ControlOptimus_GetResult):
    from optimus_interfaces.action._control_optimus import ControlOptimus_GetResult_Request as Request
    from optimus_interfaces.action._control_optimus import ControlOptimus_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ControlOptimus_FeedbackMessage(type):
    """Metaclass of message 'ControlOptimus_FeedbackMessage'."""

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
            module = import_type_support('optimus_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'optimus_interfaces.action.ControlOptimus_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__control_optimus__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__control_optimus__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__control_optimus__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__control_optimus__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__control_optimus__feedback_message

            from optimus_interfaces.action import ControlOptimus
            if ControlOptimus.Feedback.__class__._TYPE_SUPPORT is None:
                ControlOptimus.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlOptimus_FeedbackMessage(metaclass=Metaclass_ControlOptimus_FeedbackMessage):
    """Message class 'ControlOptimus_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'optimus_interfaces/ControlOptimus_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['optimus_interfaces', 'action'], 'ControlOptimus_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from optimus_interfaces.action._control_optimus import ControlOptimus_Feedback
        self.feedback = kwargs.get('feedback', ControlOptimus_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from optimus_interfaces.action._control_optimus import ControlOptimus_Feedback
            assert \
                isinstance(value, ControlOptimus_Feedback), \
                "The 'feedback' field must be a sub message of type 'ControlOptimus_Feedback'"
        self._feedback = value


class Metaclass_ControlOptimus(type):
    """Metaclass of action 'ControlOptimus'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('optimus_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'optimus_interfaces.action.ControlOptimus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__control_optimus

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from optimus_interfaces.action import _control_optimus
            if _control_optimus.Metaclass_ControlOptimus_SendGoal._TYPE_SUPPORT is None:
                _control_optimus.Metaclass_ControlOptimus_SendGoal.__import_type_support__()
            if _control_optimus.Metaclass_ControlOptimus_GetResult._TYPE_SUPPORT is None:
                _control_optimus.Metaclass_ControlOptimus_GetResult.__import_type_support__()
            if _control_optimus.Metaclass_ControlOptimus_FeedbackMessage._TYPE_SUPPORT is None:
                _control_optimus.Metaclass_ControlOptimus_FeedbackMessage.__import_type_support__()


class ControlOptimus(metaclass=Metaclass_ControlOptimus):

    # The goal message defined in the action definition.
    from optimus_interfaces.action._control_optimus import ControlOptimus_Goal as Goal
    # The result message defined in the action definition.
    from optimus_interfaces.action._control_optimus import ControlOptimus_Result as Result
    # The feedback message defined in the action definition.
    from optimus_interfaces.action._control_optimus import ControlOptimus_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from optimus_interfaces.action._control_optimus import ControlOptimus_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from optimus_interfaces.action._control_optimus import ControlOptimus_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from optimus_interfaces.action._control_optimus import ControlOptimus_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')

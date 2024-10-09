# generated from rosidl_generator_py/resource/_idl.py.em
# with input from roboi_amr_msgs:srv/LedCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LedCommand_Request(type):
    """Metaclass of message 'LedCommand_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'COMMAND_NULL': 0,
        'COMMAND_OFF': 1,
        'COMMAND_ON': 2,
        'COMMAND_BLINK': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('roboi_amr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'roboi_amr_msgs.srv.LedCommand_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__led_command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__led_command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__led_command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__led_command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__led_command__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'COMMAND_NULL': cls.__constants['COMMAND_NULL'],
            'COMMAND_OFF': cls.__constants['COMMAND_OFF'],
            'COMMAND_ON': cls.__constants['COMMAND_ON'],
            'COMMAND_BLINK': cls.__constants['COMMAND_BLINK'],
        }

    @property
    def COMMAND_NULL(self):
        """Message constant 'COMMAND_NULL'."""
        return Metaclass_LedCommand_Request.__constants['COMMAND_NULL']

    @property
    def COMMAND_OFF(self):
        """Message constant 'COMMAND_OFF'."""
        return Metaclass_LedCommand_Request.__constants['COMMAND_OFF']

    @property
    def COMMAND_ON(self):
        """Message constant 'COMMAND_ON'."""
        return Metaclass_LedCommand_Request.__constants['COMMAND_ON']

    @property
    def COMMAND_BLINK(self):
        """Message constant 'COMMAND_BLINK'."""
        return Metaclass_LedCommand_Request.__constants['COMMAND_BLINK']


class LedCommand_Request(metaclass=Metaclass_LedCommand_Request):
    """
    Message class 'LedCommand_Request'.

    Constants:
      COMMAND_NULL
      COMMAND_OFF
      COMMAND_ON
      COMMAND_BLINK
    """

    __slots__ = [
        '_command_fl',
        '_command_fr',
        '_command_rl1',
        '_command_rl2',
        '_command_rl3',
        '_command_rr1',
        '_command_rr2',
        '_command_rr3',
    ]

    _fields_and_field_types = {
        'command_fl': 'uint8',
        'command_fr': 'uint8',
        'command_rl1': 'uint8',
        'command_rl2': 'uint8',
        'command_rl3': 'uint8',
        'command_rr1': 'uint8',
        'command_rr2': 'uint8',
        'command_rr3': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command_fl = kwargs.get('command_fl', int())
        self.command_fr = kwargs.get('command_fr', int())
        self.command_rl1 = kwargs.get('command_rl1', int())
        self.command_rl2 = kwargs.get('command_rl2', int())
        self.command_rl3 = kwargs.get('command_rl3', int())
        self.command_rr1 = kwargs.get('command_rr1', int())
        self.command_rr2 = kwargs.get('command_rr2', int())
        self.command_rr3 = kwargs.get('command_rr3', int())

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
        if self.command_fl != other.command_fl:
            return False
        if self.command_fr != other.command_fr:
            return False
        if self.command_rl1 != other.command_rl1:
            return False
        if self.command_rl2 != other.command_rl2:
            return False
        if self.command_rl3 != other.command_rl3:
            return False
        if self.command_rr1 != other.command_rr1:
            return False
        if self.command_rr2 != other.command_rr2:
            return False
        if self.command_rr3 != other.command_rr3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command_fl(self):
        """Message field 'command_fl'."""
        return self._command_fl

    @command_fl.setter
    def command_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command_fl' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command_fl' field must be an unsigned integer in [0, 255]"
        self._command_fl = value

    @builtins.property
    def command_fr(self):
        """Message field 'command_fr'."""
        return self._command_fr

    @command_fr.setter
    def command_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command_fr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command_fr' field must be an unsigned integer in [0, 255]"
        self._command_fr = value

    @builtins.property
    def command_rl1(self):
        """Message field 'command_rl1'."""
        return self._command_rl1

    @command_rl1.setter
    def command_rl1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command_rl1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command_rl1' field must be an unsigned integer in [0, 255]"
        self._command_rl1 = value

    @builtins.property
    def command_rl2(self):
        """Message field 'command_rl2'."""
        return self._command_rl2

    @command_rl2.setter
    def command_rl2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command_rl2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command_rl2' field must be an unsigned integer in [0, 255]"
        self._command_rl2 = value

    @builtins.property
    def command_rl3(self):
        """Message field 'command_rl3'."""
        return self._command_rl3

    @command_rl3.setter
    def command_rl3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command_rl3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command_rl3' field must be an unsigned integer in [0, 255]"
        self._command_rl3 = value

    @builtins.property
    def command_rr1(self):
        """Message field 'command_rr1'."""
        return self._command_rr1

    @command_rr1.setter
    def command_rr1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command_rr1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command_rr1' field must be an unsigned integer in [0, 255]"
        self._command_rr1 = value

    @builtins.property
    def command_rr2(self):
        """Message field 'command_rr2'."""
        return self._command_rr2

    @command_rr2.setter
    def command_rr2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command_rr2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command_rr2' field must be an unsigned integer in [0, 255]"
        self._command_rr2 = value

    @builtins.property
    def command_rr3(self):
        """Message field 'command_rr3'."""
        return self._command_rr3

    @command_rr3.setter
    def command_rr3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command_rr3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command_rr3' field must be an unsigned integer in [0, 255]"
        self._command_rr3 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LedCommand_Response(type):
    """Metaclass of message 'LedCommand_Response'."""

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
            module = import_type_support('roboi_amr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'roboi_amr_msgs.srv.LedCommand_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__led_command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__led_command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__led_command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__led_command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__led_command__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LedCommand_Response(metaclass=Metaclass_LedCommand_Response):
    """Message class 'LedCommand_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

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


class Metaclass_LedCommand(type):
    """Metaclass of service 'LedCommand'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('roboi_amr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'roboi_amr_msgs.srv.LedCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__led_command

            from roboi_amr_msgs.srv import _led_command
            if _led_command.Metaclass_LedCommand_Request._TYPE_SUPPORT is None:
                _led_command.Metaclass_LedCommand_Request.__import_type_support__()
            if _led_command.Metaclass_LedCommand_Response._TYPE_SUPPORT is None:
                _led_command.Metaclass_LedCommand_Response.__import_type_support__()


class LedCommand(metaclass=Metaclass_LedCommand):
    from roboi_amr_msgs.srv._led_command import LedCommand_Request as Request
    from roboi_amr_msgs.srv._led_command import LedCommand_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

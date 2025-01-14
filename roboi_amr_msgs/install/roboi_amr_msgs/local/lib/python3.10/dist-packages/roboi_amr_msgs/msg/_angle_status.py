# generated from rosidl_generator_py/resource/_idl.py.em
# with input from roboi_amr_msgs:msg/AngleStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AngleStatus(type):
    """Metaclass of message 'AngleStatus'."""

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
                'roboi_amr_msgs.msg.AngleStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__angle_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__angle_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__angle_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__angle_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__angle_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AngleStatus(metaclass=Metaclass_AngleStatus):
    """Message class 'AngleStatus'."""

    __slots__ = [
        '_isbalarmreset',
        '_isbemergencystop',
        '_isberrorall',
        '_isblimitoverpegative',
        '_isblimitoverpositive',
        '_isbmotionmoving',
        '_isbmotionpause',
        '_isboriginreturn',
        '_isbovercurrent',
        '_isboverheat',
        '_isbpositiontableend',
        '_isbservoon',
        '_cmdpos',
        '_actpos',
        '_actposerr',
        '_actvel',
        '_positemno',
    ]

    _fields_and_field_types = {
        'isbalarmreset': 'boolean',
        'isbemergencystop': 'boolean',
        'isberrorall': 'boolean',
        'isblimitoverpegative': 'boolean',
        'isblimitoverpositive': 'boolean',
        'isbmotionmoving': 'boolean',
        'isbmotionpause': 'boolean',
        'isboriginreturn': 'boolean',
        'isbovercurrent': 'boolean',
        'isboverheat': 'boolean',
        'isbpositiontableend': 'boolean',
        'isbservoon': 'boolean',
        'cmdpos': 'int32',
        'actpos': 'int32',
        'actposerr': 'int32',
        'actvel': 'int32',
        'positemno': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.isbalarmreset = kwargs.get('isbalarmreset', bool())
        self.isbemergencystop = kwargs.get('isbemergencystop', bool())
        self.isberrorall = kwargs.get('isberrorall', bool())
        self.isblimitoverpegative = kwargs.get('isblimitoverpegative', bool())
        self.isblimitoverpositive = kwargs.get('isblimitoverpositive', bool())
        self.isbmotionmoving = kwargs.get('isbmotionmoving', bool())
        self.isbmotionpause = kwargs.get('isbmotionpause', bool())
        self.isboriginreturn = kwargs.get('isboriginreturn', bool())
        self.isbovercurrent = kwargs.get('isbovercurrent', bool())
        self.isboverheat = kwargs.get('isboverheat', bool())
        self.isbpositiontableend = kwargs.get('isbpositiontableend', bool())
        self.isbservoon = kwargs.get('isbservoon', bool())
        self.cmdpos = kwargs.get('cmdpos', int())
        self.actpos = kwargs.get('actpos', int())
        self.actposerr = kwargs.get('actposerr', int())
        self.actvel = kwargs.get('actvel', int())
        self.positemno = kwargs.get('positemno', int())

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
        if self.isbalarmreset != other.isbalarmreset:
            return False
        if self.isbemergencystop != other.isbemergencystop:
            return False
        if self.isberrorall != other.isberrorall:
            return False
        if self.isblimitoverpegative != other.isblimitoverpegative:
            return False
        if self.isblimitoverpositive != other.isblimitoverpositive:
            return False
        if self.isbmotionmoving != other.isbmotionmoving:
            return False
        if self.isbmotionpause != other.isbmotionpause:
            return False
        if self.isboriginreturn != other.isboriginreturn:
            return False
        if self.isbovercurrent != other.isbovercurrent:
            return False
        if self.isboverheat != other.isboverheat:
            return False
        if self.isbpositiontableend != other.isbpositiontableend:
            return False
        if self.isbservoon != other.isbservoon:
            return False
        if self.cmdpos != other.cmdpos:
            return False
        if self.actpos != other.actpos:
            return False
        if self.actposerr != other.actposerr:
            return False
        if self.actvel != other.actvel:
            return False
        if self.positemno != other.positemno:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def isbalarmreset(self):
        """Message field 'isbalarmreset'."""
        return self._isbalarmreset

    @isbalarmreset.setter
    def isbalarmreset(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'isbalarmreset' field must be of type 'bool'"
        self._isbalarmreset = value

    @builtins.property
    def isbemergencystop(self):
        """Message field 'isbemergencystop'."""
        return self._isbemergencystop

    @isbemergencystop.setter
    def isbemergencystop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'isbemergencystop' field must be of type 'bool'"
        self._isbemergencystop = value

    @builtins.property
    def isberrorall(self):
        """Message field 'isberrorall'."""
        return self._isberrorall

    @isberrorall.setter
    def isberrorall(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'isberrorall' field must be of type 'bool'"
        self._isberrorall = value

    @builtins.property
    def isblimitoverpegative(self):
        """Message field 'isblimitoverpegative'."""
        return self._isblimitoverpegative

    @isblimitoverpegative.setter
    def isblimitoverpegative(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'isblimitoverpegative' field must be of type 'bool'"
        self._isblimitoverpegative = value

    @builtins.property
    def isblimitoverpositive(self):
        """Message field 'isblimitoverpositive'."""
        return self._isblimitoverpositive

    @isblimitoverpositive.setter
    def isblimitoverpositive(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'isblimitoverpositive' field must be of type 'bool'"
        self._isblimitoverpositive = value

    @builtins.property
    def isbmotionmoving(self):
        """Message field 'isbmotionmoving'."""
        return self._isbmotionmoving

    @isbmotionmoving.setter
    def isbmotionmoving(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'isbmotionmoving' field must be of type 'bool'"
        self._isbmotionmoving = value

    @builtins.property
    def isbmotionpause(self):
        """Message field 'isbmotionpause'."""
        return self._isbmotionpause

    @isbmotionpause.setter
    def isbmotionpause(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'isbmotionpause' field must be of type 'bool'"
        self._isbmotionpause = value

    @builtins.property
    def isboriginreturn(self):
        """Message field 'isboriginreturn'."""
        return self._isboriginreturn

    @isboriginreturn.setter
    def isboriginreturn(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'isboriginreturn' field must be of type 'bool'"
        self._isboriginreturn = value

    @builtins.property
    def isbovercurrent(self):
        """Message field 'isbovercurrent'."""
        return self._isbovercurrent

    @isbovercurrent.setter
    def isbovercurrent(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'isbovercurrent' field must be of type 'bool'"
        self._isbovercurrent = value

    @builtins.property
    def isboverheat(self):
        """Message field 'isboverheat'."""
        return self._isboverheat

    @isboverheat.setter
    def isboverheat(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'isboverheat' field must be of type 'bool'"
        self._isboverheat = value

    @builtins.property
    def isbpositiontableend(self):
        """Message field 'isbpositiontableend'."""
        return self._isbpositiontableend

    @isbpositiontableend.setter
    def isbpositiontableend(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'isbpositiontableend' field must be of type 'bool'"
        self._isbpositiontableend = value

    @builtins.property
    def isbservoon(self):
        """Message field 'isbservoon'."""
        return self._isbservoon

    @isbservoon.setter
    def isbservoon(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'isbservoon' field must be of type 'bool'"
        self._isbservoon = value

    @builtins.property
    def cmdpos(self):
        """Message field 'cmdpos'."""
        return self._cmdpos

    @cmdpos.setter
    def cmdpos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmdpos' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cmdpos' field must be an integer in [-2147483648, 2147483647]"
        self._cmdpos = value

    @builtins.property
    def actpos(self):
        """Message field 'actpos'."""
        return self._actpos

    @actpos.setter
    def actpos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'actpos' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'actpos' field must be an integer in [-2147483648, 2147483647]"
        self._actpos = value

    @builtins.property
    def actposerr(self):
        """Message field 'actposerr'."""
        return self._actposerr

    @actposerr.setter
    def actposerr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'actposerr' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'actposerr' field must be an integer in [-2147483648, 2147483647]"
        self._actposerr = value

    @builtins.property
    def actvel(self):
        """Message field 'actvel'."""
        return self._actvel

    @actvel.setter
    def actvel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'actvel' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'actvel' field must be an integer in [-2147483648, 2147483647]"
        self._actvel = value

    @builtins.property
    def positemno(self):
        """Message field 'positemno'."""
        return self._positemno

    @positemno.setter
    def positemno(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'positemno' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'positemno' field must be an integer in [-2147483648, 2147483647]"
        self._positemno = value

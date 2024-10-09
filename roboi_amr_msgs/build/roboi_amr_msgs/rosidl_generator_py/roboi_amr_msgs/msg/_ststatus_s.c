// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from roboi_amr_msgs:msg/Ststatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "roboi_amr_msgs/msg/detail/ststatus__struct.h"
#include "roboi_amr_msgs/msg/detail/ststatus__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool roboi_amr_msgs__msg__ststatus__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("roboi_amr_msgs.msg._ststatus.Ststatus", full_classname_dest, 37) == 0);
  }
  roboi_amr_msgs__msg__Ststatus * ros_message = _ros_message;
  {  // isberrorall
    PyObject * field = PyObject_GetAttrString(_pymsg, "isberrorall");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->isberrorall = (Py_True == field);
    Py_DECREF(field);
  }
  {  // isblimitvverpositive
    PyObject * field = PyObject_GetAttrString(_pymsg, "isblimitvverpositive");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->isblimitvverpositive = (Py_True == field);
    Py_DECREF(field);
  }
  {  // isblimitovernegative
    PyObject * field = PyObject_GetAttrString(_pymsg, "isblimitovernegative");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->isblimitovernegative = (Py_True == field);
    Py_DECREF(field);
  }
  {  // isbovercurrent
    PyObject * field = PyObject_GetAttrString(_pymsg, "isbovercurrent");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->isbovercurrent = (Py_True == field);
    Py_DECREF(field);
  }
  {  // isboverheat
    PyObject * field = PyObject_GetAttrString(_pymsg, "isboverheat");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->isboverheat = (Py_True == field);
    Py_DECREF(field);
  }
  {  // isbemergencystop
    PyObject * field = PyObject_GetAttrString(_pymsg, "isbemergencystop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->isbemergencystop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // isboriginreturn
    PyObject * field = PyObject_GetAttrString(_pymsg, "isboriginreturn");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->isboriginreturn = (Py_True == field);
    Py_DECREF(field);
  }
  {  // isbservoon
    PyObject * field = PyObject_GetAttrString(_pymsg, "isbservoon");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->isbservoon = (Py_True == field);
    Py_DECREF(field);
  }
  {  // isbalarmreset
    PyObject * field = PyObject_GetAttrString(_pymsg, "isbalarmreset");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->isbalarmreset = (Py_True == field);
    Py_DECREF(field);
  }
  {  // isbpositiontableend
    PyObject * field = PyObject_GetAttrString(_pymsg, "isbpositiontableend");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->isbpositiontableend = (Py_True == field);
    Py_DECREF(field);
  }
  {  // isbmotionmoving
    PyObject * field = PyObject_GetAttrString(_pymsg, "isbmotionmoving");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->isbmotionmoving = (Py_True == field);
    Py_DECREF(field);
  }
  {  // isbmotionpause
    PyObject * field = PyObject_GetAttrString(_pymsg, "isbmotionpause");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->isbmotionpause = (Py_True == field);
    Py_DECREF(field);
  }
  {  // isboverload
    PyObject * field = PyObject_GetAttrString(_pymsg, "isboverload");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->isboverload = (Py_True == field);
    Py_DECREF(field);
  }
  {  // isbmotorstop
    PyObject * field = PyObject_GetAttrString(_pymsg, "isbmotorstop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->isbmotorstop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cmdpos
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmdpos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cmdpos = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // actpos
    PyObject * field = PyObject_GetAttrString(_pymsg, "actpos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->actpos = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // actposerr
    PyObject * field = PyObject_GetAttrString(_pymsg, "actposerr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->actposerr = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // actvel
    PyObject * field = PyObject_GetAttrString(_pymsg, "actvel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->actvel = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // positemno
    PyObject * field = PyObject_GetAttrString(_pymsg, "positemno");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->positemno = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * roboi_amr_msgs__msg__ststatus__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Ststatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("roboi_amr_msgs.msg._ststatus");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Ststatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  roboi_amr_msgs__msg__Ststatus * ros_message = (roboi_amr_msgs__msg__Ststatus *)raw_ros_message;
  {  // isberrorall
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->isberrorall ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isberrorall", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isblimitvverpositive
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->isblimitvverpositive ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isblimitvverpositive", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isblimitovernegative
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->isblimitovernegative ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isblimitovernegative", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isbovercurrent
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->isbovercurrent ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isbovercurrent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isboverheat
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->isboverheat ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isboverheat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isbemergencystop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->isbemergencystop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isbemergencystop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isboriginreturn
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->isboriginreturn ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isboriginreturn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isbservoon
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->isbservoon ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isbservoon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isbalarmreset
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->isbalarmreset ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isbalarmreset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isbpositiontableend
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->isbpositiontableend ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isbpositiontableend", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isbmotionmoving
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->isbmotionmoving ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isbmotionmoving", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isbmotionpause
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->isbmotionpause ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isbmotionpause", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isboverload
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->isboverload ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isboverload", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isbmotorstop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->isbmotorstop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isbmotorstop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmdpos
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cmdpos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmdpos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actpos
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->actpos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actpos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actposerr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->actposerr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actposerr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actvel
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->actvel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actvel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // positemno
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->positemno);
    {
      int rc = PyObject_SetAttrString(_pymessage, "positemno", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

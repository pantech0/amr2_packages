#pragma once

//------------------------------------------------------------------
//                 FRAME TYPE (V8 Protocol specific) Defines.
//------------------------------------------------------------------
static const unsigned char	FRAME_FAS_SETIO_INPUT_V8			= 0x21;
static const unsigned char	FRAME_FAS_GETIO_INPUT_V8			= 0x22;

static const unsigned char	FRAME_FAS_SET_INPUT_ASSGN_MAP_V8	= 0x24;
static const unsigned char	FRAME_FAS_SET_OUTPUT_ASSGN_MAP_V8	= 0x25;
static const unsigned char	FRAME_FAS_GET_INPUT_ASSGN_MAP_V8	= 0x27;
static const unsigned char	FRAME_FAS_GET_OUTPUT_ASSGN_MAP_V8	= 0x28;

static const unsigned char	FRAME_FAS_GETIOSTATUS_V8			= 0x41;
static const unsigned char	FRAME_FAS_GETMOTIONSTATUS_V8		= 0x42;
static const unsigned char	FRAME_FAS_GETALLSTATUS_V8			= 0x43;
static const unsigned char	FRAME_FAS_GETRUNPTSTATUS_V8			= 0x44;

static const unsigned char	FRAME_FAS_GETALLABSSTATUS_V8		= 0x4F;

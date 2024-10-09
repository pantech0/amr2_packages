//////////////////////////////////////////////////////////////////////////
//
//	File:			MOTION_EziSERVO_ALL_28_V2_DEFINE.h
//	Last Modified Date:	24.07.18
//	Last Modified Ver:	1.0.1
//
//////////////////////////////////////////////////////////////////////////

#pragma once
#include "MOTION_DEFINE.h"

//------------------------------------------------------------------
//                 Device Type Defines.
//------------------------------------------------------------------
#ifndef DEVTYPE_EZI_SERVO_PLUS_R_ALL_28_V2
#define	DEVTYPE_EZI_SERVO_PLUS_R_ALL_28_V2		108
#define DEVNAME_EZI_SERVO_PLUS_R_ALL_28_V2		"Ezi-SERVO Plus-R ALL-28 V2"
#endif

//------------------------------------------------------------------
//                 Axis Status Flag Defines.
//------------------------------------------------------------------

typedef union
{
	unsigned int	dwValue;
	struct
	{
		unsigned	FFLAG_ERRORALL			: 1; // = 0x00000001;
		unsigned	FFLAG_HWPOSILMT			: 1; // = 0x00000002;
		unsigned	FFLAG_HWNEGALMT			: 1; // = 0x00000004;
		unsigned	FFLAG_SWPOGILMT			: 1; // = 0x00000008;
		unsigned	FFLAG_SWNEGALMT			: 1; // = 0x00000010;
		unsigned	FFLAG_RESERVED0			: 1; // = 0x00000020;
		unsigned	FFLAG_RESERVED1			: 1; // = 0x00000040;
		unsigned	FFLAG_ERRPOSOVERFLOW	: 1; // = 0x00000080;
		unsigned	FFLAG_ERROVERCURRENT	: 1; // = 0x00000100;
		unsigned	FFLAG_ERROVERSPEED		: 1; // = 0x00000200;
		unsigned	FFLAG_ERRPOSTRACKING	: 1; // = 0x00000400;
		unsigned	FFLAG_ERROVERLOAD		: 1; // = 0x00000800;
		unsigned	FFLAG_ERROVERHEAT		: 1; // = 0x00001000;
		unsigned	FFLAG_ERRBACKEMF		: 1; // = 0x00002000;
		unsigned	FFLAG_ERRMOTORPOWER		: 1; // = 0x00004000;
		unsigned	FFLAG_ERRINPOSITION		: 1; // = 0x00008000;
		unsigned	FFLAG_EMGSTOP			: 1; // = 0x00010000;
		unsigned	FFLAG_SLOWSTOP			: 1; // = 0x00020000;
		unsigned	FFLAG_ORIGINRETURNING	: 1; // = 0x00040000;
		unsigned	FFLAG_INPOSITION		: 1; // = 0x00080000;
		unsigned	FFLAG_SERVOON			: 1; // = 0x00100000;
		unsigned	FFLAG_ALARMRESET		: 1; // = 0x00200000;
		unsigned	FFLAG_PTSTOPPED			: 1; // = 0x00400000;
		unsigned	FFLAG_ORIGINSENSOR		: 1; // = 0x00800000;
		unsigned	FFLAG_ZPULSE			: 1; // = 0x01000000;
		unsigned	FFLAG_ORIGINRETOK		: 1; // = 0x02000000;
		unsigned	FFLAG_MOTIONDIR			: 1; // = 0x04000000;
		unsigned	FFLAG_MOTIONING			: 1; // = 0x08000000;
		unsigned	FFLAG_RESERVED2			: 1; // = 0x10000000;
		unsigned	FFLAG_MOTIONACCEL		: 1; // = 0x20000000;
		unsigned	FFLAG_MOTIONDECEL		: 1; // = 0x40000000;
		unsigned	FFLAG_MOTIONCONST		: 1; // = 0x80000000;
	};
} EZISERVO_ALL28_V2_AXISSTATUS;

//------------------------------------------------------------------
//                 Input/Output Defines.
//------------------------------------------------------------------

// Input Bit-mask list.
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_LIMITP			= 0x00000001;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_LIMITN			= 0x00000002;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_ORIGIN			= 0x00000004;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_CLEARPOSITION		= 0x00000008;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_PTA0				= 0x00000010;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_PTA1				= 0x00000020;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_PTA2				= 0x00000040;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_PTA3				= 0x00000080;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_PTA4				= 0x00000100;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_PTA5				= 0x00000200;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_PTA6				= 0x00000400;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_PTA7				= 0x00000800;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_PTSTART			= 0x00001000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_STOP				= 0x00002000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_PJOG				= 0x00004000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_NJOG				= 0x00008000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_ALARMRESET		= 0x00010000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_SERVOON			= 0x00020000;
//static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_RESERVED		= 0x00040000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_ORIGINSEARCH		= 0x00080000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_TEACHING			= 0x00100000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_ESTOP				= 0x00200000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_JPTIN0			= 0x00400000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_JPTIN1			= 0x00800000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_JPTIN2			= 0x01000000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_JPTSTART			= 0x02000000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_USERIN0			= 0x04000000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_USERIN1			= 0x08000000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_USERIN2			= 0x10000000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_USERIN3			= 0x20000000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_USERIN4			= 0x40000000;
static const unsigned int	SERVO_ALL28_V2_IN_BITMASK_USERIN5			= 0x80000000;


typedef union
{
	unsigned int	dwValue;
	struct
	{
		unsigned BIT_LIMITP		: 1;
		unsigned BIT_LIMITN		: 1;
		unsigned BIT_ORIGIN		: 1;

		unsigned BIT_CLEARPOSITION	: 1;
		unsigned BIT_PTA0			: 1;
		unsigned BIT_PTA1			: 1;
		unsigned BIT_PTA2			: 1;
		unsigned BIT_PTA3			: 1;
		unsigned BIT_PTA4			: 1;
		unsigned BIT_PTA5			: 1;
		unsigned BIT_PTA6			: 1;
		unsigned BIT_PTA7			: 1;
		unsigned BIT_PTSTART		: 1;
		unsigned BIT_STOP			: 1;
		unsigned BIT_PJOG			: 1;
		unsigned BIT_NJOG			: 1;
		unsigned BIT_ALARMRESET		: 1;
		unsigned BIT_SERVOON		: 1;
		unsigned BIT_RESERVED0		: 1;
		unsigned BIT_ORIGINSEARCH	: 1;
		unsigned BIT_TEACHING		: 1;
		unsigned BIT_ESTOP			: 1;
		unsigned BIT_JPTIN0			: 1;
		unsigned BIT_JPTIN1			: 1;
		unsigned BIT_JPTIN2			: 1;
		unsigned BIT_JPTSTART		: 1;
		unsigned BIT_USERIN0		: 1;
		unsigned BIT_USERIN1		: 1;
		unsigned BIT_USERIN2		: 1;
		unsigned BIT_USERIN3		: 1;
		unsigned BIT_USERIN4		: 1;
		unsigned BIT_USERIN5		: 1;
	};
} EZISERVO_ALL28_V2_INLOGIC;

//------------------------------------------------------------------
//                 Input/Output Assigning Defines.
//------------------------------------------------------------------

typedef enum
{
	SERVO_ALL28_V2_IN_LIMITP = 1,
	SERVO_ALL28_V2_IN_LIMITN,
	SERVO_ALL28_V2_IN_ORIGIN,

	SERVO_ALL28_V2_IN_LOGIC_CLEARPOSITION,
	SERVO_ALL28_V2_IN_LOGIC_PTA0,
	SERVO_ALL28_V2_IN_LOGIC_PTA1,
	SERVO_ALL28_V2_IN_LOGIC_PTA2,
	SERVO_ALL28_V2_IN_LOGIC_PTA3,
	SERVO_ALL28_V2_IN_LOGIC_PTA4,
	SERVO_ALL28_V2_IN_LOGIC_PTA5,
	SERVO_ALL28_V2_IN_LOGIC_PTA6,
	SERVO_ALL28_V2_IN_LOGIC_PTA7,
	SERVO_ALL28_V2_IN_LOGIC_PTSTART,
	SERVO_ALL28_V2_IN_LOGIC_STOP,
	SERVO_ALL28_V2_IN_LOGIC_PJOG,
	SERVO_ALL28_V2_IN_LOGIC_NJOG,
	SERVO_ALL28_V2_IN_LOGIC_ALARMRESET,
	SERVO_ALL28_V2_IN_LOGIC_SERVOON,
	SERVO_ALL28_V2_IN_LOGIC_RESERVED0,
	SERVO_ALL28_V2_IN_LOGIC_ORIGINSEARCH,
	SERVO_ALL28_V2_IN_LOGIC_TEACHING,
	SERVO_ALL28_V2_IN_LOGIC_ESTOP,
	SERVO_ALL28_V2_IN_LOGIC_JPTIN0,
	SERVO_ALL28_V2_IN_LOGIC_JPTIN1,
	SERVO_ALL28_V2_IN_LOGIC_JPTIN2,
	SERVO_ALL28_V2_IN_LOGIC_JPTSTART,
	SERVO_ALL28_V2_IN_LOGIC_USERIN0,
	SERVO_ALL28_V2_IN_LOGIC_USERIN1,
	SERVO_ALL28_V2_IN_LOGIC_USERIN2,
	SERVO_ALL28_V2_IN_LOGIC_USERIN3,
	SERVO_ALL28_V2_IN_LOGIC_USERIN4,
	SERVO_ALL28_V2_IN_LOGIC_USERIN5,

	MAX_SERVO_ALL28_V2_IN_LOGIC
} EZISERVO_ALL28_V2_INLOGIC_LIST;

static const int	SERVO_ALL28_V2_IN_PIN_CNT	= 4;
static const int	SERVO_ALL28_V2_OUT_PIN_CNT	= 0;

static const int	SERVO_ALL28_V2_IN_LOGIC_CNT		= (MAX_SERVO_ALL28_V2_IN_LOGIC - 1);
static const int	SERVO_ALL28_V2_MAX_PREASSIGNED_IN	= 0;

static const int	SERVO_ALL28_V2_OUT_LOGIC_CNT		= 24;
static const int	SERVO_ALL28_V2_MAX_PREASSIGNED_OUT	= 0;

//------------------------------------------------------------------
//                 Parameters Defines.
//------------------------------------------------------------------

typedef enum
{
	SERVO_ALL28_V2_PULSEPERREVOLUTION = 0,
	SERVO_ALL28_V2_AXISMAXSPEED,
	SERVO_ALL28_V2_AXISSTARTSPEED,
	SERVO_ALL28_V2_AXISACCTIME,
	SERVO_ALL28_V2_AXISDECTIME,

	SERVO_ALL28_V2_RESERVED0,
	SERVO_ALL28_V2_JOGHIGHSPEED,
	SERVO_ALL28_V2_JOGLOWSPEED,
	SERVO_ALL28_V2_JOGACCDECTIME,

	SERVO_ALL28_V2_SWLMTPLUSVALUE,
	SERVO_ALL28_V2_SWLMTMINUSVALUE,
	SERVO_ALL28_V2_SOFTLMTSTOPMETHOD,
	SERVO_ALL28_V2_HARDLMTSTOPMETHOD,
	SERVO_ALL28_V2_RESERVED1,

	SERVO_ALL28_V2_ORGSPEED,
	SERVO_ALL28_V2_ORGSEARCHSPEED,
	SERVO_ALL28_V2_ORGACCDECTIME,
	SERVO_ALL28_V2_ORGMETHOD,
	SERVO_ALL28_V2_ORGDIR,
	SERVO_ALL28_V2_ORGOFFSET,
	SERVO_ALL28_V2_ORGPOSITIONSET,
	SERVO_ALL28_V2_RESERVED2,

	SERVO_ALL28_V2_POSITIONLOOPGAIN,
	SERVO_ALL28_V2_INPOSITIONVALUE,
	SERVO_ALL28_V2_POSTRACKINGLIMIT,
	SERVO_ALL28_V2_MOTIONDIR,

	SERVO_ALL28_V2_RESERVED3,
	SERVO_ALL28_V2_ORGTORQUERATIO,

	SERVO_ALL28_V2_POSERROVERFLOWLIMIT,
	SERVO_ALL28_V2_RESERVED4,

	SERVO_ALL28_V2_RUNCURRENT,
	SERVO_ALL28_V2_BOOSTCURRENT,
	SERVO_ALL28_V2_STOPCURRENT,

	MAX_SERVO_ALL28_V2_PARAM

} FM_EZISERVO_ALL28_V2_PARAM;

//------------------------------------------------------------------
//                 POSITION TABLE Defines.
//------------------------------------------------------------------

#define SERVO_ALL28_V2_MAX_ITEM_COUNT		256

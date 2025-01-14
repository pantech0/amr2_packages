//////////////////////////////////////////////////////////////////////////
//
//	File:			MOTION_EziMotionLink2_DEFINE.h
//	Last Modified Date:	24.07.18
//	Last Modified Ver:	1.0.1
//
//////////////////////////////////////////////////////////////////////////

#pragma once
#include "MOTION_DEFINE.h"

//------------------------------------------------------------------
//                 Device Type Defines.
//------------------------------------------------------------------
#ifndef DEVTYPE_EZI_MOTIONLINK2
#define	DEVTYPE_EZI_MOTIONLINK2				11
#define DEVNAME_EZI_MOTIONLINK2				"Ezi-MotionLink2"
#endif

//------------------------------------------------------------------
//                 Axis Status Flag Defines.
//------------------------------------------------------------------

typedef union
{
	unsigned int	dwValue;
	struct
	{
		unsigned	FFLAG_ERRSERVOALARM		: 1; // = 0x00000001;
		unsigned	FFLAG_HWPOSILMT			: 1; // = 0x00000002;
		unsigned	FFLAG_HWNEGALMT			: 1; // = 0x00000004;
		unsigned	FFLAG_SWPOGILMT			: 1; // = 0x00000008;
		unsigned	FFLAG_SWNEGALMT			: 1; // = 0x00000010;
		unsigned	FFLAG_RESERVED0			: 1; // = 0x00000020;
		unsigned	FFLAG_RESERVED1			: 1; // = 0x00000040;
		unsigned	FFLAG_RESERVED2			: 1; // = 0x00000080;
		unsigned	FFLAG_RESERVED3			: 1; // = 0x00000100;
		unsigned	FFLAG_RESERVED4			: 1; // = 0x00000200;
		unsigned	FFLAG_RESERVED5			: 1; // = 0x00000400;
		unsigned	FFLAG_RESERVED6			: 1; // = 0x00000800;
		unsigned	FFLAG_RESERVED7			: 1; // = 0x00001000;
		unsigned	FFLAG_RESERVED8			: 1; // = 0x00002000;
		unsigned	FFLAG_RESERVED9			: 1; // = 0x00004000;
		unsigned	FFLAG_RESERVED10		: 1; // = 0x00008000;
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
		unsigned	FFLAG_MOTIONPAUSE		: 1; // = 0x10000000;
		unsigned	FFLAG_MOTIONACCEL		: 1; // = 0x20000000;
		unsigned	FFLAG_MOTIONDECEL		: 1; // = 0x40000000;
		unsigned	FFLAG_MOTIONCONST		: 1; // = 0x80000000;
	};
} EZIMOTIONLINK2_AXISSTATUS;

//------------------------------------------------------------------
//                 Input/Output Defines.
//------------------------------------------------------------------

// Input Bit-mask list.
static const unsigned int	MOTIONLINK2_IN_BITMASK_LIMITP		= 0x00000001;
static const unsigned int	MOTIONLINK2_IN_BITMASK_LIMITN		= 0x00000002;
static const unsigned int	MOTIONLINK2_IN_BITMASK_ORIGIN		= 0x00000004;
static const unsigned int	MOTIONLINK2_IN_BITMASK_CLEARPOSITION= 0x00000008;
//static const unsigned int	MOTIONLINK2_IN_BITMASK_RESERVED	= 0x00000010;
//static const unsigned int	MOTIONLINK2_IN_BITMASK_RESERVED	= 0x00000020;
//static const unsigned int	MOTIONLINK2_IN_BITMASK_RESERVED	= 0x00000040;
//static const unsigned int	MOTIONLINK2_IN_BITMASK_RESERVED	= 0x00000080;
//static const unsigned int	MOTIONLINK2_IN_BITMASK_RESERVED	= 0x00000100;
//static const unsigned int	MOTIONLINK2_IN_BITMASK_RESERVED	= 0x00000200;
//static const unsigned int	MOTIONLINK2_IN_BITMASK_RESERVED	= 0x00000400;
//static const unsigned int	MOTIONLINK2_IN_BITMASK_RESERVED	= 0x00000800;
//static const unsigned int	MOTIONLINK2_IN_BITMASK_RESERVED	= 0x00001000;
static const unsigned int	MOTIONLINK2_IN_BITMASK_STOP			= 0x00002000;
static const unsigned int	MOTIONLINK2_IN_BITMASK_PJOG			= 0x00004000;
static const unsigned int	MOTIONLINK2_IN_BITMASK_NJOG			= 0x00008000;
static const unsigned int	MOTIONLINK2_IN_BITMASK_ALARMRESET	= 0x00010000;
static const unsigned int	MOTIONLINK2_IN_BITMASK_SERVOON		= 0x00020000;
static const unsigned int	MOTIONLINK2_IN_BITMASK_PAUSE		= 0x00040000;
static const unsigned int	MOTIONLINK2_IN_BITMASK_ORIGINSEARCH	= 0x00080000;
//static const unsigned int	MOTIONLINK2_IN_BITMASK_RESERVED	= 0x00100000;
static const unsigned int	MOTIONLINK2_IN_BITMASK_ESTOP		= 0x00200000;
//static const unsigned int	MOTIONLINK2_IN_BITMASK_RESERVED	= 0x00400000;
//static const unsigned int	MOTIONLINK2_IN_BITMASK_RESERVED	= 0x00800000;
//static const unsigned int	MOTIONLINK2_IN_BITMASK_RESERVED	= 0x01000000;
//static const unsigned int	MOTIONLINK2_IN_BITMASK_RESERVED	= 0x02000000;
static const unsigned int	MOTIONLINK2_IN_BITMASK_USERIN0		= 0x04000000;
static const unsigned int	MOTIONLINK2_IN_BITMASK_USERIN1		= 0x08000000;
static const unsigned int	MOTIONLINK2_IN_BITMASK_USERIN2		= 0x10000000;
static const unsigned int	MOTIONLINK2_IN_BITMASK_USERIN3		= 0x20000000;
static const unsigned int	MOTIONLINK2_IN_BITMASK_USERIN4		= 0x40000000;
static const unsigned int	MOTIONLINK2_IN_BITMASK_USERIN5		= 0x80000000;

// Output Bit-mask list.
static const unsigned int	MOTIONLINK2_OUT_BITMASK_COMPAREOUT	= 0x00000001;
static const unsigned int	MOTIONLINK2_OUT_BITMASK_INPOSITION	= 0x00000002;
static const unsigned int	MOTIONLINK2_OUT_BITMASK_ALARM		= 0x00000004;
static const unsigned int	MOTIONLINK2_OUT_BITMASK_MOVING		= 0x00000008;
static const unsigned int	MOTIONLINK2_OUT_BITMASK_ACCDEC		= 0x00000010;
static const unsigned int	MOTIONLINK2_OUT_BITMASK_ACK			= 0x00000020;
static const unsigned int	MOTIONLINK2_OUT_BITMASK_END			= 0x00000040;
//static const unsigned int	MOTIONLINK2_OUT_BITMASK_RESERVED= 0x00000080;
static const unsigned int	MOTIONLINK2_OUT_BITMASK_ORGSEARCHOK	= 0x00000100;
static const unsigned int	MOTIONLINK2_OUT_BITMASK_SERVOREADY	= 0x00000200;
//static const unsigned int	MOTIONLINK2_OUT_BITMASK_RESERVED= 0x00000400;
//static const unsigned int	MOTIONLINK2_OUT_BITMASK_RESERVED= 0x00000800;
//static const unsigned int	MOTIONLINK2_OUT_BITMASK_RESERVED= 0x00001000;
//static const unsigned int	MOTIONLINK2_OUT_BITMASK_RESERVED= 0x00002000;
//static const unsigned int	MOTIONLINK2_OUT_BITMASK_RESERVED= 0x00004000;
static const unsigned int	MOTIONLINK2_OUT_BITMASK_USEROUT0	= 0x00008000;
//static const unsigned int	MOTIONLINK2_OUT_BITMASK_RESERVED= 0x00010000;
//static const unsigned int	MOTIONLINK2_OUT_BITMASK_RESERVED= 0x00020000;
//static const unsigned int	MOTIONLINK2_OUT_BITMASK_RESERVED= 0x00040000;
//static const unsigned int	MOTIONLINK2_OUT_BITMASK_RESERVED= 0x00080000;
//static const unsigned int	MOTIONLINK2_OUT_BITMASK_RESERVED= 0x00100000;
//static const unsigned int	MOTIONLINK2_OUT_BITMASK_RESERVED= 0x00200000;
//static const unsigned int	MOTIONLINK2_OUT_BITMASK_RESERVED= 0x00400000;
//static const unsigned int	MOTIONLINK2_OUT_BITMASK_RESERVED= 0x00800000;

typedef union
{
	unsigned int	dwValue;
	struct
	{
		unsigned BIT_LIMITP		: 1;
		unsigned BIT_LIMITN		: 1;
		unsigned BIT_ORIGIN		: 1;

		unsigned BIT_CLEARPOSITION	: 1;
		unsigned BIT_RESERVED0		: 1;
		unsigned BIT_RESERVED1		: 1;
		unsigned BIT_RESERVED2		: 1;
		unsigned BIT_RESERVED3		: 1;
		unsigned BIT_RESERVED4		: 1;
		unsigned BIT_RESERVED5		: 1;
		unsigned BIT_RESERVED6		: 1;
		unsigned BIT_RESERVED7		: 1;
		unsigned BIT_RESERVED8		: 1;
		unsigned BIT_STOP			: 1;
		unsigned BIT_PJOG			: 1;
		unsigned BIT_NJOG			: 1;
		unsigned BIT_ALARMRESET		: 1;
		unsigned BIT_SERVOON		: 1;
		unsigned BIT_RESERVED9		: 1;
		unsigned BIT_ORIGINSEARCH	: 1;
		unsigned BIT_RESERVED10		: 1;
		unsigned BIT_ESTOP			: 1;
		unsigned BIT_RESERVED11		: 1;
		unsigned BIT_RESERVED12		: 1;
		unsigned BIT_RESERVED13		: 1;
		unsigned BIT_RESERVED14		: 1;
		unsigned BIT_USERIN0		: 1;
		unsigned BIT_USERIN1		: 1;
		unsigned BIT_USERIN2		: 1;
		unsigned BIT_USERIN3		: 1;
		unsigned BIT_USERIN4		: 1;
		unsigned BIT_RESERVED15		: 1;
	};
} EZIMOTIONLINK2_INLOGIC;

typedef union
{
	unsigned int dwValue;
	struct
	{
		unsigned BIT_COMP			: 1;
		unsigned BIT_INPOSITION		: 1;
		unsigned BIT_ALARM			: 1;
		unsigned BIT_MOVING			: 1;
		unsigned BIT_ACCDEC			: 1;
		unsigned BIT_RESERVED0		: 1;
		unsigned BIT_RESERVED1		: 1;
		unsigned BIT_RESERVED2		: 1;
		unsigned BIT_ORGSEARCHOK	: 1;
		unsigned BIT_RESERVED3		: 1;
		unsigned BIT_RESERVED4		: 1;
		unsigned BIT_RESERVED5		: 1;
		unsigned BIT_RESERVED6		: 1;
		unsigned BIT_RESERVED7		: 1;
		unsigned BIT_RESERVED8		: 1;
		unsigned BIT_USEROUT0		: 1;
		unsigned BIT_USEROUT1		: 1;
		unsigned BIT_USEROUT2		: 1;
		unsigned BIT_RESERVED9		: 1;
		unsigned BIT_RESERVED10		: 1;
		unsigned BIT_RESERVED11		: 1;
		unsigned BIT_RESERVED12		: 1;
		unsigned BIT_RESERVED13		: 1;
		unsigned BIT_RESERVED14		: 1;
	};

} EZIMOTIONLINK2_OUTLOGIC;

//------------------------------------------------------------------
//                 Input/Output Assigning Defines.
//------------------------------------------------------------------

typedef enum
{
	MOTIONLINK2_IN_PREASSIGN_LIMITP = 1,
	MOTIONLINK2_IN_PREASSIGN_LIMITN,
	MOTIONLINK2_IN_PREASSIGN_ORIGIN,

	MOTIONLINK2_IN_LOGIC_CLEARPOSITION,
	MOTIONLINK2_IN_LOGIC_RESERVED0,
	MOTIONLINK2_IN_LOGIC_RESERVED1,
	MOTIONLINK2_IN_LOGIC_RESERVED2,
	MOTIONLINK2_IN_LOGIC_RESERVED3,
	MOTIONLINK2_IN_LOGIC_RESERVED4,
	MOTIONLINK2_IN_LOGIC_RESERVED5,
	MOTIONLINK2_IN_LOGIC_RESERVED6,
	MOTIONLINK2_IN_LOGIC_RESERVED7,
	MOTIONLINK2_IN_LOGIC_PTSTART,
	MOTIONLINK2_IN_LOGIC_STOP,
	MOTIONLINK2_IN_LOGIC_PJOG,
	MOTIONLINK2_IN_LOGIC_NJOG,
	MOTIONLINK2_IN_LOGIC_ALARMRESET,
	MOTIONLINK2_IN_LOGIC_SERVOON,
	MOTIONLINK2_IN_LOGIC_RESERVED8,
	MOTIONLINK2_IN_LOGIC_ORIGINSEARCH,
	MOTIONLINK2_IN_LOGIC_RESERVED9,
	MOTIONLINK2_IN_LOGIC_ESTOP,
	MOTIONLINK2_IN_LOGIC_RESERVED10,
	MOTIONLINK2_IN_LOGIC_RESERVED11,
	MOTIONLINK2_IN_LOGIC_RESERVED12,
	MOTIONLINK2_IN_LOGIC_RESERVED13,
	MOTIONLINK2_IN_LOGIC_USERIN0,
	MOTIONLINK2_IN_LOGIC_USERIN1,
	MOTIONLINK2_IN_LOGIC_USERIN2,
	MOTIONLINK2_IN_LOGIC_USERIN3,
	MOTIONLINK2_IN_LOGIC_USERIN4,
	MOTIONLINK2_IN_LOGIC_RESERVED14,

	MAX_MOTIONLINK2_IN_LOGIC
} EZIMOTIONLINK2_INLOGIC_LIST;

typedef enum
{
	MOTIONLINK2_OUT_PREASSIGN_COMP = 1,

	MOTIONLINK2_OUT_LOGIC_INPOSITION,
	MOTIONLINK2_OUT_LOGIC_ALARM,
	MOTIONLINK2_OUT_LOGIC_MOVING,
	MOTIONLINK2_OUT_LOGIC_ACCDEC,
	MOTIONLINK2_OUT_LOGIC_RESERVED0,
	MOTIONLINK2_OUT_LOGIC_RESERVED1,
	MOTIONLINK2_OUT_LOGIC_RESERVED2,
	MOTIONLINK2_OUT_LOGIC_ORGSEARCHOK,
	MOTIONLINK2_OUT_LOGIC_RESERVED3,
	MOTIONLINK2_OUT_LOGIC_RESERVED4,
	MOTIONLINK2_OUT_LOGIC_RESERVED5,
	MOTIONLINK2_OUT_LOGIC_RESERVED6,
	MOTIONLINK2_OUT_LOGIC_RESERVED7,
	MOTIONLINK2_OUT_LOGIC_RESERVED8,
	MOTIONLINK2_OUT_LOGIC_USEROUT0,
	MOTIONLINK2_OUT_LOGIC_USEROUT1,
	MOTIONLINK2_OUT_LOGIC_USEROUT2,
	MOTIONLINK2_OUT_LOGIC_RESERVED9,
	MOTIONLINK2_OUT_LOGIC_RESERVED10,
	MOTIONLINK2_OUT_LOGIC_RESERVED11,
	MOTIONLINK2_OUT_LOGIC_RESERVED12,
	MOTIONLINK2_OUT_LOGIC_RESERVED13,
	MOTIONLINK2_OUT_LOGIC_RESERVED14,

	MAX_MOTIONLINK2_OUT_LOGIC
} EZIMOTIONLINK2_OUTLOGIC_LIST;

static const int	MOTIONLINK2_IN_PIN_CNT	= 8;
static const int	MOTIONLINK2_OUT_PIN_CNT	= 4;

static const int	MOTIONLINK2_IN_LOGIC_CNT			= (MAX_MOTIONLINK2_IN_LOGIC - 1);
static const int	MOTIONLINK2_MAX_PREASSIGNED_IN	= (MOTIONLINK2_IN_PREASSIGN_ORIGIN);

static const int	MOTIONLINK2_OUT_LOGIC_CNT		= (MAX_MOTIONLINK2_OUT_LOGIC - 1);
static const int	MOTIONLINK2_MAX_PREASSIGNED_OUT	= (MOTIONLINK2_OUT_PREASSIGN_COMP);

//------------------------------------------------------------------
//                 Parameters Defines.
//------------------------------------------------------------------

typedef enum
{
	MOTIONLINK2_ENCODERMULTIPLY = 0,
	MOTIONLINK2_AXISMAXSPEED,
	MOTIONLINK2_AXISSTARTSPEED,
	MOTIONLINK2_AXISACCTIME,
	MOTIONLINK2_AXISDECTIME,

	MOTIONLINK2_SPEEDOVERRIDE,
	MOTIONLINK2_JOGHIGHSPEED,
	MOTIONLINK2_JOGLOWSPEED,
	MOTIONLINK2_JOGACCDECTIME,

	MOTIONLINK2_SWLMTPLUSVALUE,
	MOTIONLINK2_SWLMTMINUSVALUE,
	MOTIONLINK2_SOFTLMTSTOPMETHOD,
	MOTIONLINK2_HARDLMTSTOPMETHOD,
	MOTIONLINK2_LIMITSENSORLOGIC,

	MOTIONLINK2_ORGSPEED,
	MOTIONLINK2_ORGSEARCHSPEED,
	MOTIONLINK2_ORGACCDECTIME,
	MOTIONLINK2_ORGMETHOD,
	MOTIONLINK2_ORGDIR,
	MOTIONLINK2_ORGOFFSET,
	MOTIONLINK2_ORGPOSITIONSET,
	MOTIONLINK2_ORGSENSORLOGIC,

	MOTIONLINK2_LIMITSENSORDIR,
	MOTIONLINK2_PULSETYPE,
	MOTIONLINK2_ENCODERDIR,
	MOTIONLINK2_MOTIONDIR,

	MOTIONLINK2_SERVOALARMRESETLOGIC,
	MOTIONLINK2_SERVOONOUTPUTLOGIC,
	MOTIONLINK2_SERVOALARMLOGIC,

	MOTIONLINK2_SERVOINPOSLOGIC,

	MOTIONLINK2_SPARE2,
	MOTIONLINK2_SPARE3,
	MOTIONLINK2_SPARE4,
	MOTIONLINK2_SPARE5,

	MAX_MOTIONLINK2_PARAM

} FM_EZIMOTIONLINK2_PARAM;

//------------------------------------------------------------------
//                 POSITION TABLE Defines.
//------------------------------------------------------------------

#define MOTIONLINK2_MAX_ITEM_COUNT		64

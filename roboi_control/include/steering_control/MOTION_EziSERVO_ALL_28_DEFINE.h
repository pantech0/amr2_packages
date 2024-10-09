#pragma once
#include "MOTION_DEFINE.h"

//------------------------------------------------------------------
//                 Device Type Defines.
//------------------------------------------------------------------
#ifndef DEVTYPE_EZI_SERVO_PLUS_R_ALL_28
#define	DEVTYPE_EZI_SERVO_PLUS_R_ALL_28			105
#define DEVNAME_EZI_SERVO_PLUS_R_ALL_28			"Ezi-SERVO Plus-R ALL-28"
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
		unsigned	FFLAG_RESERVED2			: 1; // = 0x00400000;
		unsigned	FFLAG_ORIGINSENSOR		: 1; // = 0x00800000;
		unsigned	FFLAG_ZPULSE			: 1; // = 0x01000000;
		unsigned	FFLAG_ORIGINRETOK		: 1; // = 0x02000000;
		unsigned	FFLAG_MOTIONDIR			: 1; // = 0x04000000;
		unsigned	FFLAG_MOTIONING			: 1; // = 0x08000000;
		unsigned	FFLAG_RESERVED3			: 1; // = 0x10000000;
		unsigned	FFLAG_MOTIONACCEL		: 1; // = 0x20000000;
		unsigned	FFLAG_MOTIONDECEL		: 1; // = 0x40000000;
		unsigned	FFLAG_MOTIONCONST		: 1; // = 0x80000000;
	};
} EZISERVO_ALL28_AXISSTATUS;

//------------------------------------------------------------------
//                 Input/Output Defines.
//------------------------------------------------------------------

// Input Bit-mask list.
static const unsigned int	SERVO_ALL28_IN_BITMASK_LIMITP			= 0x00000001;
static const unsigned int	SERVO_ALL28_IN_BITMASK_LIMITN			= 0x00000002;
static const unsigned int	SERVO_ALL28_IN_BITMASK_ORIGIN			= 0x00000004;
static const unsigned int	SERVO_ALL28_IN_BITMASK_CLEARPOSITION	= 0x00000008;
//static const unsigned int	SERVO_ALL28_IN_BITMASK_RESERVED		= 0x00000010;
//static const unsigned int	SERVO_ALL28_IN_BITMASK_RESERVED		= 0x00000020;
//static const unsigned int	SERVO_ALL28_IN_BITMASK_RESERVED		= 0x00000040;
//static const unsigned int	SERVO_ALL28_IN_BITMASK_RESERVED		= 0x00000080;
//static const unsigned int	SERVO_ALL28_IN_BITMASK_RESERVED		= 0x00000100;
//static const unsigned int	SERVO_ALL28_IN_BITMASK_RESERVED		= 0x00000200;
//static const unsigned int	SERVO_ALL28_IN_BITMASK_RESERVED		= 0x00000400;
//static const unsigned int	SERVO_ALL28_IN_BITMASK_RESERVED		= 0x00000800;
//static const unsigned int	SERVO_ALL28_IN_BITMASK_RESERVED		= 0x00001000;
static const unsigned int	SERVO_ALL28_IN_BITMASK_STOP				= 0x00002000;
static const unsigned int	SERVO_ALL28_IN_BITMASK_PJOG				= 0x00004000;
static const unsigned int	SERVO_ALL28_IN_BITMASK_NJOG				= 0x00008000;
static const unsigned int	SERVO_ALL28_IN_BITMASK_ALARMRESET		= 0x00010000;
static const unsigned int	SERVO_ALL28_IN_BITMASK_SERVOON			= 0x00020000;
//static const unsigned int	SERVO_ALL28_IN_BITMASK_RESERVED		= 0x00040000;
static const unsigned int	SERVO_ALL28_IN_BITMASK_ORIGINSEARCH		= 0x00080000;
//static const unsigned int	SERVO_ALL28_IN_BITMASK_RESERVED		= 0x00100000;
static const unsigned int	SERVO_ALL28_IN_BITMASK_ESTOP			= 0x00200000;
//static const unsigned int	SERVO_ALL28_IN_BITMASK_RESERVED		= 0x00400000;
//static const unsigned int	SERVO_ALL28_IN_BITMASK_RESERVED		= 0x00800000;
//static const unsigned int	SERVO_ALL28_IN_BITMASK_RESERVED		= 0x01000000;
//static const unsigned int	SERVO_ALL28_IN_BITMASK_RESERVED		= 0x02000000;
static const unsigned int	SERVO_ALL28_IN_BITMASK_USERIN0			= 0x04000000;
static const unsigned int	SERVO_ALL28_IN_BITMASK_USERIN1			= 0x08000000;
static const unsigned int	SERVO_ALL28_IN_BITMASK_USERIN2			= 0x10000000;
static const unsigned int	SERVO_ALL28_IN_BITMASK_USERIN3			= 0x20000000;
static const unsigned int	SERVO_ALL28_IN_BITMASK_USERIN4			= 0x40000000;
static const unsigned int	SERVO_ALL28_IN_BITMASK_USERIN5			= 0x80000000;


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
		unsigned BIT_USERIN5		: 1;
	};
} EZISERVO_ALL28_INLOGIC;

//------------------------------------------------------------------
//                 Input/Output Assigning Defines.
//------------------------------------------------------------------

typedef enum
{
	SERVO_ALL28_IN_PREASSIGN_LIMITP = 1,
	SERVO_ALL28_IN_PREASSIGN_LIMITN,
	SERVO_ALL28_IN_PREASSIGN_ORIGIN,

	SERVO_ALL28_IN_LOGIC_CLEARPOSITION,
	SERVO_ALL28_IN_LOGIC_RESERVED0,
	SERVO_ALL28_IN_LOGIC_RESERVED1,
	SERVO_ALL28_IN_LOGIC_RESERVED2,
	SERVO_ALL28_IN_LOGIC_RESERVED3,
	SERVO_ALL28_IN_LOGIC_RESERVED4,
	SERVO_ALL28_IN_LOGIC_RESERVED5,
	SERVO_ALL28_IN_LOGIC_RESERVED6,
	SERVO_ALL28_IN_LOGIC_RESERVED7,
	SERVO_ALL28_IN_LOGIC_RESERVED8,
	SERVO_ALL28_IN_LOGIC_STOP,
	SERVO_ALL28_IN_LOGIC_PJOG,
	SERVO_ALL28_IN_LOGIC_NJOG,
	SERVO_ALL28_IN_LOGIC_ALARMRESET,
	SERVO_ALL28_IN_LOGIC_SERVOON,
	SERVO_ALL28_IN_LOGIC_RESERVED9,
	SERVO_ALL28_IN_LOGIC_ORIGINSEARCH,
	SERVO_ALL28_IN_LOGIC_RESERVED10,
	SERVO_ALL28_IN_LOGIC_ESTOP,
	SERVO_ALL28_IN_LOGIC_RESERVED11,
	SERVO_ALL28_IN_LOGIC_RESERVED12,
	SERVO_ALL28_IN_LOGIC_RESERVED13,
	SERVO_ALL28_IN_LOGIC_RESERVED14,
	SERVO_ALL28_IN_LOGIC_USERIN0,
	SERVO_ALL28_IN_LOGIC_USERIN1,
	SERVO_ALL28_IN_LOGIC_USERIN2,
	SERVO_ALL28_IN_LOGIC_USERIN3,
	SERVO_ALL28_IN_LOGIC_USERIN4,
	SERVO_ALL28_IN_LOGIC_USERIN5,

	MAX_SERVO_ALL28_IN_LOGIC
} EZISERVO_ALL28_INLOGIC_LIST;

static const int	SERVO_ALL28_IN_PIN_CNT	= 4;
static const int	SERVO_ALL28_OUT_PIN_CNT	= 0;

static const int	SERVO_ALL28_IN_LOGIC_CNT		= (MAX_SERVO_ALL28_IN_LOGIC - 1);
static const int	SERVO_ALL28_MAX_PREASSIGNED_IN	= (SERVO_ALL28_IN_PREASSIGN_ORIGIN);

static const int	SERVO_ALL28_OUT_LOGIC_CNT		= 24;
static const int	SERVO_ALL28_MAX_PREASSIGNED_OUT	= 0;

//------------------------------------------------------------------
//                 Parameters Defines.
//------------------------------------------------------------------

typedef enum
{
	SERVO_ALL28_PULSEPERREVOLUTION = 0,
	SERVO_ALL28_AXISMAXSPEED,
	SERVO_ALL28_AXISSTARTSPEED,
	SERVO_ALL28_AXISACCTIME,
	SERVO_ALL28_AXISDECTIME,

	SERVO_ALL28_RESERVED0,
	SERVO_ALL28_JOGHIGHSPEED,
	SERVO_ALL28_JOGLOWSPEED,
	SERVO_ALL28_JOGACCDECTIME,

	SERVO_ALL28_SWLMTPLUSVALUE,
	SERVO_ALL28_SWLMTMINUSVALUE,
	SERVO_ALL28_SOFTLMTSTOPMETHOD,
	SERVO_ALL28_HARDLMTSTOPMETHOD,
	SERVO_ALL28_LIMITSENSORLOGIC,

	SERVO_ALL28_ORGSPEED,
	SERVO_ALL28_ORGSEARCHSPEED,
	SERVO_ALL28_ORGACCDECTIME,
	SERVO_ALL28_ORGMETHOD,
	SERVO_ALL28_ORGDIR,
	SERVO_ALL28_ORGOFFSET,
	SERVO_ALL28_ORGPOSITIONSET,
	SERVO_ALL28_ORGSENSORLOGIC,

	SERVO_ALL28_POSITIONLOOPGAIN,
	SERVO_ALL28_INPOSITIONVALUE,
	SERVO_ALL28_POSTRACKINGLIMIT,
	SERVO_ALL28_MOTIONDIR,

	SERVO_ALL28_LIMITSENSORDIR,
	SERVO_ALL28_ORGTORQUERATIO,

	SERVO_ALL28_POSERROVERFLOWLIMIT,
	SERVO_ALL28_RESERVED1,

	SERVO_ALL28_RUNCURRENT,
	SERVO_ALL28_BOOSTCURRENT,
	SERVO_ALL28_STOPCURRENT,

	MAX_SERVO_ALL28_PARAM

} FM_EZISERVO_ALL28_PARAM;

//------------------------------------------------------------------
//                 POSITION TABLE Defines.
//------------------------------------------------------------------

#define SERVO_ALL28_MAX_ITEM_COUNT		0

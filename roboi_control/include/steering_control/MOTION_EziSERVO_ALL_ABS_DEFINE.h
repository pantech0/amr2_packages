//////////////////////////////////////////////////////////////////////////
//
//	File:			MOTION_EziSERVO_ALL_ABS_DEFINE.h
//	Last Modified Date:	24.07.18
//	Last Modified Ver:	1.0.1
//
//////////////////////////////////////////////////////////////////////////

#pragma once
#include "MOTION_DEFINE.h"

//------------------------------------------------------------------
//                 Device Type Defines.
//------------------------------------------------------------------
#ifndef DEVTYPE_EZI_SERVO_PLUS_R_ALL_ABS
#define	DEVTYPE_EZI_SERVO_PLUS_R_ALL_ABS		35
#define DEVNAME_EZI_SERVO_PLUS_R_ALL_ABS		"Ezi-SERVO Plus-R-ALL Abs"
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
		unsigned	FFLAG_MOTIONPAUSE		: 1; // = 0x10000000;
		unsigned	FFLAG_MOTIONACCEL		: 1; // = 0x20000000;
		unsigned	FFLAG_MOTIONDECEL		: 1; // = 0x40000000;
		unsigned	FFLAG_MOTIONCONST		: 1; // = 0x80000000;
	};
} EZISERVO_ALL_ABS_AXISSTATUS;

//------------------------------------------------------------------
//                 Input/Output Defines.
//------------------------------------------------------------------

// Input Bit-mask list.
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_LIMITP			= 0x00000001;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_LIMITN			= 0x00000002;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_ORIGIN			= 0x00000004;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_CLEARPOSITION	= 0x00000008;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_PTA0			= 0x00000010;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_PTA1			= 0x00000020;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_PTA2			= 0x00000040;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_PTA3			= 0x00000080;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_PTA4			= 0x00000100;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_PTA5			= 0x00000200;
//static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_RESERVED	= 0x00000400;
//static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_RESERVED	= 0x00000800;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_PTSTART		= 0x00001000;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_STOP			= 0x00002000;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_PJOG			= 0x00004000;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_NJOG			= 0x00008000;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_ALARMRESET		= 0x00010000;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_SERVOON		= 0x00020000;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_PAUSE			= 0x00040000;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_ORIGINSEARCH	= 0x00080000;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_TEACHING		= 0x00100000;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_ESTOP			= 0x00200000;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_JPTIN0			= 0x00400000;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_JPTIN1			= 0x00800000;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_JPTIN2			= 0x01000000;
static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_JPTSTART		= 0x02000000;
//static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_RESERVED	= 0x04000000;
//static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_RESERVED	= 0x08000000;
//static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_RESERVED	= 0x10000000;
//static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_RESERVED	= 0x20000000;
//static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_RESERVED	= 0x40000000;
//static const unsigned int	SERVO_ALL_ABS_IN_BITMASK_RESERVED	= 0x80000000;

// Output Bit-mask list.
static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_COMPAREOUT	= 0x00000001;
static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_INPOSITION	= 0x00000002;
static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_ALARM			= 0x00000004;
static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_MOVING		= 0x00000008;
static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_ACCDEC		= 0x00000010;
static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_ACK			= 0x00000020;
static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_END			= 0x00000040;
//static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_RESERVED	= 0x00000080;
static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_ORGSEARCHOK	= 0x00000100;
static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_SERVOREADY	= 0x00000200;
//static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_RESERVED	= 0x00000400;
static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_BRAKE			= 0x00000800;
static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_PTOUT0		= 0x00001000;
static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_PTOUT1		= 0x00002000;
static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_PTOUT2		= 0x00004000;
static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_PTOUT3		= 0x00008000;
//static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_RESERVED	= 0x00010000;
//static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_RESERVED	= 0x00020000;
//static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_RESERVED	= 0x00040000;
//static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_RESERVED	= 0x00080000;
//static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_RESERVED	= 0x00100000;
//static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_RESERVED	= 0x00200000;
//static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_RESERVED	= 0x00400000;
//static const unsigned int	SERVO_ALL_ABS_OUT_BITMASK_RESERVED	= 0x00800000;

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
		unsigned BIT_RESERVED0		: 1;
		unsigned BIT_RESERVED1		: 1;
		unsigned BIT_PTSTART		: 1;
		unsigned BIT_STOP			: 1;
		unsigned BIT_PJOG			: 1;
		unsigned BIT_NJOG			: 1;
		unsigned BIT_ALARMRESET		: 1;
		unsigned BIT_SERVOON		: 1;
		unsigned BIT_PAUSE			: 1;
		unsigned BIT_ORIGINSEARCH	: 1;
		unsigned BIT_TEACHING		: 1;
		unsigned BIT_ESTOP			: 1;
		unsigned BIT_JPTIN0			: 1;
		unsigned BIT_JPTIN1			: 1;
		unsigned BIT_JPTIN2			: 1;
		unsigned BIT_JPTSTART		: 1;
		unsigned BIT_RESERVED2		: 1;
		unsigned BIT_RESERVED3		: 1;
		unsigned BIT_RESERVED4		: 1;
		unsigned BIT_RESERVED5		: 1;
		unsigned BIT_RESERVED6		: 1;
		unsigned BIT_RESERVED7		: 1;
	};
} EZISERVO_ALL_ABS_INLOGIC;

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
		unsigned BIT_ACK			: 1;
		unsigned BIT_END			: 1;
		unsigned BIT_RESERVED0		: 1;
		unsigned BIT_ORGSEARCHOK	: 1;
		unsigned BIT_SERVOREADY		: 1;
		unsigned BIT_RESERVED1		: 1;
		unsigned BIT_BRAKE			: 1;
		unsigned BIT_PTOUT0			: 1;
		unsigned BIT_PTOUT1			: 1;
		unsigned BIT_PTOUT2			: 1;
		unsigned BIT_PTOUT3			: 1;
		unsigned BIT_RESERVED2		: 1;
		unsigned BIT_RESERVED3		: 1;
		unsigned BIT_RESERVED4		: 1;
		unsigned BIT_RESERVED5		: 1;
		unsigned BIT_RESERVED6		: 1;
		unsigned BIT_RESERVED7		: 1;
		unsigned BIT_RESERVED8		: 1;
		unsigned BIT_RESERVED9		: 1;
	};

} EZISERVO_ALL_ABS_OUTLOGIC;

//------------------------------------------------------------------
//                 Input/Output Assigning Defines.
//------------------------------------------------------------------

typedef enum
{
	SERVO_ALL_ABS_IN_PREASSIGN_LIMITP = 1,
	SERVO_ALL_ABS_IN_PREASSIGN_LIMITN,
	SERVO_ALL_ABS_IN_PREASSIGN_ORIGIN,

	SERVO_ALL_ABS_IN_LOGIC_CLEARPOSITION,
	SERVO_ALL_ABS_IN_LOGIC_PTA0,
	SERVO_ALL_ABS_IN_LOGIC_PTA1,
	SERVO_ALL_ABS_IN_LOGIC_PTA2,
	SERVO_ALL_ABS_IN_LOGIC_PTA3,
	SERVO_ALL_ABS_IN_LOGIC_PTA4,
	SERVO_ALL_ABS_IN_LOGIC_PTA5,
	SERVO_ALL_ABS_IN_LOGIC_RESERVED0,
	SERVO_ALL_ABS_IN_LOGIC_RESERVED1,
	SERVO_ALL_ABS_IN_LOGIC_PTSTART,
	SERVO_ALL_ABS_IN_LOGIC_STOP,
	SERVO_ALL_ABS_IN_LOGIC_PJOG,
	SERVO_ALL_ABS_IN_LOGIC_NJOG,
	SERVO_ALL_ABS_IN_LOGIC_ALARMRESET,
	SERVO_ALL_ABS_IN_LOGIC_SERVOON,
	SERVO_ALL_ABS_IN_LOGIC_PAUSE,
	SERVO_ALL_ABS_IN_LOGIC_ORIGINSEARCH,
	SERVO_ALL_ABS_IN_LOGIC_TEACHING,
	SERVO_ALL_ABS_IN_LOGIC_ESTOP,
	SERVO_ALL_ABS_IN_LOGIC_JPTIN0,
	SERVO_ALL_ABS_IN_LOGIC_JPTIN1,
	SERVO_ALL_ABS_IN_LOGIC_JPTIN2,
	SERVO_ALL_ABS_IN_LOGIC_JPTSTART,
	SERVO_ALL_ABS_IN_LOGIC_RESERVED2,
	SERVO_ALL_ABS_IN_LOGIC_RESERVED3,
	SERVO_ALL_ABS_IN_LOGIC_RESERVED4,
	SERVO_ALL_ABS_IN_LOGIC_RESERVED5,
	SERVO_ALL_ABS_IN_LOGIC_RESERVED6,
	SERVO_ALL_ABS_IN_LOGIC_RESERVED7,

	MAX_SERVO_ALL_ABS_IN_LOGIC
} EZISERVO_ALL_ABS_INLOGIC_LIST;

typedef enum
{
	SERVO_ALL_ABS_OUT_PREASSIGN_COMP = 1,

	SERVO_ALL_ABS_OUT_LOGIC_INPOSITION,
	SERVO_ALL_ABS_OUT_LOGIC_ALARM,
	SERVO_ALL_ABS_OUT_LOGIC_MOVING,
	SERVO_ALL_ABS_OUT_LOGIC_ACCDEC,
	SERVO_ALL_ABS_OUT_LOGIC_ACK,
	SERVO_ALL_ABS_OUT_LOGIC_END,
	SERVO_ALL_ABS_OUT_LOGIC_RESERVED0,
	SERVO_ALL_ABS_OUT_LOGIC_ORGSEARCHOK,
	SERVO_ALL_ABS_OUT_LOGIC_SERVOREADY,
	SERVO_ALL_ABS_OUT_LOGIC_RESERVED1,
	SERVO_ALL_ABS_OUT_LOGIC_BRAKE,
	SERVO_ALL_ABS_OUT_LOGIC_PTOUT0,
	SERVO_ALL_ABS_OUT_LOGIC_PTOUT1,
	SERVO_ALL_ABS_OUT_LOGIC_PTOUT2,
	SERVO_ALL_ABS_OUT_LOGIC_PTOUT3,
	SERVO_ALL_ABS_OUT_LOGIC_RESERVED2,
	SERVO_ALL_ABS_OUT_LOGIC_RESERVED3,
	SERVO_ALL_ABS_OUT_LOGIC_RESERVED4,
	SERVO_ALL_ABS_OUT_LOGIC_RESERVED5,
	SERVO_ALL_ABS_OUT_LOGIC_RESERVED6,
	SERVO_ALL_ABS_OUT_LOGIC_RESERVED7,
	SERVO_ALL_ABS_OUT_LOGIC_RESERVED8,
	SERVO_ALL_ABS_OUT_LOGIC_RESERVED9,

	MAX_SERVO_ALL_ABS_OUT_LOGIC
} EZISERVO_ALL_ABS_OUTLOGIC_LIST;

static const int	SERVO_ALL_ABS_IN_PIN_CNT	= 9;
static const int	SERVO_ALL_ABS_OUT_PIN_CNT	= 9;

static const int	SERVO_ALL_ABS_IN_LOGIC_CNT			= (MAX_SERVO_ALL_ABS_IN_LOGIC - 1);
static const int	SERVO_ALL_ABS_MAX_PREASSIGNED_IN	= (SERVO_ALL_ABS_IN_PREASSIGN_ORIGIN);

static const int	SERVO_ALL_ABS_OUT_LOGIC_CNT			= (MAX_SERVO_ALL_ABS_OUT_LOGIC - 1);
static const int	SERVO_ALL_ABS_MAX_PREASSIGNED_OUT	= (SERVO_ALL_ABS_OUT_PREASSIGN_COMP);

//------------------------------------------------------------------
//                 Parameters Defines.
//------------------------------------------------------------------

typedef enum
{
	SERVO_ALL_ABS_PULSEPERREVOLUTION = 0,
	SERVO_ALL_ABS_AXISMAXSPEED,
	SERVO_ALL_ABS_AXISSTARTSPEED,
	SERVO_ALL_ABS_AXISACCTIME,
	SERVO_ALL_ABS_AXISDECTIME,

	SERVO_ALL_ABS_SPEEDOVERRIDE,
	SERVO_ALL_ABS_JOGHIGHSPEED,
	SERVO_ALL_ABS_JOGLOWSPEED,
	SERVO_ALL_ABS_JOGACCDECTIME,

	SERVO_ALL_ABS_SERVOALARMLOGIC,
	SERVO_ALL_ABS_SERVOONLOGIC,
	SERVO_ALL_ABS_SERVORESETLOGIC,

	SERVO_ALL_ABS_SWLMTPLUSVALUE,
	SERVO_ALL_ABS_SWLMTMINUSVALUE,
	SERVO_ALL_ABS_SOFTLMTSTOPMETHOD,
	SERVO_ALL_ABS_HARDLMTSTOPMETHOD,
	SERVO_ALL_ABS_LIMITSENSORLOGIC,

	SERVO_ALL_ABS_ORGSPEED,
	SERVO_ALL_ABS_ORGSEARCHSPEED,
	SERVO_ALL_ABS_ORGACCDECTIME,
	SERVO_ALL_ABS_ORGMETHOD,
	SERVO_ALL_ABS_ORGDIR,
	SERVO_ALL_ABS_ORGOFFSET,
	SERVO_ALL_ABS_ORGPOSITIONSET,
	SERVO_ALL_ABS_ORGSENSORLOGIC,

	SERVO_ALL_ABS_POSITIONLOOPGAIN,
	SERVO_ALL_ABS_INPOSITIONVALUE,
	SERVO_ALL_ABS_POSTRACKINGLIMIT,
	SERVO_ALL_ABS_MOTIONDIR,

	SERVO_ALL_ABS_LIMITSENSORDIR,
	SERVO_ALL_ABS_ORGTORQUERATIO,

	SERVO_ALL_ABS_POSERROVERFLOWLIMIT,

	MAX_SERVO_ALL_ABS_PARAM

} FM_EZISERVO_ALL_ABS_PARAM;

//------------------------------------------------------------------
//                 POSITION TABLE Defines.
//------------------------------------------------------------------

#define SERVO_ALL_ABS_MAX_ITEM_COUNT		64

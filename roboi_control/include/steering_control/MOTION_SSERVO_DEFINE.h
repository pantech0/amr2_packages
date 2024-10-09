#pragma once
#include "MOTION_DEFINE.h"

//------------------------------------------------------------------
//                 Device Type Defines.
//------------------------------------------------------------------
#ifndef DEVTYPE_S_SERVO_PLUS_R_ST
#define	DEVTYPE_S_SERVO_PLUS_R_ST				102
#define DEVNAME_S_SERVO_PLUS_R_ST				"S-SERVO Plus-R-ST"
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
} SSERVO_AXISSTATUS;

//------------------------------------------------------------------
//                 Input/Output Defines.
//------------------------------------------------------------------

// Input Bit-mask list.
static const unsigned int	SSERVO_IN_BITMASK_LIMITP		= 0x00000001;
static const unsigned int	SSERVO_IN_BITMASK_LIMITN		= 0x00000002;
static const unsigned int	SSERVO_IN_BITMASK_ORIGIN		= 0x00000004;
static const unsigned int	SSERVO_IN_BITMASK_CLEARPOSITION	= 0x00000008;
static const unsigned int	SSERVO_IN_BITMASK_PTA0			= 0x00000010;
static const unsigned int	SSERVO_IN_BITMASK_PTA1			= 0x00000020;
static const unsigned int	SSERVO_IN_BITMASK_PTA2			= 0x00000040;
static const unsigned int	SSERVO_IN_BITMASK_PTA3			= 0x00000080;
static const unsigned int	SSERVO_IN_BITMASK_PTA4			= 0x00000100;
static const unsigned int	SSERVO_IN_BITMASK_PTA5			= 0x00000200;
static const unsigned int	SSERVO_IN_BITMASK_PTA6			= 0x00000400;
static const unsigned int	SSERVO_IN_BITMASK_PTA7			= 0x00000800;
static const unsigned int	SSERVO_IN_BITMASK_PTSTART		= 0x00001000;
static const unsigned int	SSERVO_IN_BITMASK_STOP			= 0x00002000;
static const unsigned int	SSERVO_IN_BITMASK_PJOG			= 0x00004000;
static const unsigned int	SSERVO_IN_BITMASK_NJOG			= 0x00008000;
static const unsigned int	SSERVO_IN_BITMASK_ALARMRESET	= 0x00010000;
static const unsigned int	SSERVO_IN_BITMASK_SERVOON		= 0x00020000;
static const unsigned int	SSERVO_IN_BITMASK_PAUSE			= 0x00040000;
static const unsigned int	SSERVO_IN_BITMASK_ORIGINSEARCH	= 0x00080000;
static const unsigned int	SSERVO_IN_BITMASK_TEACHING		= 0x00100000;
static const unsigned int	SSERVO_IN_BITMASK_ESTOP			= 0x00200000;
static const unsigned int	SSERVO_IN_BITMASK_JPTIN0		= 0x00400000;
static const unsigned int	SSERVO_IN_BITMASK_JPTIN1		= 0x00800000;
static const unsigned int	SSERVO_IN_BITMASK_JPTIN2		= 0x01000000;
static const unsigned int	SSERVO_IN_BITMASK_JPTSTART		= 0x02000000;
static const unsigned int	SSERVO_IN_BITMASK_USERIN0		= 0x04000000;
static const unsigned int	SSERVO_IN_BITMASK_USERIN1		= 0x08000000;
static const unsigned int	SSERVO_IN_BITMASK_USERIN2		= 0x10000000;
static const unsigned int	SSERVO_IN_BITMASK_USERIN3		= 0x20000000;
static const unsigned int	SSERVO_IN_BITMASK_USERIN4		= 0x40000000;
static const unsigned int	SSERVO_IN_BITMASK_USERIN5		= 0x80000000;
static const unsigned int	SSERVO_IN_BITMASK_USERIN6		= 0x00000200;
static const unsigned int	SSERVO_IN_BITMASK_USERIN7		= 0x00000400;
static const unsigned int	SSERVO_IN_BITMASK_USERIN8		= 0x00000800;

// Output Bit-mask list.
static const unsigned int	SSERVO_OUT_BITMASK_COMPAREOUT	= 0x00000001;
static const unsigned int	SSERVO_OUT_BITMASK_INPOSITION	= 0x00000002;
static const unsigned int	SSERVO_OUT_BITMASK_ALARM		= 0x00000004;
static const unsigned int	SSERVO_OUT_BITMASK_MOVING		= 0x00000008;
static const unsigned int	SSERVO_OUT_BITMASK_ACCDEC		= 0x00000010;
static const unsigned int	SSERVO_OUT_BITMASK_ACK			= 0x00000020;
static const unsigned int	SSERVO_OUT_BITMASK_END			= 0x00000040;
static const unsigned int	SSERVO_OUT_BITMASK_PUSHDETECT	= 0x00000080;
static const unsigned int	SSERVO_OUT_BITMASK_ORGSEARCHOK	= 0x00000100;
static const unsigned int	SSERVO_OUT_BITMASK_SERVOREADY	= 0x00000200;
//static const unsigned int	SSERVO_OUT_BITMASK_RESERVED	= 0x00000400;
static const unsigned int	SSERVO_OUT_BITMASK_BRAKE		= 0x00000800;
static const unsigned int	SSERVO_OUT_BITMASK_PTOUT0		= 0x00001000;
static const unsigned int	SSERVO_OUT_BITMASK_PTOUT1		= 0x00002000;
static const unsigned int	SSERVO_OUT_BITMASK_PTOUT2		= 0x00004000;
static const unsigned int	SSERVO_OUT_BITMASK_USEROUT0		= 0x00008000;
static const unsigned int	SSERVO_OUT_BITMASK_USEROUT1		= 0x00010000;
static const unsigned int	SSERVO_OUT_BITMASK_USEROUT2		= 0x00020000;
static const unsigned int	SSERVO_OUT_BITMASK_USEROUT3		= 0x00040000;
static const unsigned int	SSERVO_OUT_BITMASK_USEROUT4		= 0x00080000;
static const unsigned int	SSERVO_OUT_BITMASK_USEROUT5		= 0x00100000;
static const unsigned int	SSERVO_OUT_BITMASK_USEROUT6		= 0x00200000;
static const unsigned int	SSERVO_OUT_BITMASK_USEROUT7		= 0x00400000;
static const unsigned int	SSERVO_OUT_BITMASK_USEROUT8		= 0x00800000;

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
		unsigned BIT_PAUSE			: 1;
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
} SSERVO_INLOGIC;

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
		unsigned BIT_PUSHDETECT		: 1;
		unsigned BIT_ORGSEARCHOK	: 1;
		unsigned BIT_SERVOREADY		: 1;
		unsigned BIT_RESERVED0		: 1;
		unsigned BIT_BRAKE			: 1;
		unsigned BIT_PTOUT0			: 1;
		unsigned BIT_PTOUT1			: 1;
		unsigned BIT_PTOUT2			: 1;
		unsigned BIT_USEROUT0		: 1;
		unsigned BIT_USEROUT1		: 1;
		unsigned BIT_USEROUT2		: 1;
		unsigned BIT_USEROUT3		: 1;
		unsigned BIT_USEROUT4		: 1;
		unsigned BIT_USEROUT5		: 1;
		unsigned BIT_USEROUT6		: 1;
		unsigned BIT_USEROUT7		: 1;
		unsigned BIT_USEROUT8		: 1;
	};

} SSERVO_OUTLOGIC;

//------------------------------------------------------------------
//                 Input/Output Assigning Defines.
//------------------------------------------------------------------

typedef enum
{
	SSERVO_IN_PREASSIGN_LIMITP = 1,
	SSERVO_IN_PREASSIGN_LIMITN,
	SSERVO_IN_PREASSIGN_ORIGIN,

	SSERVO_IN_LOGIC_CLEARPOSITION,
	SSERVO_IN_LOGIC_PTA0,
	SSERVO_IN_LOGIC_PTA1,
	SSERVO_IN_LOGIC_PTA2,
	SSERVO_IN_LOGIC_PTA3,
	SSERVO_IN_LOGIC_PTA4,
	SSERVO_IN_LOGIC_PTA5,
	SSERVO_IN_LOGIC_PTA6,
	SSERVO_IN_LOGIC_PTA7,
	SSERVO_IN_LOGIC_PTSTART,
	SSERVO_IN_LOGIC_STOP,
	SSERVO_IN_LOGIC_PJOG,
	SSERVO_IN_LOGIC_NJOG,
	SSERVO_IN_LOGIC_ALARMRESET,
	SSERVO_IN_LOGIC_SERVOON,
	SSERVO_IN_LOGIC_PAUSE,
	SSERVO_IN_LOGIC_ORIGINSEARCH,
	SSERVO_IN_LOGIC_TEACHING,
	SSERVO_IN_LOGIC_ESTOP,
	SSERVO_IN_LOGIC_JPTIN0,
	SSERVO_IN_LOGIC_JPTIN1,
	SSERVO_IN_LOGIC_JPTIN2,
	SSERVO_IN_LOGIC_JPTSTART,
	SSERVO_IN_LOGIC_USERIN0,
	SSERVO_IN_LOGIC_USERIN1,
	SSERVO_IN_LOGIC_USERIN2,
	SSERVO_IN_LOGIC_USERIN3,
	SSERVO_IN_LOGIC_USERIN4,
	SSERVO_IN_LOGIC_USERIN5,

	MAX_SSERVO_IN_LOGIC
} SSERVO_INLOGIC_LIST;

typedef enum
{
	SSERVO_OUT_PREASSIGN_COMP = 1,

	SSERVO_OUT_LOGIC_INPOSITION,
	SSERVO_OUT_LOGIC_ALARM,
	SSERVO_OUT_LOGIC_MOVING,
	SSERVO_OUT_LOGIC_ACCDEC,
	SSERVO_OUT_LOGIC_ACK,
	SSERVO_OUT_LOGIC_END,
	SSERVO_OUT_LOGIC_PUSHDETECT,
	SSERVO_OUT_LOGIC_ORGSEARCHOK,
	SSERVO_OUT_LOGIC_SERVOREADY,
	SSERVO_OUT_LOGIC_RESERVED0,
	SSERVO_OUT_LOGIC_BRAKE,
	SSERVO_OUT_LOGIC_PTOUT0,
	SSERVO_OUT_LOGIC_PTOUT1,
	SSERVO_OUT_LOGIC_PTOUT2,
	SSERVO_OUT_LOGIC_USEROUT0,
	SSERVO_OUT_LOGIC_USEROUT1,
	SSERVO_OUT_LOGIC_USEROUT2,
	SSERVO_OUT_LOGIC_USEROUT3,
	SSERVO_OUT_LOGIC_USEROUT4,
	SSERVO_OUT_LOGIC_USEROUT5,
	SSERVO_OUT_LOGIC_USEROUT6,
	SSERVO_OUT_LOGIC_USEROUT7,
	SSERVO_OUT_LOGIC_USEROUT8,

	MAX_SSERVO_OUT_LOGIC
} SSERVO_OUTLOGIC_LIST;

static const int	SSERVO_IN_PIN_CNT	= 12;
static const int	SSERVO_OUT_PIN_CNT	= 10;

static const int	SSERVO_IN_LOGIC_CNT			= (MAX_SSERVO_IN_LOGIC - 1);
static const int	SSERVO_MAX_PREASSIGNED_IN	= (SSERVO_IN_PREASSIGN_ORIGIN);

static const int	SSERVO_OUT_LOGIC_CNT			= (MAX_SSERVO_OUT_LOGIC - 1);
static const int	SSERVO_MAX_PREASSIGNED_OUT	= (SSERVO_OUT_PREASSIGN_COMP);

//------------------------------------------------------------------
//                 Parameters Defines.
//------------------------------------------------------------------

typedef enum
{
	SSERVO_PULSEPERREVOLUTION = 0,
	SSERVO_AXISMAXSPEED,
	SSERVO_AXISSTARTSPEED,
	SSERVO_AXISACCTIME,
	SSERVO_AXISDECTIME,

	SSERVO_SPEEDOVERRIDE,
	SSERVO_JOGHIGHSPEED,
	SSERVO_JOGLOWSPEED,
	SSERVO_JOGACCDECTIME,

	SSERVO_SWLMTPLUSVALUE,
	SSERVO_SWLMTMINUSVALUE,
	SSERVO_SOFTLMTSTOPMETHOD,
	SSERVO_HARDLMTSTOPMETHOD,
	SSERVO_LIMITSENSORLOGIC,

	SSERVO_ORGSPEED,
	SSERVO_ORGSEARCHSPEED,
	SSERVO_ORGACCDECTIME,
	SSERVO_ORGMETHOD,
	SSERVO_ORGDIR,
	SSERVO_ORGOFFSET,
	SSERVO_ORGPOSITIONSET,
	SSERVO_ORGSENSORLOGIC,

	SSERVO_POSITIONLOOPGAIN,
	SSERVO_INPOSITIONVALUE,
	SSERVO_POSTRACKINGLIMIT,
	SSERVO_MOTIONDIR,

	SSERVO_LIMITSENSORDIR,
	SSERVO_ORGTORQUERATIO,

	SSERVO_POSERROVERFLOWLIMIT,
	SSERVO_BRAKEDELAYTIME,

	SSERVO_RUNCURRENT,
	SSERVO_BOOSTCURRENT,
	SSERVO_STOPCURRENT,

	MAX_SSERVO_PARAM

} FM_SSERVO_PARAM;

//------------------------------------------------------------------
//                 POSITION TABLE Defines.
//------------------------------------------------------------------

#define SSERVO_MAX_ITEM_COUNT		256

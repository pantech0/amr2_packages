//////////////////////////////////////////////////////////////////////////
//
//	File:			MOTION_EziSTEP2_DEFINE.h
//	Last Modified Date:	24.07.18
//	Last Modified Ver:	1.0.1
//
//////////////////////////////////////////////////////////////////////////

#pragma once
#include "MOTION_DEFINE.h"

//------------------------------------------------------------------
//                 Device Type Defines.
//------------------------------------------------------------------
#ifndef DEVTYPE_EZI_STEP2_PLUS_R_ST
#define	DEVTYPE_EZI_STEP2_PLUS_R_ST			130
#define DEVNAME_EZI_STEP2_PLUS_R_ST			"Ezi-STEP II Plus-R-ST"
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
		unsigned	FFLAG_RESERVED2			: 1; // = 0x00000080;
		unsigned	FFLAG_ERROVERCURRENT	: 1; // = 0x00000100;
		unsigned	FFLAG_ERROVERSPEED		: 1; // = 0x00000200;
		unsigned	FFLAG_RESERVED3			: 1; // = 0x00000400;
		unsigned	FFLAG_RESERVED4			: 1; // = 0x00000800;
		unsigned	FFLAG_ERROVERHEAT		: 1; // = 0x00001000;
		unsigned	FFLAG_ERRBACKEMF		: 1; // = 0x00002000;
		unsigned	FFLAG_ERRMOTORPOWER		: 1; // = 0x00004000;
		unsigned	FFLAG_RESERVED5			: 1; // = 0x00008000;
		unsigned	FFLAG_EMGSTOP			: 1; // = 0x00010000;
		unsigned	FFLAG_SLOWSTOP			: 1; // = 0x00020000;
		unsigned	FFLAG_ORIGINRETURNING	: 1; // = 0x00040000;
		unsigned	FFLAG_RUNSTOP			: 1; // = 0x00080000;
		unsigned	FFLAG_STEPON			: 1; // = 0x00100000;
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
} EZISTEP2_AXISSTATUS;

//------------------------------------------------------------------
//                 Input/Output Defines.
//------------------------------------------------------------------

// Input Bit-mask list.
static const unsigned int	STEP2_IN_BITMASK_LIMITP			= 0x00000001;
static const unsigned int	STEP2_IN_BITMASK_LIMITN			= 0x00000002;
static const unsigned int	STEP2_IN_BITMASK_ORIGIN			= 0x00000004;
static const unsigned int	STEP2_IN_BITMASK_CLEARPOSITION	= 0x00000008;
static const unsigned int	STEP2_IN_BITMASK_PTA0			= 0x00000010;
static const unsigned int	STEP2_IN_BITMASK_PTA1			= 0x00000020;
static const unsigned int	STEP2_IN_BITMASK_PTA2			= 0x00000040;
static const unsigned int	STEP2_IN_BITMASK_PTA3			= 0x00000080;
static const unsigned int	STEP2_IN_BITMASK_PTA4			= 0x00000100;
static const unsigned int	STEP2_IN_BITMASK_PTA5			= 0x00000200;
static const unsigned int	STEP2_IN_BITMASK_PTA6			= 0x00000400;
static const unsigned int	STEP2_IN_BITMASK_PTA7			= 0x00000800;
static const unsigned int	STEP2_IN_BITMASK_PTSTART		= 0x00001000;
static const unsigned int	STEP2_IN_BITMASK_STOP			= 0x00002000;
static const unsigned int	STEP2_IN_BITMASK_PJOG			= 0x00004000;
static const unsigned int	STEP2_IN_BITMASK_NJOG			= 0x00008000;
static const unsigned int	STEP2_IN_BITMASK_ALARMRESET		= 0x00010000;
//static const unsigned int	STEP2_IN_BITMASK_RESERVED	= 0x00020000;
static const unsigned int	STEP2_IN_BITMASK_PAUSE			= 0x00040000;
static const unsigned int	STEP2_IN_BITMASK_ORIGINSEARCH	= 0x00080000;
static const unsigned int	STEP2_IN_BITMASK_TEACHING		= 0x00100000;
static const unsigned int	STEP2_IN_BITMASK_ESTOP			= 0x00200000;
static const unsigned int	STEP2_IN_BITMASK_JPTIN0			= 0x00400000;
static const unsigned int	STEP2_IN_BITMASK_JPTIN1			= 0x00800000;
static const unsigned int	STEP2_IN_BITMASK_JPTIN2			= 0x01000000;
static const unsigned int	STEP2_IN_BITMASK_JPTSTART		= 0x02000000;
static const unsigned int	STEP2_IN_BITMASK_USERIN0		= 0x04000000;
static const unsigned int	STEP2_IN_BITMASK_USERIN1		= 0x08000000;
static const unsigned int	STEP2_IN_BITMASK_USERIN2		= 0x10000000;
static const unsigned int	STEP2_IN_BITMASK_USERIN3		= 0x20000000;
static const unsigned int	STEP2_IN_BITMASK_USERIN4		= 0x40000000;
static const unsigned int	STEP2_IN_BITMASK_USERIN5		= 0x80000000;
static const unsigned int	STEP2_IN_BITMASK_USERIN6		= 0x00000200;
static const unsigned int	STEP2_IN_BITMASK_USERIN7		= 0x00000400;
static const unsigned int	STEP2_IN_BITMASK_USERIN8		= 0x00000800;

// Output Bit-mask list.
static const unsigned int	STEP2_OUT_BITMASK_COMPAREOUT	= 0x00000001;
//static const unsigned int	STEP2_OUT_BITMASK_RESERVED	= 0x00000002;
static const unsigned int	STEP2_OUT_BITMASK_ALARM			= 0x00000004;
static const unsigned int	STEP2_OUT_BITMASK_RUNSTOP		= 0x00000008;
static const unsigned int	STEP2_OUT_BITMASK_ACCDEC		= 0x00000010;
static const unsigned int	STEP2_OUT_BITMASK_ACK			= 0x00000020;
static const unsigned int	STEP2_OUT_BITMASK_END			= 0x00000040;
//static const unsigned int	STEP2_OUT_BITMASK_RESERVED	= 0x00000080;
static const unsigned int	STEP2_OUT_BITMASK_ORGSEARCHOK	= 0x00000100;
static const unsigned int	STEP2_OUT_BITMASK_STEPREADY		= 0x00000200;
//static const unsigned int	STEP2_OUT_BITMASK_RESERVED	= 0x00000400;
static const unsigned int	STEP2_OUT_BITMASK_BRAKE			= 0x00000800;
static const unsigned int	STEP2_OUT_BITMASK_PTOUT0		= 0x00001000;
static const unsigned int	STEP2_OUT_BITMASK_PTOUT1		= 0x00002000;
static const unsigned int	STEP2_OUT_BITMASK_PTOUT2		= 0x00004000;
static const unsigned int	STEP2_OUT_BITMASK_USEROUT0		= 0x00008000;
static const unsigned int	STEP2_OUT_BITMASK_USEROUT1		= 0x00010000;
static const unsigned int	STEP2_OUT_BITMASK_USEROUT2		= 0x00020000;
static const unsigned int	STEP2_OUT_BITMASK_USEROUT3		= 0x00040000;
static const unsigned int	STEP2_OUT_BITMASK_USEROUT4		= 0x00080000;
static const unsigned int	STEP2_OUT_BITMASK_USEROUT5		= 0x00100000;
static const unsigned int	STEP2_OUT_BITMASK_USEROUT6		= 0x00200000;
static const unsigned int	STEP2_OUT_BITMASK_USEROUT7		= 0x00400000;
static const unsigned int	STEP2_OUT_BITMASK_USEROUT8		= 0x00800000;

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
		unsigned BIT_RESERVED0		: 1;
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
} EZISTEP2_INLOGIC;

typedef union
{
	unsigned int dwValue;
	struct
	{
		unsigned BIT_COMP			: 1;
		unsigned BIT_RESERVED0		: 1;
		unsigned BIT_ALARM			: 1;
		unsigned BIT_RUNSTOP		: 1;
		unsigned BIT_ACCDEC			: 1;
		unsigned BIT_ACK			: 1;
		unsigned BIT_END			: 1;
		unsigned BIT_RESERVED1		: 1;
		unsigned BIT_ORGSEARCHOK	: 1;
		unsigned BIT_STEPREADY		: 1;
		unsigned BIT_RESERVED3		: 1;
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

} EZISTEP2_OUTLOGIC;

//------------------------------------------------------------------
//                 Input/Output Assigning Defines.
//------------------------------------------------------------------

typedef enum
{
	STEP2_IN_PREASSIGN_LIMITP = 1,
	STEP2_IN_PREASSIGN_LIMITN,
	STEP2_IN_PREASSIGN_ORIGIN,

	STEP2_IN_LOGIC_CLEARPOSITION,
	STEP2_IN_LOGIC_PTA0,
	STEP2_IN_LOGIC_PTA1,
	STEP2_IN_LOGIC_PTA2,
	STEP2_IN_LOGIC_PTA3,
	STEP2_IN_LOGIC_PTA4,
	STEP2_IN_LOGIC_PTA5,
	STEP2_IN_LOGIC_PTA6,
	STEP2_IN_LOGIC_PTA7,
	STEP2_IN_LOGIC_PTSTART,
	STEP2_IN_LOGIC_STOP,
	STEP2_IN_LOGIC_PJOG,
	STEP2_IN_LOGIC_NJOG,
	STEP2_IN_LOGIC_ALARMRESET,
	STEP2_IN_LOGIC_RESERVED0,
	STEP2_IN_LOGIC_PAUSE,
	STEP2_IN_LOGIC_ORIGINSEARCH,
	STEP2_IN_LOGIC_TEACHING,
	STEP2_IN_LOGIC_ESTOP,
	STEP2_IN_LOGIC_JPTIN0,
	STEP2_IN_LOGIC_JPTIN1,
	STEP2_IN_LOGIC_JPTIN2,
	STEP2_IN_LOGIC_JPTSTART,
	STEP2_IN_LOGIC_USERIN0,
	STEP2_IN_LOGIC_USERIN1,
	STEP2_IN_LOGIC_USERIN2,
	STEP2_IN_LOGIC_USERIN3,
	STEP2_IN_LOGIC_USERIN4,
	STEP2_IN_LOGIC_USERIN5,

	MAX_STEP2_IN_LOGIC
} EZISTEP2_INLOGIC_LIST;

typedef enum
{
	STEP2_OUT_PREASSIGN_COMP = 1,

	STEP2_OUT_LOGIC_RESERVED0,
	STEP2_OUT_LOGIC_ALARM,
	STEP2_OUT_LOGIC_RUNSTOP,
	STEP2_OUT_LOGIC_ACCDEC,
	STEP2_OUT_LOGIC_ACK,
	STEP2_OUT_LOGIC_END,
	STEP2_OUT_LOGIC_RESERVED1,
	STEP2_OUT_LOGIC_ORGSEARCHOK,
	STEP2_OUT_LOGIC_STEPREADY,
	STEP2_OUT_LOGIC_RESERVED3,
	STEP2_OUT_LOGIC_BRAKE,
	STEP2_OUT_LOGIC_PTOUT0,
	STEP2_OUT_LOGIC_PTOUT1,
	STEP2_OUT_LOGIC_PTOUT2,
	STEP2_OUT_LOGIC_USEROUT0,
	STEP2_OUT_LOGIC_USEROUT1,
	STEP2_OUT_LOGIC_USEROUT2,
	STEP2_OUT_LOGIC_USEROUT3,
	STEP2_OUT_LOGIC_USEROUT4,
	STEP2_OUT_LOGIC_USEROUT5,
	STEP2_OUT_LOGIC_USEROUT6,
	STEP2_OUT_LOGIC_USEROUT7,
	STEP2_OUT_LOGIC_USEROUT8,

	MAX_STEP2_OUT_LOGIC
} EZISTEP2_OUTLOGIC_LIST;

static const int	STEP2_IN_PIN_CNT	= 12;
static const int	STEP2_OUT_PIN_CNT	= 10;

static const int	STEP2_IN_LOGIC_CNT			= (MAX_STEP2_IN_LOGIC - 1);
static const int	STEP2_MAX_PREASSIGNED_IN	= (STEP2_IN_PREASSIGN_ORIGIN);

static const int	STEP2_OUT_LOGIC_CNT			= (MAX_STEP2_OUT_LOGIC - 1);
static const int	STEP2_MAX_PREASSIGNED_OUT	= (STEP2_OUT_PREASSIGN_COMP);

//------------------------------------------------------------------
//                 Parameters Defines.
//------------------------------------------------------------------

typedef enum
{
	STEP2_PULSEPERREVOLUTION = 0,
	STEP2_AXISMAXSPEED,
	STEP2_AXISSTARTSPEED,
	STEP2_AXISACCTIME,
	STEP2_AXISDECTIME,

	STEP2_SPEEDOVERRIDE,
	STEP2_JOGHIGHSPEED,
	STEP2_JOGLOWSPEED,
	STEP2_JOGACCDECTIME,

	STEP2_SWLMTPLUSVALUE,
	STEP2_SWLMTMINUSVALUE,
	STEP2_SOFTLMTSTOPMETHOD,
	STEP2_HARDLMTSTOPMETHOD,
	STEP2_LIMITSENSORLOGIC,

	STEP2_ORGSPEED,
	STEP2_ORGSEARCHSPEED,
	STEP2_ORGACCDECTIME,
	STEP2_ORGMETHOD,
	STEP2_ORGDIR,
	STEP2_ORGOFFSET,
	STEP2_ORGPOSITIONSET,
	STEP2_ORGSENSORLOGIC,

	STEP2_MOTIONDIR,
	STEP2_LIMITSENSORDIR,
	STEP2_BRAKEDELAYTIME,

	STEP2_RUNCURRENT,
	STEP2_BOOSTCURRENT,
	STEP2_STOPCURRENT,

	STEP2_ENCODERMULTIPLY,
	STEP2_ENCODERDIR,

	MAX_STEP2_PARAM

} FM_EZISTEP2_PARAM;

//------------------------------------------------------------------
//                 POSITION TABLE Defines.
//------------------------------------------------------------------

#define STEP2_MAX_ITEM_COUNT		256

//////////////////////////////////////////////////////////////////////////
//
//	File:			MOTION_EziSTEP_mini_DEFINE.h
//	Last Modified Date:	24.07.18
//	Last Modified Ver:	1.0.1
//
//////////////////////////////////////////////////////////////////////////

#pragma once
#include "MOTION_DEFINE.h"

//------------------------------------------------------------------
//                 Device Type Defines.
//------------------------------------------------------------------
#ifndef DEVTYPE_EZI_STEP_PLUS_R_MINI
#define	DEVTYPE_EZI_STEP_PLUS_R_MINI			60
#define DEVNAME_EZI_STEP_PLUS_R_MINI			"Ezi-STEP Plus-R-Mini"
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
		unsigned	FFLAG_ERRSTEPALARM		: 1; // = 0x00000080;
		unsigned	FFLAG_ERROVERCURRENT	: 1; // = 0x00000100;
		unsigned	FFLAG_ERROVERSPEED		: 1; // = 0x00000200;
		unsigned	FFLAG_ERRSTEPOUT		: 1; // = 0x00000400;
		unsigned	FFLAG_RESERVED2			: 1; // = 0x00000800;
		unsigned	FFLAG_ERROVERHEAT		: 1; // = 0x00001000;
		unsigned	FFLAG_ERRBACKEMF		: 1; // = 0x00002000;
		unsigned	FFLAG_ERRMOTORPOWER		: 1; // = 0x00004000;
		unsigned	FFLAG_ERRLOWPOWER		: 1; // = 0x00008000;
		unsigned	FFLAG_EMGSTOP			: 1; // = 0x00010000;
		unsigned	FFLAG_SLOWSTOP			: 1; // = 0x00020000;
		unsigned	FFLAG_ORIGINRETURNING	: 1; // = 0x00040000;
		unsigned	FFLAG_RESERVED3			: 1; // = 0x00080000;
		unsigned	FFLAG_RESERVED4			: 1; // = 0x00100000;
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
} EZISTEP_MINI_AXISSTATUS;

//------------------------------------------------------------------
//                 Input/Output Defines.
//------------------------------------------------------------------

// Input Bit-mask list.
static const unsigned int	STEP_MINI_IN_BITMASK_LIMITP			= 0x00000001;
static const unsigned int	STEP_MINI_IN_BITMASK_LIMITN			= 0x00000002;
static const unsigned int	STEP_MINI_IN_BITMASK_ORIGIN			= 0x00000004;
static const unsigned int	STEP_MINI_IN_BITMASK_CLEARPOSITION	= 0x00000008;
static const unsigned int	STEP_MINI_IN_BITMASK_PTA0			= 0x00000010;
static const unsigned int	STEP_MINI_IN_BITMASK_PTA1			= 0x00000020;
static const unsigned int	STEP_MINI_IN_BITMASK_PTA2			= 0x00000040;
static const unsigned int	STEP_MINI_IN_BITMASK_PTA3			= 0x00000080;
static const unsigned int	STEP_MINI_IN_BITMASK_PTA4			= 0x00000100;
static const unsigned int	STEP_MINI_IN_BITMASK_PTA5			= 0x00000200;
//static const unsigned int	STEP_MINI_IN_BITMASK_RESERVED	= 0x00000400;
//static const unsigned int	STEP_MINI_IN_BITMASK_RESERVED	= 0x00000800;
static const unsigned int	STEP_MINI_IN_BITMASK_PTSTART		= 0x00001000;
static const unsigned int	STEP_MINI_IN_BITMASK_STOP			= 0x00002000;
static const unsigned int	STEP_MINI_IN_BITMASK_PJOG			= 0x00004000;
static const unsigned int	STEP_MINI_IN_BITMASK_NJOG			= 0x00008000;
static const unsigned int	STEP_MINI_IN_BITMASK_ALARMRESET		= 0x00010000;
//static const unsigned int	STEP_MINI_IN_BITMASK_RESERVED	= 0x00020000;
static const unsigned int	STEP_MINI_IN_BITMASK_PAUSE			= 0x00040000;
static const unsigned int	STEP_MINI_IN_BITMASK_ORIGINSEARCH	= 0x00080000;
static const unsigned int	STEP_MINI_IN_BITMASK_TEACHING		= 0x00100000;
static const unsigned int	STEP_MINI_IN_BITMASK_ESTOP			= 0x00200000;
static const unsigned int	STEP_MINI_IN_BITMASK_JPTIN0			= 0x00400000;
static const unsigned int	STEP_MINI_IN_BITMASK_JPTIN1			= 0x00800000;
static const unsigned int	STEP_MINI_IN_BITMASK_JPTIN2			= 0x01000000;
static const unsigned int	STEP_MINI_IN_BITMASK_JPTSTART		= 0x02000000;
static const unsigned int	STEP_MINI_IN_BITMASK_USERIN0		= 0x04000000;
static const unsigned int	STEP_MINI_IN_BITMASK_USERIN1		= 0x08000000;
static const unsigned int	STEP_MINI_IN_BITMASK_USERIN2		= 0x10000000;
static const unsigned int	STEP_MINI_IN_BITMASK_USERIN3		= 0x20000000;
static const unsigned int	STEP_MINI_IN_BITMASK_USERIN4		= 0x40000000;
static const unsigned int	STEP_MINI_IN_BITMASK_USERIN5		= 0x80000000;
static const unsigned int	STEP_MINI_IN_BITMASK_USERIN6		= 0x00000200;

// Output Bit-mask list.
static const unsigned int	STEP_MINI_OUT_BITMASK_COMPAREOUT	= 0x00000001;
//static const unsigned int	STEP_MINI_OUT_BITMASK_RESERVED	= 0x00000002;
static const unsigned int	STEP_MINI_OUT_BITMASK_ALARM			= 0x00000004;
static const unsigned int	STEP_MINI_OUT_BITMASK_RUNSTOP		= 0x00000008;
static const unsigned int	STEP_MINI_OUT_BITMASK_ACCDEC		= 0x00000010;
static const unsigned int	STEP_MINI_OUT_BITMASK_ACK			= 0x00000020;
static const unsigned int	STEP_MINI_OUT_BITMASK_END			= 0x00000040;
static const unsigned int	STEP_MINI_OUT_BITMASK_ALARMBLINK	= 0x00000080;
static const unsigned int	STEP_MINI_OUT_BITMASK_ORGSEARCHOK	= 0x00000100;
//static const unsigned int	STEP_MINI_OUT_BITMASK_RESERVED	= 0x00000200;
//static const unsigned int	STEP_MINI_OUT_BITMASK_RESERVED	= 0x00000400;
static const unsigned int	STEP_MINI_OUT_BITMASK_BRAKE			= 0x00000800;
static const unsigned int	STEP_MINI_OUT_BITMASK_PTOUT0		= 0x00001000;
static const unsigned int	STEP_MINI_OUT_BITMASK_PTOUT1		= 0x00002000;
static const unsigned int	STEP_MINI_OUT_BITMASK_PTOUT2		= 0x00004000;
static const unsigned int	STEP_MINI_OUT_BITMASK_USEROUT0		= 0x00008000;
//static const unsigned int	STEP_MINI_OUT_BITMASK_RESERVED	= 0x00010000;
//static const unsigned int	STEP_MINI_OUT_BITMASK_RESERVED	= 0x00020000;
//static const unsigned int	STEP_MINI_OUT_BITMASK_RESERVED	= 0x00040000;
//static const unsigned int	STEP_MINI_OUT_BITMASK_RESERVED	= 0x00080000;
//static const unsigned int	STEP_MINI_OUT_BITMASK_RESERVED	= 0x00100000;
//static const unsigned int	STEP_MINI_OUT_BITMASK_RESERVED	= 0x00200000;
//static const unsigned int	STEP_MINI_OUT_BITMASK_RESERVED	= 0x00400000;
//static const unsigned int	STEP_MINI_OUT_BITMASK_RESERVED	= 0x00800000;

typedef union
{
	unsigned int dwValue;
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
		unsigned BIT_RESERVED2		: 1;
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
} EZISTEP_MINI_INLOGIC;

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
		unsigned BIT_ALARMBLINK		: 1;
		unsigned BIT_ORGSEARCHOK	: 1;
		unsigned BIT_RESERVED1		: 1;
		unsigned BIT_RESERVED2		: 1;
		unsigned BIT_BRAKE			: 1;
		unsigned BIT_PTOUT0			: 1;
		unsigned BIT_PTOUT1			: 1;
		unsigned BIT_PTOUT2			: 1;
		unsigned BIT_USEROUT0		: 1;
		unsigned BIT_RESERVED3		: 1;
		unsigned BIT_RESERVED4		: 1;
		unsigned BIT_RESERVED5		: 1;
		unsigned BIT_RESERVED6		: 1;
		unsigned BIT_RESERVED7		: 1;
		unsigned BIT_RESERVED8		: 1;
		unsigned BIT_RESERVED9		: 1;
		unsigned BIT_RESERVED10		: 1;
	};
} EZISTEP_MINI_OUTLOGIC;

//------------------------------------------------------------------
//                 Input/Output Assigning Defines.
//------------------------------------------------------------------

typedef enum
{
	STEP_MINI_IN_PREASSIGN_LIMITP = 1,
	STEP_MINI_IN_PREASSIGN_LIMITN,
	STEP_MINI_IN_PREASSIGN_ORIGIN,

	STEP_MINI_IN_LOGIC_CLEARPOSITION,
	STEP_MINI_IN_LOGIC_PTA0,
	STEP_MINI_IN_LOGIC_PTA1,
	STEP_MINI_IN_LOGIC_PTA2,
	STEP_MINI_IN_LOGIC_PTA3,
	STEP_MINI_IN_LOGIC_PTA4,
	STEP_MINI_IN_LOGIC_PTA5,
	STEP_MINI_IN_LOGIC_RESERVED0,
	STEP_MINI_IN_LOGIC_RESERVED1,
	STEP_MINI_IN_LOGIC_PTSTART,
	STEP_MINI_IN_LOGIC_STOP,
	STEP_MINI_IN_LOGIC_PJOG,
	STEP_MINI_IN_LOGIC_NJOG,
	STEP_MINI_IN_LOGIC_ALARMRESET,
	STEP_MINI_IN_LOGIC_RESERVED2,
	STEP_MINI_IN_LOGIC_PAUSE,
	STEP_MINI_IN_LOGIC_ORIGINSEARCH,
	STEP_MINI_IN_LOGIC_TEACHING,
	STEP_MINI_IN_LOGIC_ESTOP,
	STEP_MINI_IN_LOGIC_JPTIN0,
	STEP_MINI_IN_LOGIC_JPTIN1,
	STEP_MINI_IN_LOGIC_JPTIN2,
	STEP_MINI_IN_LOGIC_JPTSTART,
	STEP_MINI_IN_LOGIC_USERIN0,
	STEP_MINI_IN_LOGIC_USERIN1,
	STEP_MINI_IN_LOGIC_USERIN2,
	STEP_MINI_IN_LOGIC_USERIN3,
	STEP_MINI_IN_LOGIC_USERIN4,
	STEP_MINI_IN_LOGIC_USERIN5,

	MAX_STEP_MINI_IN_LOGIC
} EZISTEP_MINI_INLOGIC_LIST;

typedef enum
{
	STEP_MINI_OUT_PREASSIGN_COMP = 1,

	STEP_MINI_OUT_LOGIC_RESERVED0,
	STEP_MINI_OUT_LOGIC_ALARM,
	STEP_MINI_OUT_LOGIC_RUNSTOP,
	STEP_MINI_OUT_LOGIC_ACCDEC,
	STEP_MINI_OUT_LOGIC_ACK,
	STEP_MINI_OUT_LOGIC_END,
	STEP_MINI_OUT_LOGIC_ALARMBLINK,
	STEP_MINI_OUT_LOGIC_ORGSEARCHOK,
	STEP_MINI_OUT_LOGIC_RESERVED1,
	STEP_MINI_OUT_LOGIC_RESERVED2,
	STEP_MINI_OUT_LOGIC_BRAKE,
	STEP_MINI_OUT_LOGIC_PTOUT0,
	STEP_MINI_OUT_LOGIC_PTOUT1,
	STEP_MINI_OUT_LOGIC_PTOUT2,
	STEP_MINI_OUT_LOGIC_USEROUT0,
	STEP_MINI_OUT_LOGIC_RESERVED3,
	STEP_MINI_OUT_LOGIC_RESERVED4,
	STEP_MINI_OUT_LOGIC_RESERVED5,
	STEP_MINI_OUT_LOGIC_RESERVED6,
	STEP_MINI_OUT_LOGIC_RESERVED7,
	STEP_MINI_OUT_LOGIC_RESERVED8,
	STEP_MINI_OUT_LOGIC_RESERVED9,
	STEP_MINI_OUT_LOGIC_RESERVED10,

	MAX_STEP_MINI_OUT_LOGIC
} EZISTEP_MINI_OUTLOGIC_LIST;

static const int	STEP_MINI_IN_PIN_CNT	= 10;
static const int	STEP_MINI_OUT_PIN_CNT	= 2;

static const int	STEP_MINI_IN_LOGIC_CNT			= (MAX_STEP_MINI_IN_LOGIC - 1);
static const int	STEP_MINI_MAX_PREASSIGNED_IN	= (STEP_MINI_IN_PREASSIGN_ORIGIN);

static const int	STEP_MINI_OUT_LOGIC_CNT			= (MAX_STEP_MINI_OUT_LOGIC - 1);
static const int	STEP_MINI_MAX_PREASSIGNED_OUT	= (STEP_MINI_OUT_PREASSIGN_COMP);

//------------------------------------------------------------------
//                 Parameters Defines.
//------------------------------------------------------------------

typedef enum
{
	STEP_MINI_PULSEPERREVOLUTION = 0,
	STEP_MINI_AXISMAXSPEED,
	STEP_MINI_AXISSTARTSPEED,
	STEP_MINI_AXISACCTIME,
	STEP_MINI_AXISDECTIME,

	STEP_MINI_SPEEDOVERRIDE,
	STEP_MINI_JOGHIGHSPEED,
	STEP_MINI_JOGLOWSPEED,
	STEP_MINI_JOGACCDECTIME,

	STEP_MINI_ALARMLOGIC,
	STEP_MINI_RUNSTOPSIGNALLOGIC,		//SERVO_SERVOONLOGIC,
	STEP_MINI_RESETLOGIC,

	STEP_MINI_SWLMTPLUSVALUE,
	STEP_MINI_SWLMTMINUSVALUE,
	STEP_MINI_SOFTLMTSTOPMETHOD,
	STEP_MINI_HARDLMTSTOPMETHOD,
	STEP_MINI_LIMITSENSORLOGIC,

	STEP_MINI_ORGSPEED,
	STEP_MINI_ORGSEARCHSPEED,
	STEP_MINI_ORGACCDECTIME,
	STEP_MINI_ORGMETHOD,
	STEP_MINI_ORGDIR,
	STEP_MINI_ORGOFFSET,
	STEP_MINI_ORGPOSITIONSET,
	STEP_MINI_ORGSENSORLOGIC,

	STEP_MINI_STOPCURRENT,
	STEP_MINI_MOTIONDIR,

	STEP_MINI_LIMITSENSORDIR,
	STEP_MINI_ENCODERMULTIVALUE,

	STEP_MINI_ENCODERDIR,
	STEP_MINI_POSVALUECOUNTINGMETHOD,

	MAX_STEP_MINI_PARAM

} FM_EZISTEP_MINI_PARAM;

//------------------------------------------------------------------
//                 POSITION TABLE Defines.
//------------------------------------------------------------------

#define STEP_MINI_MAX_ITEM_COUNT		64

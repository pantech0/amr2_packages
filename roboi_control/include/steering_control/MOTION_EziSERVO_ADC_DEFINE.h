#pragma once
#include "MOTION_DEFINE.h"

//------------------------------------------------------------------
//                 Device Type Defines.
//------------------------------------------------------------------
#ifndef DEVTYPE_EZI_SERVO_PLUS_R_ADC_ST
#define	DEVTYPE_EZI_SERVO_PLUS_R_ADC_ST			3
#define DEVNAME_EZI_SERVO_PLUS_R_ADC_ST			"Ezi-SERVO Plus-R-ADC"
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
} EZISERVO_ADC_AXISSTATUS;

//------------------------------------------------------------------
//                 Input/Output Defines.
//------------------------------------------------------------------

// Input Bit-mask list.
static const unsigned int	SERVO_ADC_IN_BITMASK_LIMITP			= 0x00000001;
static const unsigned int	SERVO_ADC_IN_BITMASK_LIMITN			= 0x00000002;
static const unsigned int	SERVO_ADC_IN_BITMASK_ORIGIN			= 0x00000004;
static const unsigned int	SERVO_ADC_IN_BITMASK_CLEARPOSITION	= 0x00000008;
static const unsigned int	SERVO_ADC_IN_BITMASK_PTA0			= 0x00000010;
static const unsigned int	SERVO_ADC_IN_BITMASK_PTA1			= 0x00000020;
static const unsigned int	SERVO_ADC_IN_BITMASK_PTA2			= 0x00000040;
static const unsigned int	SERVO_ADC_IN_BITMASK_PTA3			= 0x00000080;
static const unsigned int	SERVO_ADC_IN_BITMASK_PTA4			= 0x00000100;
static const unsigned int	SERVO_ADC_IN_BITMASK_PTA5			= 0x00000200;
static const unsigned int	SERVO_ADC_IN_BITMASK_PTA6			= 0x00000400;
static const unsigned int	SERVO_ADC_IN_BITMASK_PTA7			= 0x00000800;
static const unsigned int	SERVO_ADC_IN_BITMASK_PTSTART		= 0x00001000;
static const unsigned int	SERVO_ADC_IN_BITMASK_STOP			= 0x00002000;
static const unsigned int	SERVO_ADC_IN_BITMASK_PJOG			= 0x00004000;
static const unsigned int	SERVO_ADC_IN_BITMASK_NJOG			= 0x00008000;
static const unsigned int	SERVO_ADC_IN_BITMASK_ALARMRESET		= 0x00010000;
static const unsigned int	SERVO_ADC_IN_BITMASK_SERVOON		= 0x00020000;
static const unsigned int	SERVO_ADC_IN_BITMASK_PAUSE			= 0x00040000;
static const unsigned int	SERVO_ADC_IN_BITMASK_ORIGINSEARCH	= 0x00080000;
static const unsigned int	SERVO_ADC_IN_BITMASK_TEACHING		= 0x00100000;
static const unsigned int	SERVO_ADC_IN_BITMASK_ESTOP			= 0x00200000;
static const unsigned int	SERVO_ADC_IN_BITMASK_JPTIN0			= 0x00400000;
static const unsigned int	SERVO_ADC_IN_BITMASK_JPTIN1			= 0x00800000;
static const unsigned int	SERVO_ADC_IN_BITMASK_JPTIN2			= 0x01000000;
static const unsigned int	SERVO_ADC_IN_BITMASK_JPTSTART		= 0x02000000;
static const unsigned int	SERVO_ADC_IN_BITMASK_USERIN0		= 0x04000000;
static const unsigned int	SERVO_ADC_IN_BITMASK_USERIN1		= 0x08000000;
static const unsigned int	SERVO_ADC_IN_BITMASK_USERIN2		= 0x10000000;
static const unsigned int	SERVO_ADC_IN_BITMASK_USERIN3		= 0x20000000;
static const unsigned int	SERVO_ADC_IN_BITMASK_USERIN4		= 0x40000000;
static const unsigned int	SERVO_ADC_IN_BITMASK_USERIN5		= 0x80000000;
static const unsigned int	SERVO_ADC_IN_BITMASK_USERIN6		= 0x00000200;
static const unsigned int	SERVO_ADC_IN_BITMASK_USERIN7		= 0x00000400;
static const unsigned int	SERVO_ADC_IN_BITMASK_USERIN8		= 0x00000800;

// Output Bit-mask list.
static const unsigned int	SERVO_ADC_OUT_BITMASK_COMPAREOUT	= 0x00000001;
static const unsigned int	SERVO_ADC_OUT_BITMASK_INPOSITION	= 0x00000002;
static const unsigned int	SERVO_ADC_OUT_BITMASK_ALARM			= 0x00000004;
static const unsigned int	SERVO_ADC_OUT_BITMASK_MOVING		= 0x00000008;
static const unsigned int	SERVO_ADC_OUT_BITMASK_ACCDEC		= 0x00000010;
static const unsigned int	SERVO_ADC_OUT_BITMASK_ACK			= 0x00000020;
static const unsigned int	SERVO_ADC_OUT_BITMASK_END			= 0x00000040;
static const unsigned int	SERVO_ADC_OUT_BITMASK_ALARMBLINK	= 0x00000080;
static const unsigned int	SERVO_ADC_OUT_BITMASK_ORGSEARCHOK	= 0x00000100;
static const unsigned int	SERVO_ADC_OUT_BITMASK_SERVOREADY	= 0x00000200;
//static const unsigned int	SERVO_ADC_OUT_BITMASK_RESERVED	= 0x00000400;
static const unsigned int	SERVO_ADC_OUT_BITMASK_BRAKE			= 0x00000800;
static const unsigned int	SERVO_ADC_OUT_BITMASK_PTOUT0		= 0x00001000;
static const unsigned int	SERVO_ADC_OUT_BITMASK_PTOUT1		= 0x00002000;
static const unsigned int	SERVO_ADC_OUT_BITMASK_PTOUT2		= 0x00004000;
static const unsigned int	SERVO_ADC_OUT_BITMASK_USEROUT0		= 0x00008000;
static const unsigned int	SERVO_ADC_OUT_BITMASK_USEROUT1		= 0x00010000;
static const unsigned int	SERVO_ADC_OUT_BITMASK_USEROUT2		= 0x00020000;
static const unsigned int	SERVO_ADC_OUT_BITMASK_USEROUT3		= 0x00040000;
static const unsigned int	SERVO_ADC_OUT_BITMASK_USEROUT4		= 0x00080000;
static const unsigned int	SERVO_ADC_OUT_BITMASK_USEROUT5		= 0x00100000;
static const unsigned int	SERVO_ADC_OUT_BITMASK_USEROUT6		= 0x00200000;
static const unsigned int	SERVO_ADC_OUT_BITMASK_USEROUT7		= 0x00400000;
static const unsigned int	SERVO_ADC_OUT_BITMASK_USEROUT8		= 0x00800000;

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
} EZISERVO_ADC_INLOGIC;

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
		unsigned BIT_ALARMBLINK		: 1;
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

} EZISERVO_ADC_OUTLOGIC;

//------------------------------------------------------------------
//                 Input/Output Assigning Defines.
//------------------------------------------------------------------

typedef enum
{
	SERVO_ADC_IN_PREASSIGN_LIMITP = 1,
	SERVO_ADC_IN_PREASSIGN_LIMITN,
	SERVO_ADC_IN_PREASSIGN_ORIGIN,

	SERVO_ADC_IN_LOGIC_CLEARPOSITION,
	SERVO_ADC_IN_LOGIC_PTA0,
	SERVO_ADC_IN_LOGIC_PTA1,
	SERVO_ADC_IN_LOGIC_PTA2,
	SERVO_ADC_IN_LOGIC_PTA3,
	SERVO_ADC_IN_LOGIC_PTA4,
	SERVO_ADC_IN_LOGIC_PTA5,
	SERVO_ADC_IN_LOGIC_PTA6,
	SERVO_ADC_IN_LOGIC_PTA7,
	SERVO_ADC_IN_LOGIC_PTSTART,
	SERVO_ADC_IN_LOGIC_STOP,
	SERVO_ADC_IN_LOGIC_PJOG,
	SERVO_ADC_IN_LOGIC_NJOG,
	SERVO_ADC_IN_LOGIC_ALARMRESET,
	SERVO_ADC_IN_LOGIC_SERVOON,
	SERVO_ADC_IN_LOGIC_PAUSE,
	SERVO_ADC_IN_LOGIC_ORIGINSEARCH,
	SERVO_ADC_IN_LOGIC_TEACHING,
	SERVO_ADC_IN_LOGIC_ESTOP,
	SERVO_ADC_IN_LOGIC_JPTIN0,
	SERVO_ADC_IN_LOGIC_JPTIN1,
	SERVO_ADC_IN_LOGIC_JPTIN2,
	SERVO_ADC_IN_LOGIC_JPTSTART,
	SERVO_ADC_IN_LOGIC_USERIN0,
	SERVO_ADC_IN_LOGIC_USERIN1,
	SERVO_ADC_IN_LOGIC_USERIN2,
	SERVO_ADC_IN_LOGIC_USERIN3,
	SERVO_ADC_IN_LOGIC_USERIN4,
	SERVO_ADC_IN_LOGIC_USERIN5,

	MAX_SERVO_ADC_IN_LOGIC
} EZISERVO_ADC_INLOGIC_LIST;

typedef enum
{
	SERVO_ADC_OUT_PREASSIGN_COMP = 1,

	SERVO_ADC_OUT_LOGIC_INPOSITION,
	SERVO_ADC_OUT_LOGIC_ALARM,
	SERVO_ADC_OUT_LOGIC_MOVING,
	SERVO_ADC_OUT_LOGIC_ACCDEC,
	SERVO_ADC_OUT_LOGIC_ACK,
	SERVO_ADC_OUT_LOGIC_END,
	SERVO_ADC_OUT_LOGIC_ALARMBLINK,
	SERVO_ADC_OUT_LOGIC_ORGSEARCHOK,
	SERVO_ADC_OUT_LOGIC_SERVOREADY,
	SERVO_ADC_OUT_LOGIC_RESERVED0,
	SERVO_ADC_OUT_LOGIC_BRAKE,
	SERVO_ADC_OUT_LOGIC_PTOUT0,
	SERVO_ADC_OUT_LOGIC_PTOUT1,
	SERVO_ADC_OUT_LOGIC_PTOUT2,
	SERVO_ADC_OUT_LOGIC_USEROUT0,
	SERVO_ADC_OUT_LOGIC_USEROUT1,
	SERVO_ADC_OUT_LOGIC_USEROUT2,
	SERVO_ADC_OUT_LOGIC_USEROUT3,
	SERVO_ADC_OUT_LOGIC_USEROUT4,
	SERVO_ADC_OUT_LOGIC_USEROUT5,
	SERVO_ADC_OUT_LOGIC_USEROUT6,
	SERVO_ADC_OUT_LOGIC_USEROUT7,
	SERVO_ADC_OUT_LOGIC_USEROUT8,

	MAX_SERVO_ADC_OUT_LOGIC
} EZISERVO_ADC_OUTLOGIC_LIST;

static const int	SERVO_ADC_IN_PIN_CNT	= 12;
static const int	SERVO_ADC_OUT_PIN_CNT	= 10;

static const int	SERVO_ADC_IN_LOGIC_CNT			= (MAX_SERVO_ADC_IN_LOGIC - 1);
static const int	SERVO_ADC_MAX_PREASSIGNED_IN	= (SERVO_ADC_IN_PREASSIGN_ORIGIN);

static const int	SERVO_ADC_OUT_LOGIC_CNT			= (MAX_SERVO_ADC_OUT_LOGIC - 1);
static const int	SERVO_ADC_MAX_PREASSIGNED_OUT	= (SERVO_ADC_OUT_PREASSIGN_COMP);

//------------------------------------------------------------------
//                 Parameters Defines.
//------------------------------------------------------------------

typedef enum
{
	SERVO_ADC_PULSEPERREVOLUTION = 0,
	SERVO_ADC_AXISMAXSPEED,
	SERVO_ADC_AXISSTARTSPEED,
	SERVO_ADC_AXISACCTIME,
	SERVO_ADC_AXISDECTIME,

	SERVO_ADC_SPEEDOVERRIDE,
	SERVO_ADC_JOGHIGHSPEED,
	SERVO_ADC_JOGLOWSPEED,
	SERVO_ADC_JOGACCDECTIME,

	SERVO_ADC_SERVOALARMLOGIC,
	SERVO_ADC_SERVOONLOGIC,
	SERVO_ADC_SERVORESETLOGIC,

	SERVO_ADC_SWLMTPLUSVALUE,
	SERVO_ADC_SWLMTMINUSVALUE,
	SERVO_ADC_SOFTLMTSTOPMETHOD,
	SERVO_ADC_HARDLMTSTOPMETHOD,
	SERVO_ADC_LIMITSENSORLOGIC,

	SERVO_ADC_ORGSPEED,
	SERVO_ADC_ORGSEARCHSPEED,
	SERVO_ADC_ORGACCDECTIME,
	SERVO_ADC_ORGMETHOD,
	SERVO_ADC_ORGDIR,
	SERVO_ADC_ORGOFFSET,
	SERVO_ADC_ORGPOSITIONSET,
	SERVO_ADC_ORGSENSORLOGIC,

	SERVO_ADC_POSITIONLOOPGAIN,
	SERVO_ADC_INPOSITIONVALUE,
	SERVO_ADC_POSTRACKINGLIMIT,
	SERVO_ADC_MOTIONDIR,

	SERVO_ADC_LIMITSENSORDIR,
	SERVO_ADC_ORGTORQUERATIO,

	SERVO_ADC_POSERROVERFLOWLIMIT,

	SERVO_ADC_FUTURE_USE_A,
	SERVO_ADC_FUTURE_USE_B,
	SERVO_ADC_FUTURE_USE_C,

	SERVO_ADC_BALL_SCREW_PITCH,

	SERVO_ADC_GAPCOMP_MINRANGE,
	SERVO_ADC_GAPCOMP_MAXRANGE,
	SERVO_ADC_GAPCOMP_DIFFRANGE,
	SERVO_ADC_GAPCOMP_DELAY,
	SERVO_ADC_LASERFILTER_LENGTH,
	SERVO_ADC_GAPCOMP_OUTPUTLIMIT,
	SERVO_ADC_ADCDISTANCE_RATIO,

	SERVO_ADC_LC_OR_SEAL,

	MAX_SERVO_ADC_PARAM

} FM_EZISERVO_ADC_PARAM;

//------------------------------------------------------------------
//                 POSITION TABLE Defines.
//------------------------------------------------------------------

#define SERVO_ADC_MAX_ITEM_COUNT		512

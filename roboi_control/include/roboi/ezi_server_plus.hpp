#ifndef EZI_SERVER_PLUS_IF_HPP_
#define EZI_SERVER_PLUS_HPP_

#include <memory>
#include <math.h>
#include <vector>
#include <string>
#include <iostream>
#include <arpa/inet.h>
#include "steering_control/FAS_EziMOTIONPlusE.h"

using namespace PE;
#define ST_GART_RATE 100

#pragma pack(1)
typedef struct
{
    bool isbErrorAll;
    bool isbLimitOverPositive;
    bool isbLimitOverNegative;
    bool isbOverCurrent;
    bool isbOverHeat;
    bool isbEmergencyStop;
    bool isbOriginReturn;
    bool isbServoOn;
    bool isbAlarmReset;
    bool isbPositionTableEnd;
    bool isbMotionMoving;
    bool isbMotionPause;
    bool isbOverLoad;
    bool isbMotorStop;
    int cmdPos;
    int actPos;
    int actPosErr;
    int actVel;
    ushort PosItemNo;
}EzServo_Alarm;
#pragma pack()

class ezi_driver
{
private:
  uint8_t id_;
  MOTION_OPTION_EX opt;

public:
  bool bSuccess;
  EzServo_Alarm Status;

  explicit ezi_driver(std::string ip, int nBdID)
  {

    bSuccess = ezi_driver::open(ip, nBdID);
    opt.flagOption.BIT_USE_CUSTOMACCEL = true;
    opt.flagOption.BIT_USE_CUSTOMDECEL = true;

    printf("ezi_driver init : %s, id : %d, connection : %s\n", ip.c_str(), nBdID, bSuccess ? "true" : "false");
  }

  virtual ~ezi_driver()
  {

  }

  bool open(std::string ip, int nBdID)
  {
    unsigned char ip_address[4];
    const char* ip_str = ip.c_str();
    bSuccess = false;

    if (inet_pton(AF_INET, ip_str, ip_address) != 1) {
        fprintf(stderr, "Failed to convert IP address\n");
        return 1;
    }

    if (FAS_Connect(ip_address[0], ip_address[1], ip_address[2], ip_address[3], nBdID) == 0)
      return bSuccess;

    id_ = nBdID;
    bSuccess = true;
    return nBdID;
  }

  bool init(void)
  {
    if (FAS_ServoAlarmReset(id_) != FMM_OK)
      return false;

    if (FAS_ServoEnable(id_, true) != FMM_OK)
      return false;

    return true;
  }

  bool Set_Servo_Enable(bool enable)
  {
    if (FAS_ServoEnable(id_, enable) != FMM_OK)
      return false;

    return true;
  }

  bool Set_AbsPostion(double position, uint velo)
  {
    int pos = (int)(position * ST_GART_RATE);

    if(FAS_MoveSingleAxisAbsPosEx(id_, pos, velo, &opt)  != FMM_OK)
      return false;

    return true;
  }

  bool Set_AbsPostionAccDec(double position, uint velo, ushort acc, uint decel)
  {
    int pos = (int)(position * ST_GART_RATE);

    opt.wCustomAccelTime = acc;
    opt.wCustomDecelTime = decel;

    if(FAS_MoveSingleAxisAbsPosEx(id_, pos, velo, &opt) != FMM_OK)
      return false;

    return true;
  }

  bool Set_MoveStop(void)
  {
    if(FAS_MoveStop(id_) != FMM_OK)
      return false;

    return true;
  }

  bool Set_PositionClear(void)
  {
    if(FAS_ClearPosition(id_) != FMM_OK)
      return false;

    return true;
  }

  double Get_Postion()
  {
    int pos_tick_ = 0;

    if( FAS_GetActualPos(id_, &pos_tick_) != FMM_OK)
      return 0.0;

    return pos_tick_ / ST_GART_RATE;
  }

  bool Get_Status()
  {
    uint inStatus = 0;
    uint outStatus = 0;
    uint AxisStatus = 0;
    int cmdPos = 0;
    int actPos = 0;
    int actPosErr = 0;
    int actVel = 0;
    ushort PosItemNo = 0;

    EZIMOTIONLINK_AXISSTATUS axisStatus;
    if( FAS_GetAllStatus(id_, &inStatus, &outStatus, &AxisStatus, &cmdPos, &actPos, &actPosErr, &actVel, &PosItemNo) != FMM_OK)
      return false;

    Status.isbAlarmReset = (AxisStatus & axisStatus.FFLAG_ALARMRESET) ? true : false;
    Status.isbEmergencyStop = (AxisStatus & axisStatus.FFLAG_EMGSTOP)? true : false;
    Status.isbErrorAll = (AxisStatus & axisStatus.FFLAG_ERRSERVOALARM)? true : false;
    Status.isbLimitOverNegative = (AxisStatus & axisStatus.FFLAG_HWNEGALMT)? true : false;
    Status.isbLimitOverPositive = (AxisStatus & axisStatus.FFLAG_HWPOSILMT)? true : false;
    Status.isbMotionMoving = (AxisStatus & axisStatus.FFLAG_MOTIONING)? true : false;
    Status.isbMotionPause = (AxisStatus & axisStatus.FFLAG_MOTIONPAUSE)? true : false;
    Status.isbOriginReturn = (AxisStatus & axisStatus.FFLAG_ORIGINRETOK)? true : false;
    Status.isbOverCurrent = (AxisStatus & axisStatus.FFLAG_RESERVED3)? true : false;
    Status.isbOverHeat = (AxisStatus & axisStatus.FFLAG_RESERVED7)? true : false;
    Status.isbPositionTableEnd = (AxisStatus & axisStatus.FFLAG_PTSTOPPED)? true : false;
    Status.isbServoOn = (AxisStatus & axisStatus.FFLAG_SERVOON)? true : false;
    Status.cmdPos = cmdPos;
    Status.actPos = actPos;
    Status.actPosErr = actPosErr;
    Status.actVel = actVel;
    Status.PosItemNo = PosItemNo;

    return true;
  }

  bool Set_Home(void)
  {
    if(FAS_MoveOriginSingleAxis(id_) != FMM_OK)
      return false;

    return true;
  }

};


#endif

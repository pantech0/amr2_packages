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

// #pragma pack(1)
// typedef struct
// {
//     bool isbAlarmReset;
//     bool isbEmergencyStop;
//     bool isbErrorAll;
//     bool isbLimitOverNegative;
//     bool isbLimitOverPositive;
//     bool isbMotionMoving;
//     bool isbMotionPause;
//     bool isbOriginReturn;
//     bool isbOverCurrent;
//     bool isbOverHeat;
//     bool isbPositionTableEnd;
//     bool isbServoOn; 
//     int cmdPos;
//     int actPos;
//     int actPosErr;
//     int actVel;
//     ushort PosItemNo;
// }EzServo_Alarm;
// #pragma pack()

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
    FAS_ServoEnable(id_, false);
    FAS_Close(id_);
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
    FAS_ServoAlarmReset(id_);
    FAS_ServoEnable(id_, true);

    return true;
  }

  void Set_Servo_Enable(bool enable)
  {
    FAS_ServoEnable(id_, enable);
  }

  void Set_AbsPostion(double position, uint velo)
  {
    int pos = (int)(position * ST_GART_RATE);

    FAS_MoveSingleAxisAbsPosEx(id_, pos, velo, &opt);
  }

  void Set_AbsPostionAccDec(double position, uint velo, ushort acc, uint decel)
  {
    int pos = (int)(position * ST_GART_RATE);

    opt.wCustomAccelTime = acc;
    opt.wCustomDecelTime = decel;

    FAS_MoveSingleAxisAbsPosEx(id_, pos, velo, &opt) ;

  }

  void Set_MoveStop(void)
  {
    FAS_MoveStop(id_);
  }

  void Set_PositionClear(void)
  {
    FAS_ClearPosition(id_);
  }

  double Get_Postion()
  {
    int pos_tick_ = 0;

    if( FAS_GetActualPos(id_, &pos_tick_) != FMM_OK)
      return 0.0;

    return pos_tick_ / ST_GART_RATE;
  }

  bool bitCheck(uint data, uint check)
  {
    uint checked = data & check;

    if( checked == check )
      return true;

    return false;
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
    FAS_GetAllStatus(id_, &inStatus, &outStatus, &AxisStatus, &cmdPos, &actPos, &actPosErr, &actVel, &PosItemNo);

    Status.isbAlarmReset = bitCheck(AxisStatus, 0x00200000);
    Status.isbEmergencyStop = bitCheck(AxisStatus, 0x00010000);
    Status.isbErrorAll = bitCheck(AxisStatus, 0x00000001);
    Status.isbLimitOverNegative = bitCheck(AxisStatus, 0x00000004);
    Status.isbLimitOverPositive = bitCheck(AxisStatus, 0x00000002);
    Status.isbMotionMoving = bitCheck(AxisStatus, 0x08000000);
    Status.isbMotionPause = bitCheck(AxisStatus, 0x10000000);
    Status.isbOriginReturn = bitCheck(AxisStatus, 0x02000000);
    Status.isbOverCurrent = bitCheck(AxisStatus, 0x00000100);
    Status.isbOverHeat = bitCheck(AxisStatus, 0x00001000);
    Status.isbPositionTableEnd = bitCheck(AxisStatus, 0x00400000);
    Status.isbServoOn = bitCheck(AxisStatus, 0x00100000);
    Status.cmdPos = cmdPos;
    Status.actPos = actPos;
    Status.actPosErr = actPosErr;
    Status.actVel = actVel;
    Status.PosItemNo = PosItemNo;

    return true;
  }

  void Set_Home(void)
  {
    FAS_MoveOriginSingleAxis(id_);
  }

};


#endif

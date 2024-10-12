#ifndef ROBOI_UDP_HPP_
#define ROBOI_UDP_HPP_

#include "rclcpp/rclcpp.hpp"
#include <rclcpp/serialization.hpp>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <net/if.h>
#include <unistd.h>
#include <arpa/inet.h>
#include "std_msgs/msg/string.hpp"
#include <std_msgs/msg/float64_multi_array.hpp>
#include <std_msgs/msg/u_int16_multi_array.hpp>
#include <std_msgs/msg/int32_multi_array.hpp>
#include <string>
#include "roboi_amr_msgs/msg/udpmsg.hpp"
#include "roboi_amr_msgs/msg/angle_status.hpp"

class roboi_udp
{
public:
    explicit roboi_udp(rclcpp::Node* node, rclcpp::CallbackGroup::SharedPtr callback_group = nullptr);
    virtual ~roboi_udp();

private:
#pragma pack(1)
typedef struct
{
    bool isbAlarmReset;
    bool isbEmergencyStop;
    bool isbErrorAll;
    bool isbLimitOverNegative;
    bool isbLimitOverPositive;
    bool isbMotionMoving;
    bool isbMotionPause;
    bool isbOriginReturn;
    bool isbOverCurrent;
    bool isbOverHeat;
    bool isbPositionTableEnd;
    bool isbServoOn;
    int cmdPos;
    int actPos;
    int actPosErr;
    int actVel;
    ushort PosItemNo;
}EzServo_Alarm;
#pragma pack()

#pragma pack(1)
typedef struct{
    uint8_t target;
    uint8_t action;
    uint16_t blinkrate;
  }led_command_t;
#pragma pack()

#pragma pack(1)
  typedef struct{
    uint8_t command;
    uint8_t motorno;
    int data;
    float position;
    int velocity;
  }mot_command_t;
#pragma pack()

#pragma pack(1)
  typedef struct{
    uint8_t command;
    led_command_t led;
    mot_command_t motor;
} udp_packet_t;
#pragma pack()

#pragma pack(1)
typedef struct{
  int32_t count;
  uint8_t isindicator;
  EzServo_Alarm stfl;
  EzServo_Alarm stfr;
  EzServo_Alarm strl;
  EzServo_Alarm strr;
} udp_status_t;
#pragma pack()

typedef enum{
  LED = 1,
  STTERING,
  DRIVING
}Udp_Command;

// Defines -----------------------------------------------
#define UDP_MAXADDR_SIZE 		16
#define UDP_MAXPORT_SIZE 		8

// Maximum number of UDP connections
#define UDP_MAX_CFG			2

// Default UDP configuration
#define UDP_DEFAULT_ADDRESS	"127.0.0.1"
#define UDP_DEFAULT_PORT	9601
// Structs -----------------------------------------------

typedef struct{
	int     			port;
	char    			str_address[UDP_MAXADDR_SIZE];
	struct  sockaddr_in sockaddr;
	int					fd;
} udp_cfg;


typedef struct{
	int     	nb_cfg;
	udp_cfg    	udp[UDP_MAX_CFG];
} udp_cfg_list;

typedef struct{
	int		  			received_len;
	struct  sockaddr_in sender_address;
	socklen_t 			socket_len;
}udp_receive_infos;

udp_cfg udp_in_configuration;
udp_cfg udp_out_configuration;
udp_status_t udp_stats;
char read_buf[256];
char write_buf[256];
void init_udp_cfg(udp_cfg * udp);
void init_udp_cfg_list(udp_cfg_list * udp_list);
bool configure_udp_client(udp_cfg * udp);
bool configure_udp_server(udp_cfg * udp);
int udp_send(udp_cfg *udp_out_configuration, void *data, int data_len);
int udp_send(udp_cfg *udp_out_configuration, roboi_amr_msgs::msg::Udpmsg::SharedPtr data, int data_len);
int udp_receive(udp_cfg *udp_in_configuration, void *data, int data_len);
void data_paser(udp_packet_t *packet);

bool isConnect;
int staterate;
char* getlocalip(void);

roboi_amr_msgs::msg::Udpmsg udpsend;


rclcpp::Node* node_;
rclcpp::TimerBase::SharedPtr udptimer;
rclcpp::Subscription<roboi_amr_msgs::msg::Udpmsg>::SharedPtr udp_send_sub_;

rclcpp::Publisher<std_msgs::msg::UInt16MultiArray>::SharedPtr led_command_pub_;
rclcpp::Publisher<std_msgs::msg::Int32MultiArray>::SharedPtr mot_command_pub_;
rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr wheel_pub_;



void timer_callback(void);
void udp_callback(const roboi_amr_msgs::msg::Udpmsg::SharedPtr udp_msg);
};

#endif

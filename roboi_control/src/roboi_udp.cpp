#include "roboi/roboi_udp.hpp"

roboi_udp::roboi_udp(rclcpp::Node* node, rclcpp::CallbackGroup::SharedPtr callback_group)
{
  node_ = node;
  node_->declare_parameter("udp_port", 2020);
  node_->declare_parameter("udp_local_ip", getlocalip());
  node_->declare_parameter("udp_server_ip", "192.168.0.30");
  node_->declare_parameter("udp_state_rate", 250);

  int udpPort = node_->get_parameter("udp_port").get_value<int>();
  staterate = node_->get_parameter("udp_state_rate").get_value<int>();
  std::string serverip = node_->get_parameter("udp_server_ip").get_value<std::string>();

  udp_in_configuration.port = udpPort;
  strcpy(udp_in_configuration.str_address, getlocalip());
  udp_out_configuration.port = udpPort;
  strcpy(udp_out_configuration.str_address, serverip.c_str());

  configure_udp_client(&udp_out_configuration);

  rclcpp::SubscriptionOptions options;
  options.callback_group = callback_group;

  udp_stats.count = 0;

  udptimer = nullptr;
  udptimer = node_->create_wall_timer(std::chrono::milliseconds(static_cast<int64_t>(1000.0/1000.0)), std::bind(&roboi_udp::timer_callback, this), callback_group);

  if(udptimer == nullptr)
    RCLCPP_INFO(node_->get_logger(), "udptimer error");

  auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10));
  udp_send_sub_ = node_->create_subscription<roboi_amr_msgs::msg::Udpmsg >("/udp/commands", qos_profile,
                                    std::bind(&roboi_udp::udp_callback, this, std::placeholders::_1), options);

  led_command_pub_ = node_->create_publisher<std_msgs::msg::UInt16MultiArray>("/led/commands", qos_profile);
  mot_command_pub_ = node_->create_publisher<std_msgs::msg::Int32MultiArray>("/motor_controller/commands", qos_profile);
  wheel_pub_ = node_->create_publisher<std_msgs::msg::Float64MultiArray>("/wheel_controller/commands", qos_profile);

  RCLCPP_INFO(node_->get_logger(), "create_subscription Start");
}

roboi_udp::~roboi_udp()
{
  udptimer = nullptr;
  close(udp_out_configuration.fd);
}

char* roboi_udp::getlocalip()
{
  char *IPbuffer;
      int n;
  struct ifreq ifr;
  char array[] = "eth0";

  n = socket(AF_INET, SOCK_DGRAM, 0);
  //Type of address to retrieve - IPv4 IP address
  ifr.ifr_addr.sa_family = AF_INET;
  //Copy the interface name in the ifreq structure
  strncpy(ifr.ifr_name , array , IFNAMSIZ - 1);
  ioctl(n, SIOCGIFADDR, &ifr);
  close(n);
  //display result
  IPbuffer = inet_ntoa(( (struct sockaddr_in *)&ifr.ifr_addr )->sin_addr);

  return IPbuffer;
}

void roboi_udp::init_udp_cfg(udp_cfg * udp)
{
    strcpy(udp->str_address, UDP_DEFAULT_ADDRESS);
    udp->port=UDP_DEFAULT_PORT;
}

void roboi_udp::init_udp_cfg_list(udp_cfg_list * udp_list)
{
    udp_list->nb_cfg = 0;
    for(int i=0;i<UDP_MAX_CFG;i++)
    {
        init_udp_cfg(&udp_list->udp[i]);
    }
}

bool roboi_udp::configure_udp_client(udp_cfg * udp)
{
    // Creating socket file descriptor
    if ( (udp->fd = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) {
        perror("socket creation failed");
        return false;
    }

    memset(&udp->sockaddr, 0, sizeof(udp->sockaddr));

    // Filling server information
    udp->sockaddr.sin_family = AF_INET;
    udp->sockaddr.sin_port = htons(udp->port);
    udp->sockaddr.sin_addr.s_addr = inet_addr(udp->str_address);

    return true;
}

bool roboi_udp::configure_udp_server(udp_cfg * udp)
{
    // Creating socket file descriptor
    if ( (udp->fd = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) {
        perror("socket creation failed");
        return false;
    }

    memset(&udp->sockaddr, 0, sizeof(udp->sockaddr));

    // Filling server information
    udp->sockaddr.sin_family = AF_INET;
    udp->sockaddr.sin_port = htons(udp->port);
    udp->sockaddr.sin_addr.s_addr = inet_addr(udp->str_address);

    // bind server address to socket descriptor
    bind(udp->fd, (struct sockaddr*)&udp->sockaddr, sizeof(udp->sockaddr));

    return true;
}

int roboi_udp::udp_send(udp_cfg *udp_out_configuration, void *data, int data_len)
{
  return sendto(
                  udp_out_configuration->fd,
                  (const char *)data,
                  data_len,
                  MSG_CONFIRM,
                  (const struct sockaddr *) &udp_out_configuration->sockaddr,
                  sizeof(udp_out_configuration->sockaddr)
              );
}

int roboi_udp::udp_send(udp_cfg *udp_out_configuration, const roboi_amr_msgs::msg::Udpmsg::SharedPtr data, int data_len)
{
    // ROS 2 직렬화 객체 생성
  rclcpp::Serialization<roboi_amr_msgs::msg::Udpmsg> serializer;

  // 메시지 직렬화
  std::vector<unsigned char> buffer;

  // rclcpp::SerializedMessage 객체 생성
  rclcpp::SerializedMessage serialized_msg;

  // 데이터 복사
  serializer.serialize_message(data.get(), &serialized_msg);

  uint8_t* serialized_data = serialized_msg.get_rcl_serialized_message().buffer;
  size_t serialized_size = serialized_msg.size();
  uint8_t pmsg_test[serialized_size];


  memcpy(pmsg_test, serialized_data, serialized_size);


  return sendto(
                  udp_out_configuration->fd,
                  pmsg_test,
                  serialized_size,
                  MSG_CONFIRM,
                  (const struct sockaddr *) &udp_out_configuration->sockaddr,
                  sizeof(udp_out_configuration->sockaddr)
              );
}


int roboi_udp::udp_receive(udp_cfg *udp_in_configuration, void *data, int data_len)
{
    udp_receive_infos infos;
    infos.received_len = (int)recvfrom(
                            udp_in_configuration->fd,
                            (void *)data,
                            data_len,
                            MSG_DONTWAIT,
                            (struct sockaddr *) &infos.sender_address,
                            &infos.socket_len
                            );
    return infos.received_len;
}

void roboi_udp::timer_callback()
{
  // if( isConnect == false )
  // {
  //   if(udp_send(&udp_out_configuration, udp_stats, sizeof(udp_packet_t)) != -1)
  //     isConnect = true;
  // }

  // if((udp_stats.count%staterate) == 1)
  // {
  //   RCLCPP_INFO(node_->get_logger(), "Timer : %d, data size : %ld", udp_stats.count, sizeof(udp_status_t));
  //   udp_send(&udp_out_configuration, udp_stats, sizeof(udp_status_t));
  //   RCLCPP_INFO(node_->get_logger(), "udp send");
  // }

  int len = udp_receive(&udp_out_configuration, (void *)read_buf, sizeof(udp_packet_t));
  if(len != -1 )
    data_paser((udp_packet_t *)read_buf);

  //udp_stats.count++;
}

void roboi_udp::data_paser(udp_packet_t *packet)
{
  switch (packet->command)
  {
    case LED:{
        std_msgs::msg::UInt16MultiArray led_data;
        led_data.data.resize(3);
        led_data.data[0] = packet->led.target;
        led_data.data[1] = packet->led.action;
        led_data.data[2] = packet->led.blinkrate;
        led_command_pub_->publish(led_data);

        RCLCPP_INFO(node_->get_logger(), "Udp_Command::LED");
      break;}
    case STTERING:
      {
        std_msgs::msg::Int32MultiArray mot_data;
        mot_data.data.resize(5);
        mot_data.data[0] = packet->motor.command;
        mot_data.data[1] = packet->motor.motorno;
        mot_data.data[2] = packet->motor.data;
        mot_data.data[3] = packet->motor.position;
        mot_data.data[4] = packet->motor.velocity;
        mot_command_pub_->publish(mot_data);
        RCLCPP_INFO(node_->get_logger(), "Udp_Command::STTERING");
      break;
      }
    case DRIVING:
      {
        std_msgs::msg::Float64MultiArray driver_data;
        driver_data.data.resize(5);
        driver_data.data[0] = packet->motor.command;
        driver_data.data[1] = packet->motor.motorno;
        driver_data.data[2] = packet->motor.data;
        driver_data.data[3] = packet->motor.position;
        driver_data.data[4] = packet->motor.velocity;
        wheel_pub_->publish(driver_data);
        RCLCPP_INFO(node_->get_logger(), "Udp_Command::DRIVING");
      break;
      }

  }
}

void roboi_udp::udp_callback(const roboi_amr_msgs::msg::Udpmsg::SharedPtr udp_msg)
{

    //RCLCPP_INFO(node_->get_logger(), "udp callback Driver servo on : %d, count : %d", udp_msg->st_fl.isbservoon, udp_msg->count);

    udp_send(&udp_out_configuration, udp_msg, sizeof(roboi_amr_msgs::msg::Udpmsg));

}


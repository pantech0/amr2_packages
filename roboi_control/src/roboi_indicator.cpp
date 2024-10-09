#include "roboi/roboi_indicator.hpp"



roboi_indicator::roboi_indicator(rclcpp::Node* node, rclcpp::CallbackGroup::SharedPtr callback_group)
{
  node_ = node;
  node_->declare_parameter("led_port", "/dev/ttyACM0");
  node_->declare_parameter("led_baudrate", 115200);
  port_ = node_->get_parameter("led_port").get_value<std::string>();
  baudrate_ = node_->get_parameter("led_baudrate").get_value<int>();

  connection_ = false;

  open_port();

  rclcpp::SubscriptionOptions options;
  options.callback_group = callback_group;

  auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10));
  led_command_sub_ = node_->create_subscription<std_msgs::msg::UInt16MultiArray>("/led/commands", qos_profile,
                                    std::bind(&roboi_indicator::led_callback, this, std::placeholders::_1), options);

  RCLCPP_INFO(node_->get_logger(), "roboi_indicator Start");
}

roboi_indicator::~roboi_indicator()
{
}

void roboi_indicator::open_port()
{
  if(connection_)
    return;

  int baudcode;
  struct termios newtio;

  switch (baudrate_)
  {
    case 9600:
      baudcode = B9600;
      break;
    case 19200:
      baudcode = B19200;
      break;
    case 38400:
      baudcode = B38400;
      break;
    case 57600:
      baudcode = B57600;
      break;
    case 115200:
      baudcode = B115200;
      break;
    case 230400:
      baudcode = B230400;
      break;
    case 460800:
      baudcode = B460800;
      break;
    case 921600:
      baudcode = B921600;
      break;
    default:
      baudcode = 0;
      throw std::invalid_argument("unknown baudrate");
  }

  fd_ = open(port_.c_str(), O_RDWR | O_SYNC | O_NOCTTY, S_IRUSR | S_IWUSR);

  if(fd_ < 0)
  {
    RCLCPP_WARN(node_->get_logger(), "Cannot open file: %s", port_.c_str());
    return;
  }

  //termios 백업
  tcgetattr(fd_, &oldtio_);
	newtio.c_iflag = IGNPAR;
	newtio.c_oflag = 0;
  newtio.c_cflag = baudcode | CS8 | CLOCAL | CREAD;
  newtio.c_lflag = 0;
  newtio.c_cc[VTIME] = 0;
  newtio.c_cc[VMIN] = 1;

  if(tcflush(fd_, TCIFLUSH) != 0)
  {
    RCLCPP_WARN(node_->get_logger(), "[GPIO]FLUSH error");
    close(fd_);
    return;
  }

  if(tcsetattr(fd_,TCSANOW,&newtio) != 0)
  {
    RCLCPP_WARN(node_->get_logger(), "[GPIO]cannot open port: %s", port_.c_str());
    close_port();
    return;
  }

  connection_ = true;

  RCLCPP_INFO(node_->get_logger(), "[GPIO]connection success: %s", port_.c_str());
}

void roboi_indicator::close_port()
{
  tcsetattr(fd_,TCSANOW, &oldtio_);
  close(fd_);
  connection_ = false;
}

roboi_indicator::cmd_return_t roboi_indicator::send_data(std_msgs::msg::UInt16MultiArray::SharedPtr led_msg, int trial)
{
  if(!connection_)
  {
    RCLCPP_WARN(node_->get_logger(), "[GPIO]Not Connected");
    return RETURN_CONNTECTION_ERROR;
  }
  cmd_return_t ret;

  char* send_data;
  // stx
  // command
  // action
  // data 0
  // data 1
  // checksum
  // etx
  send_data = (char*)malloc(7);
  send_data[0] = 0xAA;
  send_data[1] = led_msg->data[0];
  send_data[2] = led_msg->data[1];
  send_data[3] = led_msg->data[2]>>8;
  send_data[4] = led_msg->data[2];
  send_data[5] = (send_data[1] + send_data[2] + send_data[3] + send_data[4]) & 0xFF;
  send_data[6] = 0x55;

  RCLCPP_INFO(node_->get_logger(), "[LED]Serial Write");
  if(tcflush(fd_, TCIFLUSH) != 0)
  {
    RCLCPP_WARN(node_->get_logger(), "[LED]FLUSH error");
    return ret = RETURN_CONNTECTION_ERROR;
  }

  if(write(fd_, send_data, 7) == -1)
  {
    RCLCPP_WARN(node_->get_logger(), "[LED]write Error");
    return ret = RETURN_CONNTECTION_ERROR;
  }

  RCLCPP_INFO(node_->get_logger(), "[LED]COMMAND OK : crc = %d", send_data[5]);
  return RETURN_OK;
}

void roboi_indicator::led_callback(const std_msgs::msg::UInt16MultiArray::SharedPtr led_msg)
{
  switch (led_msg->data[0])
  {
  case Front_Left_Led:
    RCLCPP_INFO(node_->get_logger(), "Front_Left_Led : %d", led_msg->data[1]);
    break;
  case Front_Right_Led:
    RCLCPP_INFO(node_->get_logger(), "Front_Right_Led : %d", led_msg->data[1]);
    break;
  case Front_Center_Led:
    RCLCPP_INFO(node_->get_logger(), "Front_Center_Led : %d", led_msg->data[1]);
    break;
  case Rear_Left_Led:
    RCLCPP_INFO(node_->get_logger(), "Rear_Left_Led : %d", led_msg->data[1]);
    break;
  case Rear_Right_Led:
    RCLCPP_INFO(node_->get_logger(), "Rear_Right_Led : %d", led_msg->data[1]);
    break;
  case Rear_Center_Led:
    RCLCPP_INFO(node_->get_logger(), "Rear_Center_Led : %d", led_msg->data[1]);
    break;
  case Stop_Led:
    RCLCPP_INFO(node_->get_logger(), "Stop_Led : %d", led_msg->data[1]);
    break;
  case Move_Led:
    RCLCPP_INFO(node_->get_logger(), "Move_Led : %d", led_msg->data[1]);
    break;
  case Wait_Led:
    RCLCPP_INFO(node_->get_logger(), "Wait_Led : %d, blink : %d", led_msg->data[1], led_msg->data[2]);
    break;
  case Ararm_Led:
    RCLCPP_INFO(node_->get_logger(), "Ararm_Led : %d, blink : %d", led_msg->data[1], led_msg->data[2]);
    break;
  default:
    break;
  }

  send_data(led_msg, 3);
}


#include "roboi/roboi_joy.hpp"


// #include <rclcpp_components/register_node_macro.hpp>

// RCLCPP_COMPONENTS_REGISTER_NODE(roboi_amr_control::roboi_joy)

roboi_joy::roboi_joy(rclcpp::Node* node, rclcpp::CallbackGroup::SharedPtr callback_group)
{
  node_ = node;

  joy_command_sub_ = node_->create_subscription<sensor_msgs::msg::Joy>("/joy", 5, std::bind(&roboi_joy::joy_command_callback, this, std::placeholders::_1));

  RCLCPP_INFO(node_->get_logger(), "Joystick node Initiated"); 
}

roboi_joy::~roboi_joy()
{
  
}

void roboi_joy::timer_callback()
{

}

void roboi_joy::joy_command_callback(const sensor_msgs::msg::Joy::SharedPtr joy_command_msg)
{
  auto tmp = std::system("clear");
 
  float v = joy_command_msg->axes[1]; //10.0  # 차량 속도 (m/s)
  float delta_f = joy_command_msg->axes[0]; //0.2  # 앞바퀴 조향각 (radians)
  float L = 2.5; //  # 휠베이스 (m)
  float T = 1.5; //  # 트랙 (m)

  //# 회전 반경 계산
  float R = L / tan(delta_f);

  //# 앞바퀴 조향각 계산
  float delta_fo = atan(L / (R + T / 2));
  float delta_fi = atan(L / (R - T / 2));

  //# 뒷바퀴 조향각 (0으로 설정)
  float delta_ro = 0;
  float delta_ri = 0;

  // # 각 바퀴 속도 계산
  float v_fo = v * (R + T / 2) / R;
  float v_fi = v * (R - T / 2) / R;
  float v_ro = v * (R - T / 2) / R;
  float v_ri = v * (R + T / 2) / R;


  std::cout << "front left Angle : " << delta_fo << " - front left V : " << v_fo << std::endl;
  std::cout << "front right Angle : " << delta_fi << " - front right V : " << v_fi << std::endl;
  std::cout << "rear left velocity : " << v_ro << " - rear right velocity : " << v_ri << std::endl;  
    
}

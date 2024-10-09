#include "roboi/roboi_amr.hpp"

RoboiAmr::RoboiAmr(const rclcpp::NodeOptions & node_options)
: Node("roboi_amr_node", node_options)
{
  roboi_udp_callback_group_ = create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
  roboi_indicator_callback_group_ = create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
  roboi_motor_callback_group_ = create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);

  roboi_udp_ = std::make_shared<roboi_udp>(this, roboi_udp_callback_group_);
  roboi_indicator_ = std::make_shared<roboi_indicator>(this, roboi_indicator_callback_group_);
  roboi_motor_ = std::make_shared<roboi_motor>(this, roboi_indicator_callback_group_);
}

RoboiAmr::~RoboiAmr()
{
}

int main(int argc, char* argv[])
{
  rclcpp::init(argc, argv);
  auto roboi_amr_node = std::make_shared<RoboiAmr>();

  rclcpp::executors::MultiThreadedExecutor executor;
  executor.add_node(roboi_amr_node);

  RCLCPP_INFO(roboi_amr_node->get_logger(), "Starting roboi amr node, shut down with CTRL-C");
  executor.spin();
  rclcpp::shutdown();
  return 0;
}

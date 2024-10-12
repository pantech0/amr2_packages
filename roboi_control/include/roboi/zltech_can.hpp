#ifndef __ZLTECH_CAN__
#define __ZLTECH_CAN__

#include <cstdint>
#include <string>
#include <iostream>
#include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <linux/can.h>
#include <linux/can/raw.h>
#include <thread>
#include <vector>
#include <chrono>
#include <mutex>
#include <functional>
#include <poll.h>


class ZltechCanBus{
public:
  explicit ZltechCanBus(const std::string& network_name)
  {
    if (pipe(pipe_fd_) < 0) {
        perror("Pipe error");
        return;
    }
    if((sock_ = socket(PF_CAN, SOCK_RAW, CAN_RAW)) < 0)
    {
      perror("CAN Error: Could not open!");
      throw std::exception();
    }
    net_name_ = network_name;
  }

  ~ZltechCanBus()
  {
    std::cout << "distruct bus" << std::endl;
    close_bus();
    std::cout << "close bus" << std::endl;
  }

  typedef enum {
    SDO_SETTING_1BYTE = 0x2F,
    SDO_SETTING_2BYTE = 0x2B,
    SDO_SETTING_3BYTE = 0x27,
    SDO_SETTING_4BYTE = 0x23,
    SDO_SETTING_FEEDBACK = 0x60,
    SDO_READ = 0x40,
    SDO_READ_FEEDBACK_1BYTE = 0x4F,
    SDO_READ_FEEDBACK_2BYTE = 0x4B,
    SDO_READ_FEEDBACK_3BYTE = 0x47,
    SDO_READ_FEEDBACK_4BYTE = 0x43,
    SDO_ERROR = 0x80
  } sdo_cmd_t;

  typedef struct NodeInfo{
    uint16_t id;
    std::function<void(struct can_frame&)> sdo_clbk;
    std::function<void(struct can_frame&)> pdo_clbk;

    NodeInfo(uint16_t a, std::function<void(struct can_frame&)> b, std::function<void(struct can_frame&)> c) : id(a), sdo_clbk(b), pdo_clbk(c) {}
  }node_info_t;

  int sock_ = -1;
  std::vector<node_info_t> drivers_vec_;

  bool open_bus()
  {
    struct ifreq ifr;
    strncpy(ifr.ifr_name, net_name_.c_str(), IFNAMSIZ - 1);
    ifr.ifr_name[IFNAMSIZ - 1] = '\0';
    ifr.ifr_ifindex = if_nametoindex(ifr.ifr_name);
    if (!ifr.ifr_ifindex)
    {
      perror("CAN Error: Name to index error");
      return false;
    }
    if(ioctl(sock_, SIOCGIFINDEX, &ifr)< 0)
    {
      perror("CAN Error: ioctl Error");
      return false;
    }

    struct sockaddr_can addr;
    addr.can_family = AF_CAN;
    addr.can_ifindex = ifr.ifr_ifindex;

    if (bind(sock_, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
      perror("CAN Error: Bind Error");
      return false;
    }
    // 수신 스레드 생성 및 실행
    recv_thread_ = std::make_shared<std::thread>(std::bind(&ZltechCanBus::recv_clbk, this));
    return true;
  }

  bool close_bus()
  {
    write(pipe_fd_[1], "stop", 4);
    recv_thread_->join();
    close(sock_);
    close(pipe_fd_[0]);
    close(pipe_fd_[1]);
    std::cout << "close sock ok" << std::endl;
    return true;
  }

  bool nmt_operate_all()
  {
    struct can_frame frame;
    frame.can_id = 0;
    frame.len = 8;
    memset(frame.data, 0, 8);
    frame.data[0] = 1;

    //송신
    if (write(sock_, &frame, sizeof(frame)) != sizeof(frame))
    {
      perror("CAN Error: PDO write");
      return false;
    }
    return true;
  }

  bool nmt_stop_all()
  {
    struct can_frame frame;
    frame.can_id = 0;
    frame.len = 8;
    memset(frame.data, 0, 8);
    frame.data[0] = 2;

    //송신
    if (write(sock_, &frame, sizeof(frame)) != sizeof(frame))
    {
      perror("CAN Error: PDO write");
      return false;
    }
    return true;
  }

private:
  std::string net_name_;
  std::shared_ptr<std::thread> recv_thread_;
  int pipe_fd_[2];

  void recv_clbk()
  {
    struct can_frame frame;
    struct pollfd fds[2];
    fds[0].fd = sock_;
    fds[0].events = POLLIN;
    fds[1].fd = pipe_fd_[0];
    fds[1].events = POLLIN;
    while (true)
    {
      int ret = poll(fds, 2, -1); // 무한 대기
      if (ret < 0) {
        perror("Poll error");
        break;
      }

      if (fds[1].revents & POLLIN) {
        // 파이프에서 읽기
        char pipe_buf[10];
        read(pipe_fd_[0], pipe_buf, sizeof(pipe_buf));
        std::cout << "Received signal to stop reading" << std::endl;
        break;
      }

      if (fds[0].revents & POLLIN) {
        int nbytes = read(sock_, &frame, sizeof(frame));
        if (nbytes < 0)
        {
          perror("CAN Error: receive");
          break;
        }
        else if(nbytes == 0)
        {
          std::cout << "EOF reached\n";
          break;
        }

        for(size_t i = 0; i < drivers_vec_.size();i++)
        {
          //SDO return
          if(frame.can_id == static_cast<uint32_t>(0x580 + drivers_vec_[i].id))
          {
            drivers_vec_[i].sdo_clbk(frame);
          }
          //PDO
          else if(frame.can_id == static_cast<uint32_t>(0x180 + drivers_vec_[i].id) ||
                  frame.can_id == static_cast<uint32_t>(0x280 + drivers_vec_[i].id) ||
                  frame.can_id == static_cast<uint32_t>(0x380 + drivers_vec_[i].id) ||
                  frame.can_id == static_cast<uint32_t>(0x480 + drivers_vec_[i].id))
          {
            drivers_vec_[i].pdo_clbk(frame);
          }
        }
      }
    }
  }
};

class ZltechCanBus;

class ZltechCanDriver: public std::enable_shared_from_this<ZltechCanDriver>{
public:
  explicit ZltechCanDriver(uint16_t id, uint32_t encoder_ppr)
  {
    id_ = id;
    last_pos_tick0_ = 0;
    last_pos_tick1_ = 0;
    last_tick_ = 0;
    flag_tick_ = false;
    enc_ppr_ = encoder_ppr;
    b_pose_available_ = false;
  }

  bool add_to_bus(std::shared_ptr<ZltechCanBus> bus)
  {
    bus_ = bus;

    bus->drivers_vec_.push_back(ZltechCanBus::NodeInfo(id_, std::bind(&ZltechCanDriver::sdo_clbk, this, std::placeholders::_1), std::bind(&ZltechCanDriver::pdo_clbk, this, std::placeholders::_1)));
    return true;
  }

  bool get_pose(double& pos, uint16_t& err)
  {
    if(!b_pose_available_)
      return false;

    std::lock_guard<std::mutex> lock_guard(data_mutex_);

    int64_t dtick;
    std::chrono::duration<double> dtime;
    std::chrono::duration<double> dtime2;

    if(flag_tick_)
    {
      dtick = last_pos_tick0_-last_pos_tick1_;
      dtime = last_pos_time0_-last_pos_time1_;
      dtime2 = std::chrono::high_resolution_clock::now()-last_pos_time0_;
      pos = static_cast<double>(last_pos_tick0_ + dtick * (dtime2.count()/dtime.count())) * 2 * M_PI / enc_ppr_;
    }
    else
    {
      dtick = last_pos_tick1_-last_pos_tick0_;
      dtime = last_pos_time1_-last_pos_time0_;
      dtime2 = std::chrono::high_resolution_clock::now()-last_pos_time1_;
      pos = static_cast<double>(last_pos_tick1_ + dtick * (dtime2.count()/dtime.count())) * 2 * M_PI / enc_ppr_;
    }

    err = err_;
    if(err != 0)
      return false;

    return true;
  }

  bool send_vel(double vel_radps)
  {
    // struct can_frame frame;
    // frame.can_id = 0x600+id_;
    // frame.len = 8;
    // memset(frame.data, 0, 8);
    int32_t vel_rpm = static_cast<int32_t>(vel_radps*30/M_PI);
    // memcpy(frame.data, &vel_rpm, 4);

    // auto sp_bus = bus_.lock();
    // //송신
    // if (write(sp_bus->sock_, &frame, sizeof(frame)) != sizeof(frame))
    // {
    //   perror("CAN Error: PDO write");
    //   return false;
    // }
    return send_sdo(ZltechCanBus::SDO_SETTING_4BYTE, 0x60FF, 0, vel_rpm);;
  }

  bool send_init_driver()
  {
    return send_sdo(ZltechCanBus::SDO_SETTING_2BYTE, 0x6040, 0, 0);
  }

  bool send_shutdown()
  {
    return send_sdo(ZltechCanBus::SDO_SETTING_2BYTE, 0x6040, 0, 0x6);
  }

  bool send_switch_on()
  {
    return send_sdo(ZltechCanBus::SDO_SETTING_2BYTE, 0x6040, 0, 0x7);
  }

  bool send_enable_operation()
  {
    return send_sdo(ZltechCanBus::SDO_SETTING_2BYTE, 0x6040, 0, 0xF);
  }

  bool send_break(int16_t data)
  {
    return send_sdo(ZltechCanBus::SDO_SETTING_2BYTE, 0x2030, 0x0e, data);
  }
  bool enable_driver_control()
  {
    if(!send_init_driver()) return false;
    if(!send_shutdown()) return false;
    if(!send_switch_on()) return false;
    if(!send_enable_operation()) return false;
    return true;
  }

  bool send_sdo(ZltechCanBus::sdo_cmd_t cmd_word, uint16_t index, uint8_t sub_index, int32_t data = 0)
  {
    std::unique_lock<std::mutex> lck(sdo_mutex_);
    struct can_frame frame;
    frame.can_id = 0x600 + id_;
    frame.len = 8;
    memset(frame.data, 0, 8);
    frame.data[0] = cmd_word;
    memcpy(frame.data+1, &index, 2);
    frame.data[3] = sub_index;
    uint8_t data_len;
    switch(cmd_word)
    {
      case ZltechCanBus::SDO_SETTING_1BYTE:
        data_len = 1;
        break;
      case ZltechCanBus::SDO_SETTING_2BYTE:
        data_len = 2;
        break;
      case ZltechCanBus::SDO_SETTING_3BYTE:
        data_len = 3;
        break;
      case ZltechCanBus::SDO_SETTING_4BYTE:
        data_len = 4;
        break;
      default:
        data_len = 0;
        break;
    }
    memcpy(frame.data+4, &data, data_len);

    {
      std::lock_guard<std::mutex> lock_guard(data_mutex_);
      sdo_index_ = 0;
      sdo_sub_index_ = 0;
      sdo_data_ = 0;
    }

    auto sp_bus = bus_.lock();
    //송신
    if (write(sp_bus->sock_, &frame, sizeof(frame)) != sizeof(frame))
    {
      perror("CAN Error: SDO write");
      return false;
    }

    auto wait_result = sdo_cv_.wait_for(lck, std::chrono::milliseconds(500));  //수신 대기(500ms 타임아웃)

    //타임아웃
    if(wait_result == std::cv_status::timeout)
    {
      perror("CAN Error: SDO timeout");
      return false;
    }

    {
      std::lock_guard<std::mutex> lock_guard(data_mutex_);
      if(sdo_index_ != index)
      {
        perror("CAN Error: SDO index error");
        return false;
      }
      if(sdo_sub_index_ != sub_index)
      {
        perror("CAN Error: SDO sub-index error");
        return false;
      }
    }
    return true;
  }

  void sdo_clbk(struct can_frame& frame)
  {
    std::unique_lock<std::mutex> lck(sdo_mutex_);

    uint8_t data_len;
    switch(frame.data[0])
    {
      case ZltechCanBus::SDO_READ_FEEDBACK_1BYTE:
        data_len = 1;
        break;
      case ZltechCanBus::SDO_READ_FEEDBACK_2BYTE:
        data_len = 2;
        break;
      case ZltechCanBus::SDO_READ_FEEDBACK_3BYTE:
        data_len = 3;
        break;
      case ZltechCanBus::SDO_READ_FEEDBACK_4BYTE:
        data_len = 4;
        break;
      default:
        data_len = 0;
        break;
    }

    {
      std::lock_guard<std::mutex> lock_guard(data_mutex_);
      memcpy(&sdo_index_, frame.data+1, 2);
      sdo_sub_index_ = frame.data[3];
      memcpy(&sdo_data_, frame.data+4, data_len);
    }

    sdo_cv_.notify_all();  // 모든 대기 중인 스레드에 알림
  }

  void pdo_clbk(struct can_frame& frame)
  {
    if(static_cast<int32_t>(frame.can_id) == 0x280 + id_)
    {
      int32_t tick;
      uint16_t err;
      memcpy(&tick, frame.data, 4);
      memcpy(&err, frame.data+4, 2);
      update(tick, err);
    }
  }

private:
  bool update(int32_t tick, uint16_t err)
  {
    {
      std::lock_guard<std::mutex> lock_guard(data_mutex_);
      if(flag_tick_ == false)
      {
        last_pos_tick0_ = last_pos_tick1_ + (tick - last_tick_);
        last_pos_time0_ = std::chrono::high_resolution_clock::now();
        last_tick_ = tick;
        flag_tick_ = true;
        err_ = err;
      }
      else
      {
        last_pos_tick1_ = last_pos_tick0_ + (tick - last_tick_);
        last_pos_time1_ = std::chrono::high_resolution_clock::now();
        last_tick_ = tick;
        flag_tick_ = false;
        err_ = err;
        if(!b_pose_available_) b_pose_available_ = true;
      }
    }
    return true;
  }

  std::weak_ptr<ZltechCanBus> bus_;
  uint16_t id_;
  uint32_t enc_ppr_;
  int32_t last_tick_;
  int64_t last_pos_tick0_;
  int64_t last_pos_tick1_;
  std::chrono::_V2::system_clock::time_point last_pos_time0_;
  std::chrono::_V2::system_clock::time_point last_pos_time1_;
  bool flag_tick_;
  uint16_t err_;
  bool b_pose_available_;
  std::mutex data_mutex_;

  std::mutex sdo_mutex_;
  std::condition_variable sdo_cv_;
  uint16_t sdo_index_;
  uint16_t sdo_sub_index_;
  int32_t sdo_data_;
};

#endif //__ZLTECH_CAN__

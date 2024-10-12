---
**1. 필수 패킷지**
 + 원격 접속 패키지
~~~
$ sudo apt install openssh-server
~~~
+ 설치 후 ssh 활성화 확인 `Active : active`가 되어 있어야함. 

```processing
 $ sudo systemctl status ssh
 ssh.service - OpenBSD Secure Shell server
     Loaded: loaded (/lib/systemd/system/ssh.service; enabled; vendor preset: enabled)
     Active: active (running) since Fri 2021-01-01 11:30:48 KST; 10s ago
       Docs: man:sshd(8)
             man:sshd_config(5)
   Main PID: 1013995 (sshd)
      Tasks: 1 (limit: 19042)
     Memory: 1.3M
     CGroup: /system.slice/ssh.service
             └─1013995 sshd: /usr/sbin/sshd -D [listener] 0 of 10-100 startups

 1월 01 11:30:48 js systemd[1]: Starting OpenBSD Secure Shell server...
 1월 01 11:30:48 js sshd[1013995]: Server listening on 0.0.0.0 port 22.
 1월 01 11:30:48 js sshd[1013995]: Server listening on :: port 22.
 1월 01 11:30:48 js systemd[1]: Started OpenBSD Secure Shell server.
```

 + 만약 방화벽을 사용하고 있다면, ssh를 허용하도록 합니다. 방화벽이 비활성화되어있다면 무시해도 됩니다.
```
$ sudo ufw status
Status: inactive
```
 - Net-Tools(ifconfig)
```
 $ sudo apt install net-tools
```
 
 + GitHub 설치
```processing
$ sudo apt install git
```

+ 자동 절전 모드 해제
```
$ systemctl status sleep.target suspend.target hibernate.target hybrid-sleep.target
```
  ![image](https://user-images.githubusercontent.com/97498024/222038093-e5de304a-28bf-48c8-ae22-84a1f34bcf4a.png)   
  
  Loaded가 loaded로 되어 있다면 절전 모드 설정이 되어 있는 것이다
```
$ sudo systemctl mask sleep.target suspend.target hibernate.target hybrid-sleep.target
```
  ![image](https://user-images.githubusercontent.com/97498024/222038159-95b06950-6558-4e7b-afc6-ee4d84d0e982.png)   

  명령으로 자동 절전 모드 해제
  
+ 우분투 네트워킹 체크 해제
```
systemctl disable systemd-networkd-wait-online.service
```

네트워크 체크 해제 중 다른 서비스 콜에서더 시작되지 않도록 하여줌
```
systemctl mask systemd-networkd-wait-online.service
```

+ 비밀번호 없이 사용
```
sudo visudo
```
맨 아래 부분에 "User ID"를 입력하고 아래 항목을 입력 한다.

```
{USERNAME}   ALL=(ALL) NOPASSWD: ALL
```

+ Network 초기 설정
```
# This file is generated from information provided by the datasource.  Changes
# to it will not persist across an instance reboot.  To disable cloud-init's
# network configuration capabilities, write a file
# /etc/cloud/cloud.cfg.d/99-disable-network-config.cfg with the following:
# network: {config: disabled}
network:
    version: 2
    ethernets:
        eth0:
            addresses:
            - 192.168.0.31/24
            gateway4: 192.168.0.1
            nameservers:
                addresses: [168.126.63.1, 168.126.63.2]
            #dhcp4: true
            #optional: truu
    wifis:
        renderer: networkd
        wlan0:
            access-points:
                Miracle_01_5G:
                    hidden: true
                    password: ae51b2561b504c57206cfe90e658c057a192e570c98ac28041507c8c9cf0dfec
            access-points:
                kiro_wifi:
                    hidden: true
                    password: kiro1234
            dhcp4: true
            optional: true
```

+ ROS2 환경 설정(.bashrc)
```
source /opt/ros/humble/setup.bash
source ~/ros2_ws/install/local_setup.bash

source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash
source /usr/share/vcstool-completion/vcs.bash
source /usr/share/colcon_cd/function/colcon_cd.sh
export _colcon_cd_root=~/ros2_ws

export ROS_DOMAIN_ID=7
export ROS_NAMESPACE=robot1

export RMW_IMPLEMENTATION=rmw_fastrtps_cpp
# export RMW_IMPLEMENTATION=rmw_connext_cpp
# export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
# export RMW_IMPLEMENTATION=rmw_gurumdds_cpp

# export RCUTILS_CONSOLE_OUTPUT_FORMAT='[{severity} {time}] [{name}]: {message} ({function_name}() at {file_name}:{line_number})'
export RCUTILS_CONSOLE_OUTPUT_FORMAT='[{severity}]: {message}'
export RCUTILS_COLORIZED_OUTPUT=1
export RCUTILS_LOGGING_USE_STDOUT=0
export RCUTILS_LOGGING_BUFFERED_STREAM=1

alias cw='cd ~/ros2_ws'
alias cs='cd ~/ros2_ws/src'
alias ccd='colcon_cd'

alias cb='cd ~/ros2_ws && colcon build --symlink-install'
alias cbs='colcon build --symlink-install'
alias cbp='colcon build --symlink-install --packages-select'
alias cbu='colcon build --symlink-install --packages-up-to'
alias ct='colcon test'
alias ctp='colcon test --packages-select'
alias ctr='colcon test-result'

alias rt='ros2 topic list'
alias re='ros2 topic echo'
alias rn='ros2 node list'

alias killgazebo='killall -9 gazebo & killall -9 gzserver  & killall -9 gzclient'

alias af='ament_flake8'
alias ac='ament_cpplint'
```
```
sudo vi ~/.bashrc
```
 ROS2 work directory를 "ros_ws"로 설정하며, 이 directory가 변경이 되어 있으면 환경 설정에서 변경된 directory로 수정   
 환경 설정은 ROS2 humble 버전이며 버전 변경시 "humble"에서 변경된 버전으로 수정

+ Ixxat USB to CAN linux driver active
 - ixxat usb to can driver는 socket 형태 드라이버를 다운로드 하여야 함.
 - 링크 : https://forum.hms-networks.com/t/usb-to-canv2-adapter-driver-for-ubuntu-22-04-kernel-5-19-0-38-generic/72083
 - 압축 해제 후 ix_usb_can_2.0.367-MOD 폴더에서 드라이브 설치
```
sudo make all
sudo make install
```
 이후 CAN을 아래와 같이 설치 하여야 함.    
 정상 설치시 ifconfig을 통하여 can0을 확인 하여야 함.
```
sudo ip link set up can0 type can bitrate 1000000
sudo ip link set can0 up
```
 ![image](https://github.com/user-attachments/assets/3e995d4a-b628-4019-89ff-3a06843f7ca8)   
 이 후 can 설정 내용을 .bashrc(리눅스 전역 환경설정 파일)에 등록   

+ Fastech EZ linux driver install
'''

'''
Fastech 홈페이지 다운로드에서 "Plus-E Linux Library" 다운로드   
Fastech library ros 폴더에 복사(해당 CPU 아키텍처에 맞는 라이브러리 선택)
'''
sudo cp -r -v -p libEziMOTIONPlusE.so* /opt/ros/humble/lib
sudo cp -r -v -p libEziMOTIONPlusE.so*/usr/local/lib
sudo ldconfig
'''




+ modprobe: ERROR: could not insert ‘ix_usb_can’: Invalid argument”
```
make clean, make uninstall, restart, make all and make install
```

+ Comfile 과정에서 "root"에러 메시지 발생시 모든 소스의 시간을 현재 시점으로 변경
```
 find . -type f | xargs -n 5 touch
```

+ ros2 build clean
```
sudo apt install python3-colcon-clean
colcon clean workspace
```

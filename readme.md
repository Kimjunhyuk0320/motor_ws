# ROS2 Motor Control Project

이 프로젝트는 ROS2를 기반으로 모터 제어를 수행하는 패키지입니다. CAN 통신을 통해 모터의 속도와 각도를 제어하며, 액션 서버를 통해 비동기적인 제어를 지원합니다.

## 프로젝트 구조

```
.gitignore
.vscode/
src/
  motor_control_interfaces/
    action/
      AngleControl.action
    CMakeLists.txt
    package.xml
  ros2_motor_control/
    launch/
      motor_control.launch.py
    resource/
      ros2_motor_control
    ros2_motor_control/
      angle_increment_action_server.py
      motor_control.py
    test/
      test_copyright.py
      test_flake8.py
      test_pep257.py
    package.xml
    setup.cfg
    setup.py
```

### 주요 구성 요소

- **`motor_control_interfaces`**: ROS2 액션 정의 및 인터페이스 패키지.
  - `AngleControl.action`: 모터의 속도와 각도를 제어하기 위한 액션 정의.
  - `CMakeLists.txt` 및 `package.xml`: ROS2 빌드 및 의존성 관리.

- **`ros2_motor_control`**: 모터 제어 로직 및 실행 가능한 노드 구현.
  - `motor_control.py`: CAN 통신을 통해 모터를 제어하는 노드.
  - `angle_increment_action_server.py`: ROS2 액션 서버를 통해 모터의 각도 증분 제어를 수행.
  - `motor_control.launch.py`: 노드를 실행하기 위한 런치 파일.

## 설치 및 빌드

### 의존성 설치

ROS2 Humble과 Python 의존성이 필요합니다. 아래 명령어를 통해 의존성을 설치하세요.

```bash
sudo apt update
sudo apt install -y python3-colcon-common-extensions python3-pip
pip3 install python-can
```

### 빌드

ROS2 워크스페이스에서 다음 명령어를 실행하여 패키지를 빌드합니다.

```bash
colcon build
```

### 환경 설정

빌드 후, ROS2 환경을 설정합니다.

```bash
source install/setup.bash
```

## 실행 방법

### 모터 제어 노드 실행

아래 명령어를 통해 모터 제어 노드를 실행합니다.

```bash
ros2 launch ros2_motor_control motor_control.launch.py
```

### 액션 서버 실행

`angle_increment_action_server`를 실행하여 모터의 각도 증분 제어를 수행할 수 있습니다.

```bash
ros2 run ros2_motor_control angle_increment_action_server
```

## 주요 기능

### CAN 통신 기반 모터 제어

- `motor_control.py`는 CAN 메시지를 생성 및 전송하여 모터의 속도와 각도를 제어합니다.
- CAN 응답 메시지를 수신하여 모터 상태를 모니터링합니다.

### ROS2 액션 서버

- `angle_increment_action_server.py`는 ROS2 액션 서버를 통해 비동기적인 모터 제어를 지원합니다.
- 액션 요청에 따라 모터의 목표 각도와 속도를 설정하고, 피드백 및 결과를 제공합니다.

#### 액션 서버 호출 예시

아래는 `ros2 action send_goal` 명령어를 사용하여 액션 서버를 호출하는 예시입니다.

```bash
ros2 action send_goal /angle_control motor_control_interfaces/action/AngleControl "{motor_id: 1, speed_dps: 500, angle_deg: 90.0}"
```

- `motor_id`: 제어할 모터의 CAN ID (1~32).
- `speed_dps`: 모터의 회전 속도 (단위: dps).
- `angle_deg`: 이동할 각도 (단위: degree).

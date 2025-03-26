from setuptools import setup  # setuptools를 사용해 패키지 설치 설정
import os  # OS 경로 관련 함수 사용
from glob import glob  # 파일 패턴 매칭을 위해 glob 사용

# 패키지 이름 설정
package_name = 'ros2_motor_control'

# 패키지 설치 설정
setup(
    name=package_name,  # 패키지 이름 설정
    version='0.0.0',  # 패키지 버전
    packages=[package_name],  # 패키지에 포함될 폴더 이름 (my_package)
    data_files=[  # 설치 시 포함할 데이터 파일 설정
        # 패키지 리소스 경로 설정
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),  # resource 폴더에 있는 패키지 정보 파일 포함
        ('share/' + package_name, ['package.xml']),  # 패키지 메타데이터(package.xml)를 설치 경로에 포함
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py'))
        # launch 폴더의 모든 .launch.py 파일을 설치 경로에 포함
    ],
    install_requires=[
        'setuptools',
        'motor_control_interfaces',
        ],  # 설치 시 필요한 의존 패키지 (setuptools 필수)
    zip_safe=True,
    maintainer='junhyuk',
    maintainer_email='kimminuk0320@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'motor_control_node = ros2_motor_control.motor_control:main',
            'angle_increment_action_server = ros2_motor_control.angle_increment_action_server:main',  
            # '이름 = 패키지.모듈:실행할 함수'
        ],
    },
)

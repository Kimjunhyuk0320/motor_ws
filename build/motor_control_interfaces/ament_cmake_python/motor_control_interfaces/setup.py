from setuptools import find_packages
from setuptools import setup

setup(
    name='motor_control_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('motor_control_interfaces', 'motor_control_interfaces.*')),
)

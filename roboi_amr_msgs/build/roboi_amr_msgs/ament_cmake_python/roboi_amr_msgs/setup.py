from setuptools import find_packages
from setuptools import setup

setup(
    name='roboi_amr_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('roboi_amr_msgs', 'roboi_amr_msgs.*')),
)

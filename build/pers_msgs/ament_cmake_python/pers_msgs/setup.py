from setuptools import find_packages
from setuptools import setup

setup(
    name='pers_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('pers_msgs', 'pers_msgs.*')),
)

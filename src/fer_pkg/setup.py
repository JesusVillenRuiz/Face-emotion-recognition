from setuptools import setup
from glob import glob


import os
import sys

virtualenv_path = "/home/giraff-azul2/tfg-villen/tfg_venv/bin/activate"

sys.path.insert(0, os.path.join(virtualenv_path, "lib/python3.10/site-packages"))

package_name = 'fer_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
 	('share/' + package_name + '/launch', glob('launch/*.py')),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='giraff-azul2',
    maintainer_email='jesusvillenruiz2001@gmail.com',
    description='TODO: Package description',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'my_node = fer_pkg.my_node:main',
            'Face_detector_node = fer_pkg.Face_detector_node:main',
            'Emotion_detector_node = fer_pkg.Emotion_detector_node:main',
            'TelegramNode = fer_pkg.TelegramNode:main'
        ],
    },
)

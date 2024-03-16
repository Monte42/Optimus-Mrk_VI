from setuptools import find_packages, setup

package_name = 'optimus_description'

setup(
    name=package_name,
    version='6.3.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Gary DuMond',
    maintainer_email='garyd@legendgary.com',
    description='Robot: Optimus/Camera/Range/Controller Nodes',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "optimus_pi = optimus_description.optimus_pi_node:main",
            "ultra_sonic_sensor = optimus_description.ultra_sonic_sensor_node:main",
            "motor_driver = optimus_description.motor_driver_node:main",
            "ps4_controller = optimus_description.ps4_controller_node:main",
            "camera = optimus_description.camera_node:main",
        ],
    },
)

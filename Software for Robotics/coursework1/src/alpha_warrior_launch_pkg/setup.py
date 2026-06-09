import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'alpha_warrior_launch_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='student48',
    maintainer_email='student48@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
        'alpha_warrior_node = alpha_warrior_pkg.alpha_warrior_node:main',
        'alpha_warrior_controller_node = alpha_warrior_controller_pkg.alpha_warrior_controller_node: main'
        ],
    },
)

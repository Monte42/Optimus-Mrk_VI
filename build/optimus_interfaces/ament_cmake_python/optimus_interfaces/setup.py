from setuptools import find_packages
from setuptools import setup

setup(
    name='optimus_interfaces',
    version='6.3.0',
    packages=find_packages(
        include=('optimus_interfaces', 'optimus_interfaces.*')),
)

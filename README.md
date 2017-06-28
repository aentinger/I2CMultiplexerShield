LXRobotics P19 I2C Multiplexer Shield
=====================================

[![License: CC BY-NC-SA 4.0](https://img.shields.io/badge/License-CC%20BY--NC--SA%204.0-lightgrey.svg)](http://creativecommons.org/licenses/by-nc-sa/4.0/)

# Image

![LXRobotics P19 I2C Multiplexer Shield](https://raw.githubusercontent.com/lxrobotics/I2CMultiplexerShield/master/images/i2c-multiplexer-shield-side-small.jpg)

# Description

Originally many I2C slave devices as temperature sensors, distance sensors, RAM/ROM, digital I/O expanders had only a single I2C address. As a consequence, only one such I2C slave could be operated on one I2C. If one wanted to operate multiple I2C slaves with identical address, multiple I2C buses with its own I2C master were necessary. To overcome this limitation, modern I2C slaves have a base address, which can be varied by setting of '0' and '1' on special address pins. Thereby, typically between 4 and 8 different addresses are required per I2C slave. But if onw would want to use more than the addresses offered by the I2C slave device, so again several I2C buses with its own I2C master are necessary.

The LXRobotics I2C Multiplexer Shield solves this problem by allowing the user to switch back and forth between 8 different I2C bus systems. The I2C Multiplexer Shield acts also as a level converter, so that 3,3 V I2C sensors can easily interact with the Arduino. For the quick start, a finished Arduino Library with sample programs is available

**Features**

* Control nearly any number of (similar) sensors over a single I2C bus
* Multiplexing of 8 different I2C buses on 1 I2C bus
* I2C-Pullups via Jumper shiftable
* Selection of the I2C bus voltage between 5 V and 3,3 V via jumper possible (optionally, can be also fed any arbitrary I2C bus voltage)
* Up to 8 different I2C addresses of the I2C Multiplexer Shields configurable via jumper
* Arduino Library available for control with example programms

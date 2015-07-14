/**
 * @author Alexander Entinger, MSc / LXRobotics
 * @brief this module implements the library for controlling the LXRobotics I2C Multiplexer Shield for switching between up to 8 separate i2c busses
 * @file LxrI2cMultiplexerShield.cpp
 * @license Attribution-NonCommercial-ShareAlike 4.0 Unported (CC BY-NC-SA 4.0) ( http://creativecommons.org/licenses/by-nc-sa/4.0/ )
 */
 
#include "LxrI2cMultiplexerShield.h"
 
#include <Wire.h>

/**
 * @brief Constructor
 */
LxrI2cMultiplexerShield::LxrI2cMultiplexerShield(byte const i2c_multiplexer_address) : _i2c_multiplexer_address(i2c_multiplexer_address)
{
    
}

/**
 * @brief initializes the library
 */
void LxrI2cMultiplexerShield::begin()
{
  Wire.begin();
}

/**
 * @brief select a specific channel
 */
void LxrI2cMultiplexerShield::set_channel(E_I2C_CHANNEL_SELECT const sel)
{
  Wire.beginTransmission(_i2c_multiplexer_address);
  Wire.write((byte)(sel));
  Wire.endTransmission();
}

/**
 * @brief reads out the current selected channel
 */
E_I2C_CHANNEL_SELECT LxrI2cMultiplexerShield::get_channel()
{
  Wire.requestFrom(_i2c_multiplexer_address, (byte)(1));
  return (E_I2C_CHANNEL_SELECT)(Wire.read());
}
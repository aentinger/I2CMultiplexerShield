/**
 * @author Alexander Entinger, MSc / LXRobotics
 * @brief this module implements the library for controlling the LXRobotics I2C Multiplexer Shield for switching between up to 8 separate i2c busses
 * @file LxrI2cMultiplexerShield.h
 * @license Attribution-NonCommercial-ShareAlike 4.0 Unported (CC BY-NC-SA 4.0) ( http://creativecommons.org/licenses/by-nc-sa/4.0/ )
 */

#ifndef LXRI2CMULTIPLEXERSHIELD_H_
#define LXRI2CMULTIPLEXERSHIELD_H_
 
 /* INCLUDES */
 
#include "Arduino.h"

/* GLOBAL CONSTANTS */

static byte const I2C_MULTIPLEXER_SHIELD_NO_JUMPERS_SET = 0x70;
static byte const I2C_MULTIPLEXER_SHIELD_ALL_JUMPERS_SET = 0x77;

/* TYPEDEFS */

typedef enum
{
  I2C_CHANNEL_0 = 0b00001000,
  I2C_CHANNEL_1 = 0b00001001,
  I2C_CHANNEL_2 = 0b00001010,
  I2C_CHANNEL_3 = 0b00001011,
  I2C_CHANNEL_4 = 0b00001100,
  I2C_CHANNEL_5 = 0b00001101,
  I2C_CHANNEL_6 = 0b00001110,
  I2C_CHANNEL_7 = 0b00001111,
  I2C_NO_CHANNEL = 0b00000000
} E_I2C_CHANNEL_SELECT;

/* PROTOTYPES */

class LxrI2cMultiplexerShield
{
	
public:

  /**
   * @brief Constructor
   */
  LxrI2cMultiplexerShield(byte const i2c_multiplexer_address);

  /**
   * @brief initializes the library
   */
  void begin();

  /**
   * @brief select a specific channel
   */
  void set_channel(E_I2C_CHANNEL_SELECT const sel);

  /**
   * @brief reads out the current selected channel
   */
  E_I2C_CHANNEL_SELECT get_channel();  

private:

  byte _i2c_multiplexer_address;
  
};

#endif
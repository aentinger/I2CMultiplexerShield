/**
 * @author Alexander Entinger, MSc / LXRobotics
 * @brief this file demonstrates how to use the LXRobotics I2C Multiplexer Shield Library
 * @file i2c_multiplexer_shield_demo.ino
 * @license Attribution-NonCommercial-ShareAlike 4.0 Unported (CC BY-NC-SA 4.0) ( http://creativecommons.org/licenses/by-nc-sa/4.0/ )
 */

/* INCLUDES */ 

#include <Wire.h>

#include "LxrI2cMultiplexerShield.h"

/* GLOBAL VARIABLES */

// instantiate instance of i2c multiplexer shield
LxrI2cMultiplexerShield I2cMultiplexerShield(I2C_MULTIPLEXER_SHIELD_NO_JUMPERS_SET);

/* PROTOTYPES */

void test_channel(E_I2C_CHANNEL_SELECT const sel);
void print_channel_sel(E_I2C_CHANNEL_SELECT const sel);

void setup() 
{
  // initialize the i2c multiplexer shield library
  I2cMultiplexerShield.begin();

  // initialize the serial library
  Serial.begin(115200);

  // test setting and getting of each channel
  test_channel(I2C_NO_CHANNEL);
  test_channel(I2C_CHANNEL_0);
  test_channel(I2C_CHANNEL_1);
  test_channel(I2C_CHANNEL_2);
  test_channel(I2C_CHANNEL_3);
  test_channel(I2C_CHANNEL_4);
  test_channel(I2C_CHANNEL_5);
  test_channel(I2C_CHANNEL_6);
  test_channel(I2C_CHANNEL_7);
}

void loop() 
{
  
}

/**
 * @brief tests each channel
 */
void test_channel(E_I2C_CHANNEL_SELECT const sel)
{
  Serial.print("Setting ");
  print_channel_sel(sel);
  Serial.println("");
  I2cMultiplexerShield.set_channel(sel);

  E_I2C_CHANNEL_SELECT const current_channel = I2cMultiplexerShield.get_channel();
  Serial.print("Getting ");
  print_channel_sel(current_channel);
  Serial.println("");

  Serial.println("");

  delay(100);
}

/**
 * @brief prints the channel selection to the serial
 */
void print_channel_sel(E_I2C_CHANNEL_SELECT const sel)
{
  switch(sel)
  {
    case I2C_NO_CHANNEL: Serial.print("No Channel"); break;
    case I2C_CHANNEL_0: Serial.print("Channel 0"); break;
    case I2C_CHANNEL_1: Serial.print("Channel 1"); break;
    case I2C_CHANNEL_2: Serial.print("Channel 2"); break;
    case I2C_CHANNEL_3: Serial.print("Channel 3"); break;
    case I2C_CHANNEL_4: Serial.print("Channel 4"); break;
    case I2C_CHANNEL_5: Serial.print("Channel 5"); break;
    case I2C_CHANNEL_6: Serial.print("Channel 6"); break;
    case I2C_CHANNEL_7: Serial.print("Channel 7"); break;
    default: break;
  }
}


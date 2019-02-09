/* 
 *  Digital Manufacturing Homework Sensor Programming Part 1
 *  Objective: Data collection and USB serial transmission
 *  Required Hardware:
 *  *   Teensy 3.2 
 *  *   DS3231 RTC (I2C 0x68)
 *  *   ADXL335 +/-3g Accelerometer
 *  *   MPU-9250 IMU (I2C 0x69) - Requires AD0 to VDD jumper and SJ2 jumped left
 *  Last updated Jan 2019
 */
#include<i2c_t3.h>
#include "RTClib.h"
#include "MPU9250.h"

RTC_DS3231 rtc;
MPU9250 myIMU;

//Initialize variables here

void setup() {
  // Code placed here will run once on startup
}

void loop() {
  // Code placed here will continuously loop after startup
}


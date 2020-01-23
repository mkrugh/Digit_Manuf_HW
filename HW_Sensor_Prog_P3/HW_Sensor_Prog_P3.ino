/* 
 *  Digital Manufacturing Homework Sensor Programming Part 3
 *  Objective: Motion and rotation tracking
 *  Required Hardware:
 *  *   Teensy 3.2 
 *  *   DS3231 RTC (I2C 0x68)
 *  *   ADXL335 +/-3g Accelerometer
 *  *   MPU-9250 IMU (I2C 0x69) - Requires AD0 to VDD jumper and SJ2 jumped left to use address 0x69 (Already complete on provided hardware)
 *  Last updated Jan 2020
 */
#include<i2c_t3.h> //Replaces Wire.h
#include "RTClib.h" //Real-time clock library
#include "MPU9250.h" //IMU library

RTC_DS3231 rtc;
MPU9250 myIMU;

//Initialize variables here

void setup() {
  // Code placed here will run once on startup
}

void loop() {
  // Code placed here will continuously loop after startup
}


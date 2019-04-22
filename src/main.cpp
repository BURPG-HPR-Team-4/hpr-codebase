#include <Arduino.h>
#include <hpr.h>
// #include <stdio.h>
// #include <iostream>
// #include <avr/io.h>

// #include <stdlib.h>
// #include <usb_serial.h>
#include <stdio.h>
#include <string>
// #include "rawhid.h"
// #include <SoftwareSerial.h>
#include <MPU6050.h>

/*
List of sensors
- Stratologger
- Accelerometer
- Barometer
*/


#define LOOP_WAIT 50


#define LED_PIN 13

// keep track of stuff globally
float altitude; // meters
float velocity; // m/s

int drogueDeployed;
int mainDeployed;

// accelgyro
MPU6050 accelgyro; // should use 18/19 for I2C?
int16_t * ax, * ay, * az;
int16_t * gx, * gy, * gz;

void setup() {
    Serial.begin (9600); // Teensy does not use Serial? jk
    drogueDeployed = false;
    mainDeployed = false;
    // initialize all sensors
    // initialize all variables
    // open log file
    pinMode(LED_PIN, OUTPUT);
    Serial.println("hi");
    // printf("Heyo");
    accelgyro.initialize();
}

void loop() {
    //1. read sensors
        // functionToReadAllSensorsAndUpdateGlobalVars();
    readAccelerometer(accelgyro, ax, ay, az, gx, gy, gz); 
        // (altitude and acceleration written into buffers)
    //2. log
    // logData();
    //3. determine what other stuff needs to happen
        //3a. deploy chutes?
        //3b. transmit data?
    // digitalWrite(LED_PIN, LOW);
    // delay(LOOP_WAIT);
    // digitalWrite(LED_PIN, HIGH);
    // delay(LOOP_WAIT);
    // Serial.println("hi");
}
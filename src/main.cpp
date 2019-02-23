#include <Arduino.h>
#include <hpr.h>
#include <stdio.h>
#include <iostream>

/*
List of sensors
- Stratologger
- Accelerometer
- Barometer
*/


#define LOOP_WAIT 50

// keep track of stuff globally
float altitude; // meters
float velocity; // m/s

void setup() {
  drogueDeployed = false;
  mainDeployed = false;
  // initialize all sensors
  // initialize all variables
  // open log file
}

void loop() {
  //1. read sensors
    // functionToReadAllSensorsAndUpdateGlobalVars();
    // (altitude and acceleration written into buffers)
  //2. log
  logData();
  //3. determine what other stuff needs to happen
    //3a. deploy chutes?
    //3b. transmit data?
  
  delay(LOOP_WAIT);
}
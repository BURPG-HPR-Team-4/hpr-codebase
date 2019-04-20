#include <Arduino.h>
#include <hpr.h>
// #include <stdio.h>
// #include <iostream>
#include <avr/io.h>

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

void setup() {
    // Serial.begin (9600);
    drogueDeployed = false;
    mainDeployed = false;
    // initialize all sensors
    // initialize all variables
    // open log file
    pinMode(LED_PIN, OUTPUT);
    // Serial.println("hi");
}

void loop() {
    //1. read sensors
        // functionToReadAllSensorsAndUpdateGlobalVars();
        // (altitude and acceleration written into buffers)
    //2. log
    // logData();
    //3. determine what other stuff needs to happen
        //3a. deploy chutes?
        //3b. transmit data?
    digitalWrite(LED_PIN, LOW);
    delay(LOOP_WAIT);
    digitalWrite(LED_PIN, HIGH);
    delay(LOOP_WAIT);
}
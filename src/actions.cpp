#include <Arduino.h>
#include <hpr.h>
// #include <chrono>
// #include <stdio.h>
#include <string>
using namespace std;

int writeToSD(string str) {
    // writes to SD card, returns true if it could write
    return false;
}

void logData() {
    // log data with timestamp, write to sd card
    // current values of sensor readouts are global
    // this is for the regular logging
}

void logAction(string s) {
    // this is for logging special events like chute deployment
    // add timestamp to the string
    writeToSD(s); // write the string with the timestamp
    return;
}

void deployDrogueChute() {
    // somehow do some checking that it worked
    drogueDeployed = true;
    logAction("Drogue chute deployed");
}

void deployMainChute() {
    // after checking it worked,
    mainDeployed = true;
    logAction("Main chute deployed");
}

void transmit() {
    // send data through tx to laptop
    // json?
}

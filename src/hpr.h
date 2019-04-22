// #ifndef HEADER_MAIN
// #define HEADER_MAIN
#include <Arduino.h>
#include <string> // ide can't decide if this exists
#include <MPU6050.h>
using namespace std;

// for sensors
int readAccelerometer(MPU6050 accelgyro, int16_t * ax, int16_t * ay, int16_t * az, int16_t * gx, int16_t * gy, int16_t * gz);
int readStratologger();
int readBarometer();


// for data_processing
void checkDrogueChuteDeployment();
void checkMainChuteDeployment();


// for actions
void logAction(string s);
void logData();
void deployDrogueChute();
void deployMainChute();
void transmit();
int writeToSD(string str);


// for model
// (nothing yet)


extern int drogueDeployed;
extern int mainDeployed;

// #endif
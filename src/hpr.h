// #ifndef HEADER_MAIN
// #define HEADER_MAIN
#include <Arduino.h>
#include <string> // ide can't decide if this exists
using namespace std;

// for sensors
int readAccelerometer();
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
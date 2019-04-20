// #ifndef HEADER_MAIN
// #define HEADER_MAIN

// #include <string>
// using namespace std;

// for sensors
int readAccelerometer();
int readStratologger();
int readBarometer();


// for data_processing
void checkDrogueChuteDeployment();
void checkMainChuteDeployment();


// for actions
void logAction(char* s);
void logData();
void deployDrogueChute();
void deployMainChute();
void transmit();
int writeToSD(char* str);


// for model
// (nothing yet)


extern int drogueDeployed;
extern int mainDeployed;

// #endif
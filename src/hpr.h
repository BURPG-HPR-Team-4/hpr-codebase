// #ifndef HEADER_MAIN
// #define HEADER_MAIN


// for sensors
int readAccelerometer();
int readStratologger();
int readBarometer();


// for data_processing
void checkDrogueChuteDeployment();
void checkMainChuteDeployment();


// for actions
void deployDrogueChute();
void deployMainChute();
void logData();
void logAction(String s);
void transmit();
bool writeSD();


// for model
// (nothing yet)


extern bool drogueDeployed;
extern bool mainDeployed;

// #endif
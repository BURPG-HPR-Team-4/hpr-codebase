#include <Arduino.h>
#include <hpr.h>

void checkDrogueChuteDeployment() {
    bool shouldDeploy = false;
    // determine whether to start chute deployment process
    // using sensor data buffers
    if (shouldDeploy) {
        deployDrogueChute();
    }
}

void checkMainChuteDeployment() {
    bool shouldDeploy = false;
    // determine whether to start chute deployment process
    // using sensor data buffers
    if (shouldDeploy) {
        deployMainChute();
    }
}
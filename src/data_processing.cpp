#include <Arduino.h>
#include <hpr.h>

void checkDrogueChuteDeployment() {
    int shouldDeploy = 0;
    // determine whether to start chute deployment process
    // using sensor data buffers
    if (shouldDeploy) {
        deployDrogueChute();
    }
}

void checkMainChuteDeployment() {
    int shouldDeploy = 0;
    // determine whether to start chute deployment process
    // using sensor data buffers
    if (shouldDeploy) {
        deployMainChute();
    }
}
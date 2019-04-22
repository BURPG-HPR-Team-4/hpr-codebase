#include <Arduino.h>
#include <hpr.h>
#include <MPU6050.h>

int readAccelerometer(MPU6050 accelgyro, int16_t * ax, int16_t * ay, int16_t * az, int16_t * gx, int16_t * gy, int16_t * gz) { // read into a buffer
    accelgyro.getMotion6(ax, ay, az, gx, gy, gz);
    return 0;
}

int readStratologger() {
    return 0;
}

int readBarometer() {
    return 0;
}

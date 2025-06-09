/** @file constants.h
    @brief A Documented file.
    
    Here declare all constant variables
    For schematic please refer to:
    For additional pin functionality refer to:

*/

#ifndef CONSTANTS_H
#define CONSTANTS_H

#define VERSION 1

#define ID 1

#define ADC_RESOLUTION 12

#define R_SENSE 0.075f

#define NUMBER_OF_JOINTS 6

#define MICROSTEP 32

#define MOTOR1_MAX_CURRENT 2000 // Max 2100
#define MOTOR2_MAX_CURRENT 2000 // Max 2100
#define MOTOR3_MAX_CURRENT 1900 // Max 2000
#define MOTOR4_MAX_CURRENT 1700 // Max 2000 but since the motors are enclosed reduce it
#define MOTOR5_MAX_CURRENT 1700 // Max 2000 but since the motors are enclosed reduce it
#define MOTOR6_MAX_CURRENT 965 // Max 1000

#endif

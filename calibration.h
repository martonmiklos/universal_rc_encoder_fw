#ifndef CALIBRATION_H
#define CALIBRATION_H

#include "adc.h"
#include "interrupt.h"
#include "stdint.h"

void initCalibration(void);
void calibrationCycle(void);

void saveCalibration(void);
void loadCalibration(void);

#define LINEARIZED_MIN 0
#define LINEARIZED_MAX 99
#define LINEARIZED_CENTER ((LINEARIZED_MAX - LINEARIZED_MIN) >> 1)

#define THROTTLE_CHANNEL 0
#define STEER_CHANNEL 1

#define DEADZONE 0.1

#define STEER_LEFT_MAX (LINEARIZED_CENTER - (LINEARIZED_CENTER * DEADZONE))
#define STEER_RIGHT_MIN (LINEARIZED_CENTER + (LINEARIZED_CENTER * DEADZONE))

#define BACKWARD_MAX (LINEARIZED_CENTER - (LINEARIZED_CENTER * DEADZONE))
#define FORWARD_MIN (LINEARIZED_CENTER + (LINEARIZED_CENTER * DEADZONE))

uint8_t linearizedValue(uint8_t channel);

#endif // CALIBRATION_H

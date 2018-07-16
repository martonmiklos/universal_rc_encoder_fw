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

uint8_t linearizedValue(uint8_t channel);

#endif // CALIBRATION_H

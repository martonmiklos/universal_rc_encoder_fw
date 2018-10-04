#include "calibration.h"

#include "eeprom.h"

static uint16_t adcMin[ADC_CHANNEL_COUNT];
static uint16_t adcMax[ADC_CHANNEL_COUNT];
static uint16_t adcCenter[ADC_CHANNEL_COUNT];

// from adc.c
extern uint16_t adcData[ADC_CHANNEL_COUNT];
extern uint8_t adcScanCompleteFlag;

void initCalibration()
{
    uint8_t i = 0;
    for (i = 0; i<ADC_CHANNEL_COUNT; i++) {
        adcMin[i] = UINT16_MAX;
        adcMax[i] = 0;
    }
}

void calibrationCycle(void)
{
    uint8_t i = 0;
    if (adcScanCompleteFlag) {
        for (i = 0; i<ADC_CHANNEL_COUNT; i++) {
            if (adcData[i] < adcMin[i]) {
                adcMin[i] = adcData[i];
            }

            if (adcMax[i] < adcData[i]) {
                adcMax[i] = adcData[i];
            }
        }
        adcScanCompleteFlag = 0;
    }
}

void loadCalibration()
{
    uint16_t eeAddr = 0;
    uint8_t i = 0;
    for (i = 0; i<ADC_CHANNEL_COUNT; i++) {
        adcMin[i] = EEReadU16(eeAddr);
        eeAddr += 2;
        adcCenter[i] = EEReadU16(eeAddr);
        eeAddr += 2;
        adcMax[i] = EEReadU16(eeAddr);
        eeAddr += 2;
    }
}

void saveCalibration()
{
    uint16_t eeAddr = 0;
    uint8_t i = 0;
    for (i = 0; i<ADC_CHANNEL_COUNT; i++) {
        adcCenter[i] = adcData[i];

        EEWriteU16(eeAddr, adcMin[i]);
        eeAddr += 2;
        EEWriteU16(eeAddr, adcCenter[i]);
        eeAddr += 2;
        EEWriteU16(eeAddr, adcMax[i]);
        eeAddr += 2;
    }
}

/**
 * @brief linearizedValue
 * Calculates the given potentiometer value to the 0-99 range
 * @param channel
 * @return
 */
uint8_t linearizedValue(uint8_t channel)
{
    if (adcMin[channel] < adcMax[channel]) {

    } else {

    }
    return 0;
}



#include "c1069c.h"
#include "calibration.h"
#include "init.h"
#include "hwconfig.h"

uint16_t signalBuffer[48];
uint8_t signalCnt;
uint8_t refreshSignal = 1;

typedef enum {
    EmulatorMode_C1069,
    EmulatorMode_PPM 
} EmulatorMode_t;
EmulatorMode_t emulatorMode = EmulatorMode_C1069;

int main(void)
{
    uint8_t bufferIndex = 0;
    HW_Init();

    GlobalInterruptEnable();

    if (CAL_SWITCH == 0) {
        // we start with a calibration session
        initCalibration();
        while (CAL_SWITCH == 0) {
            calibrationCycle();
        }
        saveCalibration();
    } else {
        loadCalibration();
    }

    while (1) {    
        if (refreshSignal) {
            switch (emulatorMode) {
            case EmulatorMode_C1069:
                C1069C_calculateBuffer();
                break;
            default:
                break;
            }

            bufferIndex = 0;
            TIM1_CR1_bits.CEN = 1;
            while (bufferIndex < signalCnt) {
                ENCODED_SIGNAL = !ENCODED_SIGNAL;
                TIM2_ARRH = (UINT16_MAX - (signalBuffer[bufferIndex] >> 8));
                TIM2_ARRL = (UINT16_MAX - (signalBuffer[bufferIndex] & 0xFF));
                TIM2_CR1_bits.CEN = 1;

                while (signalCnt) {

                }
                bufferIndex++;
            }
            ENCODED_SIGNAL = 0;
            refreshSignal = 0;
        }
    } // main while

}


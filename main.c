#include "c1069c.h"
#include "calibration.h"
#include "delay.h"
#include "emulator.h"
#include "init.h"
#include "hwconfig.h"

uint16_t signalBuffer[48];
uint16_t *signalPtr = signalBuffer;
uint8_t refreshSignal = 1;

EmulatorMode_t emulatorMode = EmulatorMode_C1069;

int main(void)
{
    HW_Init();

    /*PD_DDR = 255;
    while (1) {
        PD_ODR_bits.ODR3 = 0;
        __delay_ms(1000);
        PD_ODR_bits.ODR3 = 1;
        __delay_ms(1000);
    }*/

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

			signalPtr = signalBuffer;
            while (*signalPtr != 0) {
                ENCODED_SIGNAL = !ENCODED_SIGNAL;
				TIM2_CNTRL = ((UINT16_MAX - (*signalPtr)) & 0xFF);
                TIM2_CNTRH = ((UINT16_MAX - (*signalPtr)) >> 8);
				TIM2_SR1_bits.UIF = 0;
                TIM2_CR1_bits.CEN = 1;
                while (!TIM2_SR1_bits.UIF) {
				    NOP();
				}
                signalPtr++;
            }
            ENCODED_SIGNAL = 0;
            refreshSignal = 0;
			TIM1_SR1_bits.UIF = 0;
            TIM1_CR1_bits.CEN = 1;
        }
    } // main while

}


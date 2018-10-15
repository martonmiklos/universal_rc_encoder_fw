#include "c1069c.h"
#include "calibration.h"
#include "delay.h"
#include "emulator.h"
#include "init.h"
#include "hwconfig.h"
#include "ppm.h"
#include "tx2.h"

uint16_t signalBuffer[SIGNALBUFFER_SIZE] = {0};
uint16_t *signalPtr = signalBuffer;
uint8_t refreshSignal = 1;
EmulatorMode_t emulatorMode = EmulatorMode_C1069;

extern volatile uint8_t adcScanCompleteFlag;
extern ADC_CH_t currentADCChannel;

void main(void)
{
    HW_Init();

    GlobalInterruptEnable();

    if (CAL_SWITCH == 0) {
        // we start with a calibration session
        initCalibration();
        while (CAL_SWITCH == 0) {
			startADC_Cycle();
			while (!adcScanCompleteFlag) {}
            calibrationCycle();
        }
        saveCalibration();
    } else {
        loadCalibration();
    }

    while (1) {    
        if (refreshSignal) {
			startADC_Cycle();
			while (!adcScanCompleteFlag) {}
            switch (emulatorMode) {
            case EmulatorMode_C1069:
                C1069C_calculateBuffer();
                break;
			case EmulatorMode_PPM:
				PPM_calculateBuffer();
				break;
			case EmulatorMode_TX2:
				TX2_calculateBuffer();
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
				TIM2_CR1_bits.CEN = 0;
                signalPtr++;
            }
            ENCODED_SIGNAL = 1;
            refreshSignal = 0;
			TIM1_SR1_bits.UIF = 0;
			TIM1_CNTRL = 0;
			TIM1_CNTRH = 0;
            TIM1_CR1_bits.CEN = 1;
        }
    } // main while

}


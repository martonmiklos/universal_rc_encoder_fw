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

extern volatile uint8_t adcScanCompleteFlag;
extern ADC_CH_t currentADCChannel;

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

    /*if (CAL_SWITCH == 0) {
        // we start with a calibration session
        initCalibration();
        while (CAL_SWITCH == 0) {
            calibrationCycle();
        }
        saveCalibration();
    } else {
        //loadCalibration();
    }*/

    while (1) {    
        if (refreshSignal) {
			adcScanCompleteFlag = 0;

			currentADCChannel = ADC_CH0;

			// disable the ADC just in case!
			ADC_CR1_bits.ADON = 0;
		
			// set channel
			ADC_CSR_bits.CH = (currentADCChannel + 2);
		
			// clear the flag
			ADC_CSR_bits.EOC = 0;
		
			//power up ADC
			ADC_CR1_bits.ADON = 1;
		
			// write one again to start the conversion
			ADC_CR1_bits.ADON = 1;
			while (!adcScanCompleteFlag) {}
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


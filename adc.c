#include "adc.h"

ADC_CH_t currentADCChannel = 0;

uint16_t adcData[ADC_CHANNEL_COUNT];

volatile uint8_t adcScanCompleteFlag = 0;

void startADC_Cycle(void)
{
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
}

@far @interrupt void ADC_CompleteISR(void)
{
	// clear the flag
    ADC_CSR_bits.EOC = 0;
	
    // read order is important!!
    adcData[currentADCChannel]  =  ADC_DRL;
    adcData[currentADCChannel] |= (ADC_DRH << 8);

    currentADCChannel++;
    if (currentADCChannel == ADC_CHANNEL_COUNT) {
        currentADCChannel = ADC_CH0;
        adcScanCompleteFlag = 1;
		return;
    }

    // disable the ADC just in case!
    ADC_CR1_bits.ADON = 0;

    // set channel
    ADC_CSR_bits.CH = (currentADCChannel + 2); // ADC_IN0,1 not accessible

    //power up ADC
    ADC_CR1_bits.ADON = 1;

    // write one again to start the conversion
    ADC_CR1_bits.ADON = 1;
}

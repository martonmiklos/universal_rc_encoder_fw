#include "adc.h"


ADC_CH_t currentADCChannel = 0;

uint16_t adcData[ADC_CHANNEL_COUNT];

uint8_t adcScanCompleteFlag = 0;

void ADC_CompleteISR(void)  __interrupt(ADC1_EOC_vector)
{
    // read order is important!!
    adcData[currentADCChannel]  =  ADC_DRL;
    adcData[currentADCChannel] |= (ADC_DRH << 8);

    currentADCChannel++;
    if (currentADCChannel == ADC_CHANNEL_COUNT) {
        currentADCChannel = ADC_CH0;
        adcScanCompleteFlag = 1;
    }

    // disable the ADC just in case!
    ADC_CR1_bits.ADON = 0;

    // set channel
    ADC_CSR_bits.CH = (currentADCChannel + 1); // AIN0 is not accessible on STM8S003F3

    // clear the flag
    ADC_CSR_bits.EOC = 0;

    //power up ADC
    ADC_CR1_bits.ADON = 1;

    // write one again to start the conversion
    ADC_CR1_bits.ADON = 1;
}

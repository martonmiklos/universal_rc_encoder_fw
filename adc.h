#ifndef ADC_H
#define ADC_H

#include "iostm8s003f3.h"
#include "stdint.h"

#define ADC_CHANNEL_COUNT 5
typedef enum {
    ADC_CH0,
    ADC_CH1,
    ADC_CH2,
    ADC_CH3,
    ADC_CH4
} ADC_CH_t;

void ADC_CompleteISR(void) __interrupt(ADC1_EOC_vector);

uint8_t isADCScanCompleted(void);

#endif // ADC_H

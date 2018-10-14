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

void startADC_Cycle(void);
@far @interrupt void ADC_CompleteISR(void);

uint8_t isADCScanCompleted(void);

#endif // ADC_H

#include "interrupt.h"

#include "adc.h"
#include "delay.h"
#include "iostm8s003f3.h"
#include "stdint.h"

extern uint8_t refreshSignal;

@far @interrupt void NonHandledInterrupt(void)
{
    /* in order to detect unexpected events during development,
       it is recommended to set a breakpoint on the following instruction
    */
    while (1) {
        RED_LED = !RED_LED;
        __delay_ms(100);
    }
    return;
}

@far @interrupt void Timer1_OVF_ISR(void)
{
	TIM1_SR1_bits.UIF = 0;
    refreshSignal = 1;
}

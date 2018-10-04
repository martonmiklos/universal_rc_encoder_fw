#ifndef HWCONFIG_STM8_H
#define HWCONFIG_STM8_H

// NEVER EVER WANT TO INCLUDE COSMIC's iostm8s.h header!!!!
// there are register address mismatches in it
#include "iostm8s003f3.h"

#include "stdint.h"

#define F_CPU 16000000UL

#define GlobalInterruptEnable()  { _asm("rim");}
#define GlobalInterruptDisable() { _asm("sim");}
#define NOP() {_asm("nop");}

#define RED_LED                                 PA_ODR_bits.ODR3
#define RED_LED_port                            PA_ODR
#define RED_LED_port_mask                       (1<<3)

#define ENCODED_SIGNAL                          PD_ODR_bits.ODR4
#define ENCODED_SIGNAL_port                            PD_ODR
#define ENCODED_SIGNAL_port_mask                       (1<<4)

#define CAL_SWITCH                                 PA_IDR_bits.IDR1
#define CAL_SWITCH_port                            PA_IDR
#define CAL_SWITCH_port_mask                       (1<<4)

#define BTN0                                 PC_IDR_bits.IDR3
#define BTN0_port                            PC_IDR
#define BTN0_port_mask                       (1<<3)

#define BTN1                                 PC_IDR_bits.IDR5
#define BTN1_port                            PC_IDR
#define BTN1_port_mask                       (1<<5)

#define BTN2                                 PC_IDR_bits.IDR6
#define BTN2_port                            PC_IDR
#define BTN2_port_mask                       (1<<6)

#define BTN3                                 PC_IDR_bits.IDR7
#define BTN3_port                            PC_IDR
#define BTN3_port_mask                       (1<<7)


#define TIMER1_TOP 40000

#endif // HWCONFIG_H


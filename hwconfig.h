#ifndef HWCONFIG_STM8_H
#define HWCONFIG_STM8_H

// NEVER EVER WANT TO INCLUDE COSMIC's iostm8s.h header!!!!
// there are register address mismatches in it
#include "iostm8s003f3.h"

#include "stdint.h"

#define F_CPU 16000000UL

#define _asm(code) __asm__(code)

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

#endif // HWCONFIG_H


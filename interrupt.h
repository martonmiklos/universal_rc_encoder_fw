/* 
 * File:   interrupt.h
 * Author: erdeicsaba
 *
 * Created on 2014. július 8., 10:08
 */

#ifndef INTERRUPT_H
#define	INTERRUPT_H

#include "iostm8s003f3.h"

#ifdef	__cplusplus
extern "C" {
#endif

void RX_IOC(void) __interrupt(TIM2_CAPCOM_CC1IF_vector);

#ifdef	__cplusplus
}
#endif

#endif	/* INTERRUPT_H */


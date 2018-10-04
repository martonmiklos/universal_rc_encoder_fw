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

@far @interrupt void Timer1_OVF_ISR(void);

#ifdef	__cplusplus
}
#endif

#endif	/* INTERRUPT_H */


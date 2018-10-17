#include "delay.h"

#include "hwconfig.h"


/*
 * Func delayed N cycles, where N = 3 + ( ticks * 3 )
 * so, ticks = ( N - 3 ) / 3, minimum delay is 6 CLK
 * when tick = 1, because 0 equals 65535
 */


void __delay_cycl(const uint16_t ticks)
{
    // ldw X, __ticks ; insert automaticaly
    _asm("nop\n $N:\n decw X\n jrne $L\n nop\n ", ticks);
}

void __delay_us(const uint16_t us)
{
    __delay_cycl( (unsigned short)( T_COUNT(us) ));
}


void __delay_ms(uint16_t ms)
{
    while (ms--) {
        __delay_us(1000);
    }
}


#include "ppm.h"

#include "calibration.h"
#include "stdint.h"

extern uint16_t signalBuffer[48];
extern uint16_t *signalPtr;

void PPM_calculateBuffer(void)
{
    // PPM is dead simple: 
	// 1000-2000 us per channel
	uint8_t i = 0;
	for (; i<ADC_CHANNEL_COUNT; i++) {
		*signalPtr = 1000 + (linearizedValue(i) * 10);
        signalPtr++;
	}
	*signalPtr = 0;
}

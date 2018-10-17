#include "ppm.h"

#include "calibration.h"
#include "emulator.h"
#include "stdint.h"

extern uint16_t signalBuffer[SIGNALBUFFER_SIZE];
extern uint16_t *signalPtr;

void PPM_calculateBuffer(void)
{
    // PPM is dead simple: 
	// 1000-2000 us per channel
	uint8_t i = 0;
	uint16_t current = 0;
	signalPtr = signalBuffer;
	for (; i<ADC_CHANNEL_COUNT; i++) {
		current = (linearizedValue(i) * 10);
		*signalPtr = 1000 + current;
        signalPtr++;
		*signalPtr = 2000 - current;
        signalPtr++;
	}
	*signalPtr = 0;
}

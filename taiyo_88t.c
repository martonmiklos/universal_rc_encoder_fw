#include "taiyo_88t.h"

#include "calibration.h"
#include "emulator.h"
#include "hwconfig.h"
#include "stdint.h"

extern uint16_t signalBuffer[SIGNALBUFFER_SIZE];
extern uint16_t *signalPtr;

void TAIYO88T_calculateBuffer(void)
{
	uint8_t steer = linearizedValue(STEER_CHANNEL);
    uint8_t throttle = linearizedValue(THROTTLE_CHANNEL);
	uint8_t lastState = 0;

	// 2500 us H 1000 L 2500 us H 1000 us L is the header
    signalPtr = signalBuffer;
    *signalPtr = 2500;
    signalPtr++;
	*signalPtr = 1000;
    signalPtr++;
	*signalPtr = 2500;
    signalPtr++;
	*signalPtr = 1000;
		
	if (throttle < BACKWARD_MAX) {
		// 1000 H 1000 L -> ends low
		signalPtr++;	
		*signalPtr = 1000;
        signalPtr++;
		*signalPtr = 2000;
    } else if (FORWARD_MIN < throttle) {
		// 1000 L  1000H -> ends high
		*signalPtr += 1000;
        signalPtr++;
		*signalPtr = 1000;
    } else {
        // throttle off neutral -> end low
		*signalPtr += 2000;
    }
	
    if (steer < STEER_LEFT_MAX) {
        // CH2 left -> 1000H 1000L
		if (FORWARD_MIN < throttle) {
			// CH1 proc ended up high
			*signalPtr += 1000;
			signalPtr++;
			*signalPtr = 1000;
			signalPtr++;
		} else {
			// CH1 proc ended up low
			signalPtr++;
			*signalPtr = 1000;
			signalPtr++;
		}
    } else if (STEER_RIGHT_MIN < steer) {
        // CH2 right -> 1000L 1000H
		if (FORWARD_MIN < throttle) {
			// CH1 proc ended up high
			signalPtr++;
			*signalPtr = 1000;
			signalPtr++;
			*signalPtr = 1000;
			signalPtr++;
		} else {
			// CH1 proc ended up low
			*signalPtr += 1000;
			signalPtr++;
			*signalPtr = 1000;
			signalPtr++;
		}
    } else {
		// CH2 idle -> put 2000 us low
		if (FORWARD_MIN < throttle) {
			// CH1 proc ended up high
			signalPtr++;
			*signalPtr = 2000;
			signalPtr++;
		} else {
			// CH1 proc ended up low
			*signalPtr += 2000;
			signalPtr++;
		}
    }

    *signalPtr = 1000;
    if (HORN_ON == BTN_ACTIVE) {
        signalPtr++;
		*signalPtr = 1000;
		signalPtr++;
		*signalPtr = 1000;
	}
	signalPtr++;
    // closing 0
    *signalPtr = 0;
}
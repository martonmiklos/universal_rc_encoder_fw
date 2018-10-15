#include "tx2.h"

#include "calibration.h"
#include "emulator.h"
#include "stdint.h"

extern uint16_t signalBuffer[SIGNALBUFFER_SIZE];
extern uint16_t *signalPtr;

void TX2_calculateBuffer(void)
{
	uint8_t i = 0;
	uint8_t steer = linearizedValue(STEER_CHANNEL);
    uint8_t throttle = linearizedValue(THROTTLE_CHANNEL);
	
	// send 4 pcs W2 (500Hz 75% Duty cycle) as a start impulse	
	for (; i<4; i++) {
		*signalPtr = 1500;
        signalPtr++;
		*signalPtr = 500;
		signalPtr++;
	}
		
	

    signalPtr = signalBuffer;
    *signalPtr = 168;
    signalPtr++;
	if (throttle < BACKWARD_MAX) {
        // backward is pressed
        if (steer < STEER_LEFT_MAX) {
			// we steer left and go backward
			i = 52;
		} else if (STEER_RIGHT_MIN < steer) {
			// we steer right and go backward
			i = 46;
		} else {
			// just go backward
			i = 40;
		}
    } else if (FORWARD_MIN < throttle) {
        // we go forward
		if (steer < STEER_LEFT_MAX) {
			// we steer left and go forward
			i = 28;
		} else if (STEER_RIGHT_MIN < steer) {
			// we steer right and go forward
			i = 34;
		} else {
			// just go forward
			i = 10;
		}
    } else {
        // throttle off neutral
        // backward is pressed
        if (steer < STEER_LEFT_MAX) {
			// we steer left
			i = 58;
		} else if (STEER_RIGHT_MIN < steer) {
			// we steer right
			i = 64;
		} else {
			if (TURBO == 0) {
				// just turbo
				i = 22;
			} else {
				// just idle
				i = 4;
			}
		}
    }
	
	// put out the necessary number of W1-s (1KHz 50% Duty cycle)
	while (--i) {
		*signalPtr = 500;
        signalPtr++;
		*signalPtr = 500;
        signalPtr++;
	}
}

#include "c1069c.h"

#include "calibration.h"
#include "emulator.h"
#include "hwconfig.h"

/**
 * @brief C1069C_calculateBuffer
 *
 * Frames sent out with ~30 ms interval.

The frame could be separated to 3 segments:
1st is the steering:
- If steering is in norminal state 168 us L, 1433 us H is sent
- If steering is in right state 168 us L, 3706 us H is sent
- If steering is in left state 168 us L, 252 us H is sent

2nd part is the motor:
- If motor is in norminal state 168 us L, 1433 us H is sent
- If motor is in forward state (no turbo) 168 us L, 252 us H is sent
- If motor is in backward state 168 us L, 3706 us H is sent
- If motor is in forward turbo state 168 us L, 252 us H is sent 168 us L 500 us H is sent

There is a 3rd optional segment the horn:
- If the horn/whatever else button is pressed 168 us L 500 us H 168 us L 500 H sent.

There is a static end part:
- 168 us L 500 us H 168 us L -> H
 */

extern uint16_t signalBuffer[SIGNALBUFFER_SIZE];
extern uint16_t *signalPtr;

void C1069C_calculateBuffer(void)
{
    uint8_t steer = linearizedValue(STEER_CHANNEL);
    uint8_t throttle = linearizedValue(THROTTLE_CHANNEL);

    signalPtr = signalBuffer;
    *signalPtr = 168;
    signalPtr++;
    if (steer < STEER_LEFT_MAX) {
        // we steer left
        *signalPtr = 252;
        signalPtr++;
    } else if (STEER_RIGHT_MIN < steer) {
        // we steer right
        *signalPtr = 3706;
        signalPtr++;
    } else {
        // steer neutral
        *signalPtr = 1433;
        signalPtr++;
    }

    *signalPtr = 168;
    signalPtr++;
    if (throttle < BACKWARD_MAX) {
        // backward is pressed
        *signalPtr = 3706;
        signalPtr++;
    } else if (FORWARD_MIN < throttle) {
        // we go forward
        *signalPtr = 252;
        signalPtr++;
        if (TURBO_MIN < throttle) {
            // we go in turbo mode
            *signalPtr = 168;
            signalPtr++;
            *signalPtr = 500;
            signalPtr++;
        }
    } else {
        // throttle off neutral
        *signalPtr = 168;
        signalPtr++;
        *signalPtr = 1433;
        signalPtr++;
    }

    if (HORN_ON == BTN_ACTIVE) {
        *signalPtr = 168;
        signalPtr++;
        *signalPtr = 500;
        signalPtr++;
        *signalPtr = 168;
        signalPtr++;
        *signalPtr = 500;
		signalPtr++;
    }

    *signalPtr = 168;
    signalPtr++;
    *signalPtr = 500;
    signalPtr++;
    *signalPtr = 168;
    signalPtr++;
    // closing 0
    *signalPtr = 0;
}

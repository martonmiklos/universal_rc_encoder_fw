#include "c1069c.h"

#include "calibration.h"

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

#define STEER_LEFT_MAX (LINEARIZED_CENTER - (LINEARIZED_CENTER * DEADZONE))
#define STEER_RIGHT_MIN (LINEARIZED_CENTER + (LINEARIZED_CENTER * DEADZONE))

#define BACKWARD_MAX (LINEARIZED_CENTER - (LINEARIZED_CENTER * DEADZONE))
#define FORWARD_MIN (LINEARIZED_CENTER + (LINEARIZED_CENTER * DEADZONE))

#define TURBO_MIN LINEARIZED_MAX - ((LINEARIZED_MAX - FORWARD_MIN) >> 1)

#define HORN_ON 0

extern uint16_t signalBuffer[48];
extern uint16_t *signalCnt;

void C1069C_calculateBuffer(void)
{
    uint8_t signalBufferIndex = 0;
    uint8_t steer = linearizedValue(STEER_CHANNEL);
    uint8_t throttle = linearizedValue(THROTTLE_CHANNEL);

    signalBuffer[signalBufferIndex++] = 168;
    if (steer < STEER_LEFT_MAX) {
        // we steer left
        signalBuffer[signalBufferIndex++] = 252;
    } else if (STEER_RIGHT_MIN < steer) {
        // we steer right
        signalBuffer[signalBufferIndex++] = 3706;
    } else {
        // steer neutral
        signalBuffer[signalBufferIndex++] = 1433;
    }

    signalBuffer[signalBufferIndex++] = 168;
    if (throttle < BACKWARD_MAX) {
        // backward is pressed
        signalBuffer[signalBufferIndex++] = 3706;
    } else if (FORWARD_MIN < throttle) {
        // we go forward
        signalBuffer[signalBufferIndex++] = 252;
        if (TURBO_MIN < throttle) {
            // we go in turbo mode
            signalBuffer[signalBufferIndex++] = 168;
            signalBuffer[signalBufferIndex++] = 500;
        }
    } else {
        // throttle off neutral
        signalBuffer[signalBufferIndex++] = 168;
        signalBuffer[signalBufferIndex++] = 1433;
    }

    if (HORN_ON) {
        signalBuffer[signalBufferIndex++] = 168;
        signalBuffer[signalBufferIndex++] = 500;
        signalBuffer[signalBufferIndex++] = 168;
        signalBuffer[signalBufferIndex++] = 500;
    }

    signalBuffer[signalBufferIndex++] = 168;
    signalBuffer[signalBufferIndex++] = 500;
    signalBuffer[signalBufferIndex++] = 168;

    signalCnt = signalBufferIndex;
}

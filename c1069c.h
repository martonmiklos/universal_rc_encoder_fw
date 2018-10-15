#ifndef C1069C_H
#define C1069C_H

#define TURBO_MIN (LINEARIZED_MAX - ((LINEARIZED_MAX - FORWARD_MIN)/2))

#define HORN_ON BTN0

void C1069C_calculateBuffer(void);

#endif // C1069C_H

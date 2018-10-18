#ifndef EMULATOR_H___
#define EMULATOR_H___

#define SIGNALBUFFER_SIZE 140

#define ADC_CHANNEL_COUNT 2

typedef enum {
    EmulatorMode_C1069,
    EmulatorMode_PPM,
	EmulatorMode_TX2,
	EmulatorMode_Taiyo_88T,
	EmulatorMode_Invalid
} EmulatorMode_t;

#endif

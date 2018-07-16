#ifndef CONFIG_SMT8_H
#define CONFIG_SMT8_H

#include "stdint.h"

void EEWriteU8(uint16_t address, uint8_t value);
void EEWriteU16(uint16_t address, uint16_t value);
#define EEReadU8(address) (*((uint8_t *)(0x4000 + address)))
#define EEReadU16(address) (EEReadU8(address) << 8 | EEReadU8(address + 1))

void EEWriteArray(uint16_t address, uint8_t *src, uint8_t count);
void EEReadArray(uint16_t address, uint8_t * dest, uint8_t count);
#endif // CONFIG_SMT8_H

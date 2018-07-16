#include "eeprom.h"

#include "iostm8s003f3.h"

void EEWriteU8(uint16_t address, uint8_t value)
{
    //  Check if the EEPROM is write-protected.  If it is then unlock the EEPROM.
    if (FLASH_IAPSR_bits.DUL == 0) {
        FLASH_DUKR = 0xAE;
        FLASH_DUKR = 0x56;
    }

    //  Write the data to the EEPROM.
	address += 0x4000;
    (*(uint8_t *)address) = value;

    //  Now write protect the EEPROM.
    FLASH_IAPSR_bits.DUL = 0;
}

void EEWriteArray(uint16_t address, uint8_t *src, uint8_t count)
{
    uint8_t i = 0;
    uint8_t *EEAddress;
    //  Check if the EEPROM is write-protected.  If it is then unlock the EEPROM.
    if (FLASH_IAPSR_bits.DUL == 0) {
        FLASH_DUKR = 0xAE;
        FLASH_DUKR = 0x56;
    }

    //  Write the data to the EEPROM.
    EEAddress = (uint8_t *) (0x4000 + address);        //  EEPROM base address.
    for (; i < count; i++) {
        *EEAddress = src[i];
        EEAddress++;
    }

    //  Now write protect the EEPROM.
    FLASH_IAPSR_bits.DUL = 0;
}

void EEReadArray(uint16_t address, uint8_t * dest, uint8_t count)
{
    uint8_t i = 0;
    //  Write the data to the EEPROM.
    uint8_t *EEAddress  = (uint8_t *) (0x4000 + address);        //  EEPROM base address.
    for (; i < count; i++) {
        dest[i] = *EEAddress;
        EEAddress++;
    }
}

void EEWriteU16(uint16_t address, uint16_t value)
{
    EEWriteU8(address, (value >> 8) & 0xFF);
    EEWriteU8(address + 1, value & 0xFF);
}

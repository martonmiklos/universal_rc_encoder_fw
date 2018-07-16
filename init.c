#include "init.h"

#include "iostm8s003f3.h"
#include "stdint.h"

void HW_Init(void)
{
    CLK_CKDIVR = 0; // turn off clock prescaler (to have Fmaster 16 MHz)

    /* PCKEN17 TIM1      Enabled
     * PCKEN16 Reserved  Disabled
     * PCKEN15 TIM2      Enabled
     * PCKEN14 TIM4      Enabled
     * PCKEN13 UART1     Enabled
     * PCKEN12 Reserved  Disabled
     * PCKEN11 SPI       Disabled
     * PCKEN10 I2C       Disabled
     */
    CLK_PCKENR1 = 0b10111000;

    /* PCKEN27 Reserved  Disabled
     * PCKEN26 Reserved  Disabled
     * PCKEN25 Reserved  Disabled
     * PCKEN24 Reserved  Disabled
     * PCKEN23 ADC       Enabled
     * PCKEN22 AWU       Disabled
     * PCKEN21 Reserved  Disabled
     * PCKEN20 Reserved  Disabled
     */
    CLK_PCKENR2 = 0b00001000;

    /*
     * PA3: GPIO_Input       - SEED_SIGNAL_3
     * PA2: GPIO_Input       - SEED_SIGNAL_2
     * PA1:                  - Unused
     */
    /*
     * PB4: GPIO_Output      - RED_LED
     * PB5: GPIO_Input       - SEED_SIGNAL_1
     */
    PB_DDR = 0b00010000;

    // set RED_LED to high (LEDs are active low)
    PB_ODR = 0b00010000;

    /*
     * PC7: GPIO_Output      - IR_SWITCH_PWM
     * PC6: GPIO_Output      - DATA_ADDR
     * PC5: GPIO_Output      - BLUE_LED
     * PC4: GPIO_Analog      - ADC_SEED
     * PC3: GPIO_Output      - IR_CURR_PWM
     */
    PC_DDR = 0b11101000;

    // non LEDs outputs are push pull
    PC_CR1 = 0b11001000;

    /*
     * PD6: UART1_RX         - RX_OR_ADC_DATA_P
     * PD5: UART1_TX         - TX
     * PD4: GPIO_Output      - GREEN_LED
     * PD3: GPIO_Analog      - IR_CURRENT
     * PD2: GPIO_Analog      - ADC_POWER
     * PD1: SYS_SWIM         - Not used
     */

    PD_DDR = 0b00110000;
    // Set green LED to high (LEDs are active low)
    PD_ODR = 0b00110000;
    // GREEN LED, TX should be push pull
    PD_CR1 = 0b00100000;


    // Prescaler set to 10: FADC: 16 MHz/10 = 1.6MHz
    // To have best performance (<2MHz and have the min. 1 MHz freq.)
    ADC_CR1_bits.SPSEL = 0b101;

    // Set result to right aligned
    ADC_CR2_bits.ALIGN = 1;

    /*
     * ADC_TDR_H:L
     * Schmidt trigger enable/disable bits for ADC channels
     * ADC channels used: 2, 3, 4, 5, 6
     */
    ADC_TDRL = 0b01111100;   // ADC 6-5-4-3-2 is used as ADC by default
    ADC_CSR_bits.EOCIE = 1; // enable end of conversion ISR


    // **************************************************************
    // Timer 2: 65.5 ms timer (for seed time count 1 us tick timer)
    // **************************************************************

    // prescaler = 16
    TIM2_PSCR_bits.PSC = 4;

    // update generation is needed to have the prescaler
    // buffered
    TIM2_EGR_bits.UG = 1;
}



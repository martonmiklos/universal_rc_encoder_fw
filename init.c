#include "init.h"

#include "iostm8s003f3.h"
#include "stdint.h"
#include "hwconfig.h"

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
     * PA3: GPIO_Output		 - RED_LED
     * PA2: NC
     * PA1:                  - CAL BTN
     */
	PA_DDR = 0b00001000;
	// pullup on cal button, RED_LED: OC
    PA_CR1 = 0b00001010;
	PA_ODR = 0b00001000; // TODO remove for final design

    /*
     * PC7: GPIO_Input      - BTN3
     * PC6: GPIO_Input      - BTN2
     * PC5: GPIO_Input      - BTN1
     * PC3: GPIO_Input      - BTN0
     */
    PC_DDR = 0b00010111;

	// pullup on all inputs
    PC_CR1 = 0b11101000;

    /*
	 * PD6: ADC4
	 * PD5: ADC3
     * PD4: GPIO_Output      - Encoded output
	 * PD3: ADC2
	 * PD2: ADC1
     * PD1: SYS_SWIM         - Not used
     */

    PD_DDR = 0b00010000;
	
	// encoded pin starts at high
    PD_ODR = 0b00010000;

	// encoded output is pushpull FIXME configure it to open drain
    PD_CR1 = 0b00010000;


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
    // Timer 1: 25 ms timer for refresh the signals
    // **************************************************************
    TIM1_PSCRL = 16;

    TIM1_ARRH = (TIMER1_TOP >> 8) & 0xFF;
    TIM1_ARRL = (TIMER1_TOP     ) & 0xFF;

    // enable OVF interrupt
    TIM1_IER_bits.UIE = 1;

    // one pulse mode
    TIM1_CR1_bits.OPM = 1;

    // **************************************************************
    // Timer 2: 1us tick timer for signal countdown
    // **************************************************************

    // prescaler = 16
    TIM2_PSCR_bits.PSC = 4;

	// set one shot mode
    TIM2_CR1_bits.OPM = 1;
}



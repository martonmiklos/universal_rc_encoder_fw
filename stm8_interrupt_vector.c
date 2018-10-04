/*	BASIC INTERRUPT VECTOR TABLE FOR STM8 devices
 *	Copyright (c) 2007 STMicroelectronics
 */

typedef void @far (*interrupt_handler_t)(void);

struct interrupt_vector {
	unsigned char interrupt_instruction;
	interrupt_handler_t interrupt_handler;
};


extern @far @interrupt void NonHandledInterrupt(void);
extern @far @interrupt void ADC_CompleteISR (void);
extern @far @interrupt void Timer1_OVF_ISR(void);

extern void _stext();     /* startup routine */

struct interrupt_vector const _vectab[] = {
{0x82, (interrupt_handler_t)_stext},    /* reset */
{0x82, NonHandledInterrupt}, 			/* TRAP        */
{0x82, NonHandledInterrupt}, 			/* TLI         */
{0x82, NonHandledInterrupt}, 			/* AWU         */
{0x82, NonHandledInterrupt}, 			/* CLK         */
{0x82, NonHandledInterrupt},            /* EXTI PORTA  */
{0x82, NonHandledInterrupt},            /* EXTI PORTB  */
{0x82, NonHandledInterrupt},            /* EXTI PORTC  */
{0x82, NonHandledInterrupt},            /* EXTI PORTD  */
{0x82, NonHandledInterrupt},            /* EXTI PORTE  */
{0x82, NonHandledInterrupt}, 			/* CAN RX      */
{0x82, NonHandledInterrupt}, 			/* CAN TX      */
{0x82, NonHandledInterrupt}, 			/* SPI         */
{0x82, Timer1_OVF_ISR},                 /* TIMER 1 OVF */
{0x82, NonHandledInterrupt}, 			/* TIMER 1 CAP */
{0x82, NonHandledInterrupt},            /* TIMER 2 OVF */
{0x82, NonHandledInterrupt}, 			/* TIMER 2 CAP */
{0x82, NonHandledInterrupt},            /* TIMER 3 OVF */
{0x82, NonHandledInterrupt}, 			/* TIMER 3 CAP */
{0x82, NonHandledInterrupt},            /* USART TX    */
{0x82, NonHandledInterrupt},            /* USART RX    */
{0x82, NonHandledInterrupt}, 			/* I2C         */
{0x82, NonHandledInterrupt}, 			/* LINUART TX  */
{0x82, NonHandledInterrupt}, 			/* LINUART RX  */
{0x82, ADC_CompleteISR},                /* ADC         */
{0x82, NonHandledInterrupt},            /* TIMER 4 OVF */
{0x82, NonHandledInterrupt}, 			/* EEPROM ECC  */
{0x82, NonHandledInterrupt}, 			/* Reserved    */
{0x82, NonHandledInterrupt}, 			/* Reserved    */
{0x82, NonHandledInterrupt}, 			/* Reserved    */
{0x82, NonHandledInterrupt}, 			/* Reserved    */
{0x82, NonHandledInterrupt}, 			/* Reserved    */
};

/*
 * main.h
 *
 * Created: 11.02.2024 19:35:38
 *  Author: ahadz
 */ 


#ifndef MAIN_H_
#define MAIN_H_

#include <avr/io.h>
#include <avr/interrupt.h>

#define PC0_Led 0

void PC0_Output_Setup(void);

/*
TIMER0 przepe³nia siê co 0,016s
*/
void TIMER0_Setup(void);

void PC0_Output_Setup(void){
	DDRC = 0x01;			// PC0 -> Output
	PORTC = 0;				// PC0 -> Low level
}

void TIMER0_Setup(void){
	TCCR0 |= (1 << CS02) | (1 << CS00);						// Clock -> clk/1024
	TIMSK |= 1 << TOIE0;									// TIMER0 Overflow Interrupt Enable
}

#endif /* MAIN_H_ */
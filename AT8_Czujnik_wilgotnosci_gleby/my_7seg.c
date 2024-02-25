/*
 * my_7seg.c
 *
 * Created: 25.02.2024 14:06:41
 *  Author: ahadz
 */ 

#include "my_7seg.h"

void TIMER2_CONF(void){
	TCCR2 |= 1 << WGM21;									// CTC
	TCCR2 |= (1 << CS22) | (1 << CS21) | (1 << CS20);		// Prescaler -> clk/1024
	OCR2 = 109;												// Górna wartoœæ licznika
	TIMSK |= 1 << OCF2;										// W³¹czenie przerwania od porównania 
}	

void my_7seg_GPIO_CONF(void){
	DDRB = 0x06;											// PB1 i PB2 -> output
	PORTB = 0;
	DDRC = 0x7F;											// PC0 - PC6 -> output
	PORTC = 0;
}

static inline void my_7seg_DIPLAY1_ON(void){	PORTB &= ~(1 << Disp1);		}
	
static inline void my_7seg_DIPLAY1_OFF(void){	PORTB |= 1 << Disp1;		}
	
static inline void my_7seg_DIPLAY2_ON(void){	PORTB &= ~(1 << Disp2);		}

static inline void my_7seg_DIPLAY2_OFF(void){	PORTB |= 1 << Disp2;		}
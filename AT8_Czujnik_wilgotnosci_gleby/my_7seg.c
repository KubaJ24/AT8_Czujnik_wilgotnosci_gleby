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
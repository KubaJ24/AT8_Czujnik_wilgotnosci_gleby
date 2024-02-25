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
	DDRD = 0x7F;											// PD0 - PD6 -> output
	PORTD = 0;
}

uint8_t my_7seg_Dzies(uint8_t Number){
	return Number / 10;
}

uint8_t my_7seg_Jedn(uint8_t Number){
	return Number % 10;
}

static inline void my_7seg_DIPLAY1_ON(void){	PORTB &= ~(1 << Disp1);		}

static inline void my_7seg_DIPLAY1_OFF(void){	PORTB |= 1 << Disp1;		}

static inline void my_7seg_DIPLAY2_ON(void){	PORTB &= ~(1 << Disp2);		}

static inline void my_7seg_DIPLAY2_OFF(void){	PORTB |= 1 << Disp2;		}


void my_7seg_DISPLAY1(void){
	my_7seg_DIPLAY2_OFF();
	my_7seg_DIPLAY1_ON();
}

void my_7seg_DISPLAY2(void){
	my_7seg_DIPLAY1_OFF();
	my_7seg_DIPLAY2_ON();
}

void my_7seg_DISPLAY_NUMBER(uint8_t Number){
    if(Number == 0){ PORTD = 0b0001000; }
    else if(Number == 1){ PORTD = 0b1011110; }
    else if(Number == 2){ PORTD = 0b0010001; }
    else if(Number == 3){ PORTD = 0b0010100; }
    else if(Number == 4){ PORTD = 0b1000110; }
    else if(Number == 5){ PORTD = 0b0100100; }
    else if(Number == 6){ PORTD = 0b0100000; }
    else if(Number == 7){ PORTD = 0b0011110; }
    else if(Number == 8){ PORTD = 0b0000000; }
    else if(Number == 9){ PORTD = 0b0000100; }
}
/*
 * my_7seg.h
 *
 * Created: 25.02.2024 14:07:15
 *  Author: ahadz
 */ 


#ifndef MY_7SEG_H_
#define MY_7SEG_H_


#include <avr/io.h>
#include <avr/interrupt.h>

#define Disp1 PB1
#define Disp2 PB2

#define D0 PC0
#define D1 PC1
#define D2 PC2
#define D3 PC3
#define D4 PC4
#define D5 PC5
#define D6 PC6

/*
	Zmiana aktywnego wyœwietlacza nastêpuje przy ka¿dym przerwaniu TIMER2 -> co ok 7 ms
	TIMER2 pracuje w trybie CTC
		- Zliczanie od 0 do 109 -> 7 ms
		- Prescaler 1/1024
*/
void TIMER2_CONF(void);

/*
	Ustawienie GPIO dla wyœwietlacza
*/
void my_7seg_GPIO_CONF(void);

#endif /* MY_7SEG_H_ */
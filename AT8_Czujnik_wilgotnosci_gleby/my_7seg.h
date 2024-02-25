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
#include <util/atomic.h>

#define Disp1 PB1
#define Disp2 PB2

#define D0 PD0
#define D1 PD1
#define D2 PD2
#define D3 PD3
#define D4 PD4
#define D5 PD5
#define D6 PD6

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

/*
	Zwraca czêœæ dzisiêtn¹ liczby
*/
uint8_t my_7seg_Dzies(uint8_t Number);

/*
	Zwraca jednoœci liczby
*/
uint8_t my_7seg_Jedn(uint8_t Number);

/*
	Uruchamia wyœwietlacz 1
*/
void my_7seg_DISPLAY1(void);

/*
	Uruchamia wyœwietlacz 2
*/
void my_7seg_DISPLAY2(void);

/*
	Wyœwietla liczbê
*/
void my_7seg_DISPLAY_NUMBER(uint8_t Number);

#endif /* MY_7SEG_H_ */
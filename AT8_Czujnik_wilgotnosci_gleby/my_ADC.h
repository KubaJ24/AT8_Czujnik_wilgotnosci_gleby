/*
 * my_ADC.h
 *
 * Created: 11.02.2024 20:18:24
 *  Author: ahadz
 */ 


#ifndef MY_ADC_H_
#define MY_ADC_H_

#include <avr/io.h>
#include <avr/interrupt.h>

void my_ADC_Setup(void);

uint16_t my_ADC_Result(void);

static inline void my_ADC_Start(void){ ADCSRA |= 1 << ADSC; }

#endif /* MY_ADC_H_ */
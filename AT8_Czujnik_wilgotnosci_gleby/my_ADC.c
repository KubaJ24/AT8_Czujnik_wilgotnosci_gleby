/*
 * my_ADC.c
 *
 * Created: 11.02.2024 20:18:01
 *  Author: ahadz
 */ 

#include "my_ADC.h"

void my_ADC_Setup(void){
	ADCSRA |= 1 << ADEN;										// ADC Enable
	ADCSRA |= 1 << ADIE;										// ADC Interrupt Enable -> end of conversion
	ADCSRA |= (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0);		// Prescaler -> 128
	ADCSRA |= 1 << ADFR;										// Free Running Mode -> praca ci¹g³a
	ADMUX |= 1 << REFS0;										// Voltage reference -> AVcc
	// Working on ADC0 -> MUX3...0 -> 0000	
	
	my_ADC_Start();		// Start od conversion
}

uint16_t my_ADC_Result(void){
    uint16_t loval = 0;
    uint16_t hival = 0;
    uint16_t result = 0;
    loval = ADCL;
    hival = ADCH;
    result = (hival<<8) | loval; 
    return result;
}
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
#include <util/atomic.h>

#include "my_ADC.h"
#include "my_7seg.h"

uint8_t Map_Result(uint16_t Result){
	uint8_t Mapped_Result = (99 / 670) * Result;
	return Mapped_Result;
}

#endif /* MAIN_H_ */
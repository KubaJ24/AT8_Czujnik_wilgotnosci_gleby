/*
 * AT8_Czujnik_wilgotnosci_gleby.c
 *
 * Created: 11.02.2024 19:18:51
 * Author : ahadz
 */ 

#include "main.h"

volatile uint16_t ADC_Conv_result = 0;

/*
 Funkcja obs³ugi przewania ADC - koniec przetwarzania
*/
void ADC_vect(void){
	ADC_Conv_result = my_ADC_Result();
}

int main(void)
{
    
	my_ADC_Setup();
	
	sei();					// Global Interrupt Enable
	
	my_ADC_Start();
	
    while(1){
		
    }
}


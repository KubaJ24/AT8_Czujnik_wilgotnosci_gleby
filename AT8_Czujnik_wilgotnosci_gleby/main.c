/*
 * AT8_Czujnik_wilgotnosci_gleby.c
 *
 * Created: 11.02.2024 19:18:51
 * Author : ahadz
 */ 

#include "main.h"

volatile uint8_t Soil_Hum = 0;


/*
 Funkcja obs³ugi przewania ADC - koniec przetwarzania
*/
void ADC_vect(void){
	ATOMIC_BLOCK(ATOMIC_RESTORESTATE){						// Czasowe zablokowanie przerwañ
		uint16_t Result = my_ADC_Result();
		Soil_Hum = Map_Result(Result);
	}														// Odblokowanie przerwañ
	ADCSRA |= 1 << ADIF;									// Wyzerowanie rz¹dania przerwania
}

/*
 Funkcja obs³ugi przewania TIMER2 od porównania
*/
void TIMER2_COMP_vect(void){
	static uint8_t Status;
	ATOMIC_BLOCK(ATOMIC_RESTORESTATE){						// Czasowe zablokowanie przerwañ
		if(Status != 1){
			uint8_t Dzies = my_7seg_Dzies(Soil_Hum);
			my_7seg_DISPLAY1();
			my_7seg_DISPLAY_NUMBER(Dzies);
			Status = 1;
		} else {
			uint8_t Jedn = my_7seg_Jedn(Soil_Hum);
			my_7seg_DISPLAY2();
			my_7seg_DISPLAY_NUMBER(Jedn);
			Status = 0;
		}
		}													// Odblokowanie przerwañ
	/* 
		Wyzerowanie rz¹dania przerwania nastêpuje automatycznie po wykonianiu obs³ugi przerwania
	*/
}

int main(void)
{
    
	my_ADC_Setup();
	my_7seg_GPIO_CONF();
	TIMER2_CONF();			// Czy to dobre miejsce?
	
	sei();					// Global Interrupt Enable
	
	my_ADC_Start();
	
    while(1){
		
    }
}


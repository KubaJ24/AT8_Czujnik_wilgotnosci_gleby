/*
 * AT8_Czujnik_wilgotnosci_gleby.c
 *
 * Created: 11.02.2024 19:18:51
 * Author : ahadz
 */ 

#include "main.h"

/*
	Program testowy do programatora i uC
Miganie diod¹ na PC0
*/


/*
Procedura obs³ugi przerwania TIMER0 od przepe³nienia
Program wykonuje pêtlê 50 przepe³nieñ po czym zmienia stan diody PC0
*/
void TIMER0_OVF_vect(void){
	static uint8_t Counter = 0;
	if(Counter < 50){
		Counter++;
	} else {
		Counter = 0;
		PORTC ^= 1 << PC0_Led;		// Zmiana stanu diody na przeciwny
	}
}

int main(void)
{
	
	PC0_Output_Setup();
	TIMER0_Setup();
	
    sei();					// Global Interrupt Enable
	
    while(1){
		
    }
}


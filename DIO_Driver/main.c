/*
 * Dio13march.cpp
 *
 * Created: 14/01/2021 19:35:28
 * Author : Ahmed
 */ 



#include "LED.h"
#include "Button.h"
#include "STD.h"
#define F_CPU 16000000
#include <util/delay.h>





int main(void)
{
	uint8_t val;
	
	LED0_Init();	
	LED0_On();
	
	Button0_Init();
	

		
    while (1) 
    {
		val = Button0_GetValue();
		
		if (val==1)
		{
			LED0_Toggle();
			_delay_ms(500);
			LED0_Toggle();
		}
    }
}


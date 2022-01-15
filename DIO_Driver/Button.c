/*
 * Button.c
 *
 * Created: 10/01/2021 19:04:29
 *  Author: Ahmed
 */ 

#include "Button.h"
#include "STD.h"


void Button0_Init(void)
{
	DIO_SetPinDir(DIO_PORTB, DIO_PIN0 , DIO_PIN_INPUT);
}
uint8_t Button0_GetValue(void)
{
	uint8_t value = 0;
	
	DIO_ReadPinValue(DIO_PORTB, DIO_PIN0, &value);
	
	while(GET_BIT(PINB, 0)==1);
	
	_delay_ms(10);
	
	return value;
	
}
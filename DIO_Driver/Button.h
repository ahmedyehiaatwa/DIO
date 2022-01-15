/*
 * Button.h
 *
 * Created: 10/01/2021 19:04:57
 *  Author: Ahmed
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "DIO.h"
#define F_CPU 16000000
#include <util/delay.h>


void Button0_Init(void);

uint8_t Button0_GetValue(void);




#endif /* BUTTON_H_ */
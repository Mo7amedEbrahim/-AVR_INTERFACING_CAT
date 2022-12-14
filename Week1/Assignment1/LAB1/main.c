/*
 * main.c
 *
 *  Created on: Dec 8, 2022
 *      Author: Mohammed
 */
#include "util/delay.h"
#include "LIB/STD_TYPES.h"
#include "LIB/BIT_MATH.h"
#include "MCAL/DIO/DIO_interface.h"




void main(void){
	DIO_voidSetPinDirection(PORTA,PIN0,OUTPUT);

	while(1){
		DIO_voidSetPinValue(PORTA,PIN0,HIGH);
		_delay_ms(1000);
		DIO_voidSetPinValue(PORTA,PIN0,LOW);
		_delay_ms(1000);
	}
}


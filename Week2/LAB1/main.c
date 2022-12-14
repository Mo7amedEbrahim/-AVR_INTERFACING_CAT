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
	u8 switch1,switch2,switch3;
	// Init LEDS
	DIO_voidSetPinDirection(PORTA,PIN0,OUTPUT);
	DIO_voidSetPinDirection(PORTA,PIN1,OUTPUT);
	//Init Switches
	DIO_voidSetPinDirection(PORTB,PIN0,INPUT);
	DIO_voidSetPinDirection(PORTB,PIN1,INPUT);
	DIO_voidSetPinDirection(PORTB,PIN2,INPUT);
	//Pull up switches
	DIO_voidSetPinValue(PORTB,PIN0,HIGH);
	DIO_voidSetPinValue(PORTB,PIN1,HIGH);
	DIO_voidSetPinValue(PORTB,PIN2,HIGH);

	while(1){
		switch1 = DIO_u8GetPinValue(PORTB,PIN0);
		switch2 = DIO_u8GetPinValue(PORTB,PIN1);
		switch3 = DIO_u8GetPinValue(PORTB,PIN2);
		/////////////////////////Switch1
		if(switch1 == LOW){
			DIO_voidSetPinValue(PORTA,PIN0,HIGH);
		}
		else if(switch1 == HIGH){
			DIO_voidSetPinValue(PORTA,PIN0,LOW);
		}
		/////////////////////////Switch2
		if(switch2 == LOW){
			DIO_voidSetPinValue(PORTA,PIN1,HIGH);
		}
		else if(switch2 == HIGH){
			DIO_voidSetPinValue(PORTA,PIN1,LOW);
		}
		////////////////////////Switch3
		if(switch3 == LOW){
			DIO_voidSetPinValue(PORTA,PIN0,HIGH);
			DIO_voidSetPinValue(PORTA,PIN1,HIGH);
		}
	}
}


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



void main(){
	u8 Pins[8] = {PIN0,PIN1,PIN2,PIN3,PIN4,PIN5,PIN6,PIN7};
	DIO_voidSetPortDirection(PORTA,0xFF);

	while(1){
		for(int i =0;i<8;i++){
			DIO_voidSetPinValue(PORTA,Pins[i],HIGH);
			_delay_ms(500);
		}
		_delay_ms(2000);
		for(int i =7;i>=0;i--){
			DIO_voidSetPinValue(PORTA,Pins[i],LOW);
			_delay_ms(500);
		}
	}
}














/*void main(void){
	DIO_voidSetPinDirection(PORTA,PIN0,OUTPUT);

	while(1){
		DIO_voidSetPinValue(PORTA,PIN0,HIGH);
		_delay_ms(1000);
		DIO_voidSetPinValue(PORTA,PIN0,LOW);
		_delay_ms(1000);
	}
}
*/

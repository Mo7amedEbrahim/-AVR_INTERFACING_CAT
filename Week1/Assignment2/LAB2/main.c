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


void INCCheckPressed(void);
void DECCheckPressed(void);
u8 INCbutton_state,INClast_button_state,DECbutton_state,DEClast_button_state,button_pressed;
s8 Counter;
u8 SevenSegCath[10] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x67};
void main(void){

	//Init 7 Segment
	DIO_voidSetPortDirection(PORTC,0xFF);
	//Init Push Buttons
	DIO_voidSetPinDirection(PORTA,PIN0,INPUT);	//Increase
	DIO_voidSetPinDirection(PORTA,PIN1,INPUT);	//Decrease
	//Pull up
	DIO_voidSetPinValue(PORTA,PIN0,HIGH);
	DIO_voidSetPinValue(PORTA,PIN1,HIGH);
	while(1){


		INCbutton_state = DIO_u8GetPinValue(PORTA,PIN0);
		DECbutton_state = DIO_u8GetPinValue(PORTA,PIN1);
		INCCheckPressed();
		DECCheckPressed();
		DIO_voidSetPortValue(PORTC,SevenSegCath[Counter]);

	}
}

void INCCheckPressed(void){
	if(INCbutton_state != INClast_button_state){
		if(INCbutton_state == 0){
			button_pressed = 1;
			Counter++;
			if(Counter > 9)	Counter =9;
		}
		_delay_ms(50);

	}
	INClast_button_state = INCbutton_state;
}
void DECCheckPressed(void){
	if(DECbutton_state != DEClast_button_state){
			if(DECbutton_state == 0){
				button_pressed = 1;
				Counter--;
				if(Counter < 0)	Counter =0;
			}
			_delay_ms(50);

		}
		DEClast_button_state = DECbutton_state;
}









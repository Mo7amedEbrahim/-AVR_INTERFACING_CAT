#ifndef _DIO_INTERFACE_H
#define _DIO_INTERFACE_H

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "DIO_register.h"

enum PORTS
{
	PORTA = 0,
	PORTB,
	PORTC,
	PORTD
};

enum PINS 
{
	PIN0 = 0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7
};

enum DIRECTION
{
	INPUT = 0,
	OUTPUT
};

enum VALUE
{
	LOW = 0,
	HIGH
};


void DIO_voidSetPinDirection(u8 Port,u8 Pin, u8 Direction);
void DIO_voidSetPortDirection(u8 Port,u8 Direction);
void DIO_voidSetPinValue(u8 Port,u8 Pin, u8 Value);
void DIO_voidSetPortValue(u8 Port,u8 Value);
u8 DIO_u8GetPinValue(u8 Port,u8 Pin);
















#endif

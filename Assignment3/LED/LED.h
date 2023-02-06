/****************************************************************************************/
/****************************************************************************************/
/*************                AUTHOR :  Mohammed Gaafar        ***************************/
/*************                LAYER :   HAL			      ***************************/
/*************                SWC :     LED	              ***************************/
/*************                VERSION : 1.00		          ***************************/
/****************************************************************************************/
/****************************************************************************************/

#ifndef _LED_H
#define _LED_H
#include "../../MCAL/DIO/DIO_interface.h"
#include "../../MCAL/Error_States.h"

ES_t LED_init(u8 DIO_PORT,u8 DIO_PIN);

ES_t LED_ON(u8 DIO_PORT,u8 DIO_PIN);

ES_t LED_OFF(u8 DIO_PORT,u8 DIO_PIN);

ES_t LED_Toggle(u8 DIO_PORT,u8 DIO_PIN);

#endif
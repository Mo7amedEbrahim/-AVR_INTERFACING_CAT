/****************************************************************************************/
/****************************************************************************************/
/*************                AUTHOR :  Mohammed Gaafar        ***************************/
/*************                LAYER :   HAL			      ***************************/
/*************                HWC :     7Segment	              ***************************/
/*************                VERSION : 1.00		          ***************************/
/****************************************************************************************/
/****************************************************************************************/

#ifndef _7SEG_H
#define _7SEG_H

/*      MCAL Includes   */
#include "../../MCAL/DIO/DIO_interface.h"
#include "../../MCAL/Error_States.h"
/*                      */
#include "7SEG_cfg.h"



ES_t _7SEG_Init(u8 Port);

ES_t _7SEG_Display(u8 Port, u8 Number);

//TODO : Make a driver using decoder


#endif
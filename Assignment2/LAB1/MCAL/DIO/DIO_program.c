#include "DIO_interface.h"




void DIO_voidSetPinDirection(u8 Port,u8 Pin, u8 Direction){
	switch(Port){
		case PORTA:
		if(Direction == INPUT){
			CLR_BIT(DDRA_REG,Pin);
		}
		else if(Direction == OUTPUT){
			SET_BIT(DDRA_REG,Pin);
		}
		break;
		case PORTB:
		if(Direction == INPUT){
			CLR_BIT(DDRB_REG,Pin);
		}
		else if(Direction == OUTPUT){
			SET_BIT(DDRB_REG,Pin);
		}
		break;
		case PORTC:
		if(Direction == INPUT){
			CLR_BIT(DDRC_REG,Pin);
		}
		else if(Direction == OUTPUT){
			SET_BIT(DDRC_REG,Pin);
		}
		break;
		case PORTD:
		if(Direction == INPUT){
			CLR_BIT(DDRD_REG,Pin);
		}
		else if(Direction == OUTPUT){
			SET_BIT(DDRD_REG,Pin);
		}
		break;
	}
}



void DIO_voidSetPortDirection(u8 Port,u8 Direction){
	switch(Port){
		case PORTA: DDRA_REG = Direction; break;
		case PORTB: DDRB_REG = Direction;break;
		case PORTC: DDRC_REG = Direction; break;
		case PORTD: DDRD_REG = Direction; break;
	}
}


void DIO_voidSetPinValue(u8 Port,u8 Pin, u8 Value){
	switch(Port){
		case PORTA:
		if(Value == LOW){
			CLR_BIT(PORTA_REG,Pin);
		}
		else if(Value == HIGH){
			SET_BIT(PORTA_REG,Pin);
		}
		break;
		case PORTB:
		if(Value == LOW){
			CLR_BIT(PORTB_REG,Pin);
		}
		else if(Value == HIGH){
			SET_BIT(PORTB_REG,Pin);
		}
		break;
		case PORTC:
		if(Value == LOW){
			CLR_BIT(PORTC_REG,Pin);
		}
		else if(Value == HIGH){
			SET_BIT(PORTC_REG,Pin);
		}
		break;
		case PORTD:
		if(Value == LOW){
			CLR_BIT(PORTD_REG,Pin);
		}
		else if(Value == HIGH){
			SET_BIT(PORTD_REG,Pin);
		}
		break;

	}
}



void DIO_voidSetPortValue(u8 Port,u8 Value){
	switch(Port){
		case PORTA: PORTA_REG = Value; break;
		case PORTB: PORTB_REG = Value; break;
		case PORTC: PORTC_REG = Value; break;
		case PORTD: PORTD_REG = Value; break;
	}
}


u8 DIO_u8GetPinValue(u8 Port,u8 Pin){
	switch(Port){
		case PORTA: return GET_BIT(PINA_REG,Pin); break;
		case PORTB: return GET_BIT(PINB_REG,Pin); break;
		case PORTC: return GET_BIT(PINC_REG,Pin); break;
		case PORTD: return GET_BIT(PIND_REG,Pin); break;
	}
}



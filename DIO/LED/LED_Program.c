/*
 * LED_Program.c
 *
 *  Created on: Dec 11, 2023
 *      Author: Hp
 */
#include "STD_Types.h"
#include "BITMATH.h"
#include "DIO_Interface.h"
#include "LED_Interface.h"
#include "DIO_Reg.h"


uint8 LED_ON(uint8 copy_port,uint8 copy_pin)
{

	DIO_SetPinDirection( copy_port ,copy_pin, OUTPUT );
	DIO_SetPinValue( copy_port , copy_pin,OUTPUT_HIGH);

return 0;
}

uint8 LED_OFF(uint8 copy_port,uint8 copy_pin)
{

	DIO_SetPinDirection( copy_port ,copy_pin, OUTPUT );
	DIO_SetPinValue( copy_port , copy_pin,OUTPUT_LOW);

return 0;
}

uint8 TOGGLE_LED(uint8 copy_port,uint8 copy_pin)
{
	uint8 local_errorStatus =OK;
	 if (copy_pin<= PIN7 )
	 {


	 switch(copy_port)
				   {
				          case DIO_PORTA : TOGGLE_BIT(PORTA,copy_pin); break;
				          case DIO_PORTB : TOGGLE_BIT(PORTB,copy_pin); break;
				          case DIO_PORTC : TOGGLE_BIT(PORTC,copy_pin); break;
				          case DIO_PORTD : TOGGLE_BIT(PORTD,copy_pin); break;
				          default :local_errorStatus=NOK ; break ;
				   }

	 }
	  else
	  {
	 	 local_errorStatus=NOK ;

	  }
	 return local_errorStatus;

}


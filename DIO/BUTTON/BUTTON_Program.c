/*
 * BUTTON_Program.c
 *
 *  Created on: Dec 12, 2023
 *      Author: Hp
 */

#include "STD_Types.h"
#include "BITMATH.h"




#include "DIO_Config.h"
#include "DIO_Private.h"
#include "DIO_Reg.h"
#include "DIO_Interface.h"
#include "BUTTON_Interface.h"

uint8 BUTTON_GetStatus(uint8 copy_port,uint8 copy_pin, uint8 *copy_pvalue)
{
	DIO_SetPinDirection(copy_port,copy_pin,INPUT);

	uint8 local_errorStatus =OK;
	 if (copy_pin<= PIN7 && (copy_pvalue != NULL))
	 {


				   switch(copy_port)
				   {
				          case DIO_PORTA : GET_BIT(PINA,copy_pin,*copy_pvalue); break;
				          case DIO_PORTB : GET_BIT(PINB,copy_pin,*copy_pvalue); break;
				          case DIO_PORTC : GET_BIT(PINC,copy_pin,*copy_pvalue); break;
				          case DIO_PORTD : GET_BIT(PIND,copy_pin,*copy_pvalue); break;
				          default :local_errorStatus=NOK ; break ;
				   }

	 }
	 else
	 {
		 local_errorStatus= NOK;

	 }
	return local_errorStatus;

}



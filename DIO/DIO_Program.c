/*
 * DIO_Programm.c
 *
 *  Created on: Dec 8, 2023
 *      Author: Hp
 */


#include "STD_Types.h"
#include "BITMATH.h"


#include "DIO_Config.h"
#include "DIO_Private.h"
#include "DIO_Reg.h"
#include "DIO_Interface.h"


uint8 DIO_SetPinDirection(uint8 copy_port,
		                 uint8 copy_pin,
						 uint8 copy_direction)
{
	uint8 local_errorStatus = OK;
   if (copy_pin <= PIN7)
   {
	   if (copy_direction == OUTPUT)
	   {
		   switch(copy_port)
		   {
		          case DIO_PORTA : SET_BIT(DDRA,copy_pin); break;
		          case DIO_PORTB : SET_BIT(DDRB,copy_pin); break;
		          case DIO_PORTC : SET_BIT(DDRC,copy_pin); break;
		          case DIO_PORTD : SET_BIT(DDRD,copy_pin); break;
		          default :local_errorStatus= NOK ; break ;
		   }

	   }
	   else if (copy_direction == INPUT)
	   {
		   switch(copy_port)
		  		   {
		  		   case DIO_PORTA : CLEAR_BIT(DDRA,copy_pin); break;
		  		   case DIO_PORTB : CLEAR_BIT(DDRB,copy_pin); break;
		  		   case DIO_PORTC : CLEAR_BIT(DDRC,copy_pin); break;
		  		   case DIO_PORTD : CLEAR_BIT(DDRD,copy_pin); break;
		  		   default :local_errorStatus= NOK ; break ;
		  		   }

	   }
	   else
	   {
		   local_errorStatus=NOK ;
	   }
   }
   else
   {
	   local_errorStatus=NOK ;

   }





   return local_errorStatus;
}

uint8 DIO_SetPinValue(uint8 copy_port,
		                 uint8 copy_pin,
						 uint8 copy_value)

{
	uint8 local_errorStatus =OK;
 if (copy_pin<= PIN7 )
 {
	 if (copy_value == OUTPUT_HIGH)
		   {
			   switch(copy_port)
			   {
			          case DIO_PORTA : SET_BIT(PORTA,copy_pin); break;
			          case DIO_PORTB : SET_BIT(PORTB,copy_pin); break;
			          case DIO_PORTC : SET_BIT(PORTC,copy_pin); break;
			          case DIO_PORTD : SET_BIT(PORTD,copy_pin); break;
			          default :local_errorStatus=NOK ; break ;
			   }

		   }
		   else if (copy_value == OUTPUT_LOW)
		   {
			   switch(copy_port)
			  		   {
			  		   case DIO_PORTA : CLEAR_BIT(PORTA,copy_pin); break;
			  		   case DIO_PORTB : CLEAR_BIT(PORTB,copy_pin); break;
			  		   case DIO_PORTC : CLEAR_BIT(PORTC,copy_pin); break;
			  		   case DIO_PORTD : CLEAR_BIT(PORTD,copy_pin); break;
			  		   default :local_errorStatus=NOK ; break ;
			  		   }

		   }
		   else
		   {
			   local_errorStatus=NOK ;
		   }
 }
 else
 {
	 local_errorStatus=NOK ;

 }
return local_errorStatus;
}




uint8 DIO_SetPortValue(uint8 copy_port,
						 uint8 copy_value)
{
	uint8 local_errorStatus = OK ;


		   switch(copy_port)
		   {
		          case DIO_PORTA :  PORTA = copy_value; break;
		          case DIO_PORTB :  PORTB = copy_value; break;
		          case DIO_PORTC :  PORTC = copy_value; break;
		          case DIO_PORTD :  PORTD = copy_value; break;
		          default :local_errorStatus= NOK ; break ;
		   }




   return local_errorStatus;
}



uint8 DIO_SetPortDirection(uint8 copy_port,
						 uint8 copy_direction)
{
	uint8 local_errorStatus = OK;
   if ( copy_port <= DIO_PORTD)
   {
	   if (copy_direction == OUTPUT)
	   {
		   switch(copy_port)
		   {
		          case DIO_PORTA :  DDRA = PORT_HIGH  ; break;
		          case DIO_PORTB :  DDRB = PORT_HIGH  ; break;
		          case DIO_PORTC :  DDRC = PORT_HIGH  ; break;
		          case DIO_PORTD :  DDRD = PORT_HIGH  ; break;
		          default :local_errorStatus=NOK ; break ;
		   }

	   }
	   else if (copy_direction == INPUT)
	   {
		   switch(copy_port)
		  		   {
		  		   case DIO_PORTA : DDRA = PORT_LOW  ; break;
		  		   case DIO_PORTB : DDRB = PORT_LOW  ; break;
		  		   case DIO_PORTC : DDRC = PORT_LOW  ; break;
		  		   case DIO_PORTD : DDRD = PORT_LOW  ; break;
		  		   default :local_errorStatus=NOK ; break ;
		  		   }

	   }
	   else
	   {
		   local_errorStatus=NOK ;
	   }
   }
   else
   {
	   local_errorStatus=NOK ;

   }

   return local_errorStatus;
}



uint8 DIO_GetPinValue(uint8 copy_port,
						 uint8 copy_pin ,
						 uint8 *copy_pvalue)
{
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



uint8 DIO_setInternalPullup(uint8 copyy_port,uint8 copy_pin)
{
 /* SET PIN AS INPUT */
	DIO_SetPinDirection(copyy_port,copy_pin,INPUT);

 /* SET PIN AS  HIGH */
	DIO_SetPinValue(copyy_port,copy_pin,OUTPUT_HIGH);

	return 0;
}


















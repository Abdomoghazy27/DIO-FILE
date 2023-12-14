/*
 * main.c
 *
 *  Created on: Dec 12, 2023
 *      Author: Hp
 */

#include <util/delay.h>
#include "STD_Types.h"
#include "BITMATH.h"





#include "DIO_Config.h"
#include "DIO_Private.h"
#include "DIO_Reg.h"
#include "DIO_Interface.h"
#include "LED_Interface.h"
#include"BUTTON_Interface.h"
int main(void)
{
uint8 button2;
uint8 button1;
uint8 button;
DIO_SetPinDirection(DIO_PORTA,PIN3,OUTPUT);

while(1)
{
BUTTON_GetStatus(DIO_PORTD,PIN2,&button2);
BUTTON_GetStatus(DIO_PORTD,PIN6,&button1);
BUTTON_GetStatus(DIO_PORTB,PIN0,&button);

if(button2== OUTPUT_HIGH)
{
    DIO_SetPinValue(DIO_PORTA,PIN3,OUTPUT_HIGH);
    LED_ON(DIO_PORTC , PIN2);
    _delay_ms(500);
    DIO_SetPinValue(DIO_PORTA,PIN3,OUTPUT_LOW);
    _delay_ms(2000);
    LED_OFF(DIO_PORTC,PIN2);

    DIO_SetPinValue(DIO_PORTA,PIN3,OUTPUT_HIGH);
    LED_ON(DIO_PORTC , PIN7);
    _delay_ms(500);
    DIO_SetPinValue(DIO_PORTA,PIN3,OUTPUT_LOW);
    _delay_ms(2000);
    LED_OFF(DIO_PORTC,PIN7);

    DIO_SetPinValue(DIO_PORTA,PIN3,OUTPUT_HIGH);
    LED_ON(DIO_PORTD,PIN3);
    _delay_ms(500);
    DIO_SetPinValue(DIO_PORTA,PIN3,OUTPUT_LOW);
    _delay_ms(2000);
    LED_OFF(DIO_PORTC,PIN7);




}
else if(button1== OUTPUT_HIGH)
{
	// 001
	LED_ON(DIO_PORTC ,PIN2);
	_delay_ms(500);
	LED_OFF(DIO_PORTC,PIN2);

	//010
	LED_ON(DIO_PORTC , PIN7);
	_delay_ms(500);
	LED_OFF(DIO_PORTC,PIN7);

	//011
	LED_ON(DIO_PORTC ,PIN2);
	LED_ON(DIO_PORTC , PIN7);
	_delay_ms(500);
	LED_OFF(DIO_PORTC,PIN7);
	LED_OFF(DIO_PORTC,PIN2);

	//100
	LED_ON(DIO_PORTD,PIN3);
    _delay_ms(500);
    LED_OFF(DIO_PORTD,PIN3);


    //101
    LED_ON(DIO_PORTC ,PIN2);
    LED_ON(DIO_PORTD,PIN3);
  	_delay_ms(500);
  	LED_OFF(DIO_PORTC,PIN2);
   	LED_OFF(DIO_PORTD,PIN3);




	//110
   	LED_ON(DIO_PORTC,PIN7);
   	LED_ON(DIO_PORTD,PIN3);
  	_delay_ms(500);
   	LED_OFF(DIO_PORTC,PIN7);
   	LED_OFF(DIO_PORTD,PIN3);


   	//111
   	LED_ON(DIO_PORTC,PIN7);
   	LED_ON(DIO_PORTD,PIN3);
   	LED_ON(DIO_PORTC ,PIN2);
   	_delay_ms(500);
   	LED_OFF(DIO_PORTC,PIN2);
   	LED_OFF(DIO_PORTC,PIN7);
   	LED_OFF(DIO_PORTD,PIN3);



}
else if (button == OUTPUT_HIGH)
{

	LED_ON(DIO_PORTC ,PIN2);
	_delay_ms(500);
	LED_ON(DIO_PORTC,PIN7);
	_delay_ms(500);
	LED_ON(DIO_PORTD,PIN3);
	_delay_ms(500);

	LED_OFF(DIO_PORTC,PIN2);
   	_delay_ms(500);
   	LED_OFF(DIO_PORTC,PIN7);
   	_delay_ms(500);
   	LED_OFF(DIO_PORTD,PIN3);

   	_delay_ms(500);

   	LED_ON(DIO_PORTD,PIN3);
   	_delay_ms(500);
   	LED_ON(DIO_PORTC,PIN7);
   	_delay_ms(500);
   	LED_ON(DIO_PORTC ,PIN2);
   	_delay_ms(500);

   	LED_OFF(DIO_PORTD,PIN3);
   	_delay_ms(500);
   	LED_OFF(DIO_PORTC,PIN7);
   	_delay_ms(500);
   	LED_OFF(DIO_PORTC,PIN2);

}
else
{
	LED_OFF(DIO_PORTC,PIN2);
   	LED_OFF(DIO_PORTC,PIN7);
   	LED_OFF(DIO_PORTD,PIN3);

}


}

return 0;
}


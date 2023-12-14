 /*
 * LCD_Program.c
 *
 *  Created on: Dec 13, 2023
 *      Author: Hp
 */

#include "util/delay.h"
#include "BITMATH.h"
#include "STD_Types.h"

#include "DIO_Interface.h"
#include "DIO_Reg.h"

#include "LCD_Interface.h"
#include "LCD_Config.h"


void LCD_Init()
{
	_delay_ms(30);

	DIO_SetPinDirection(LCD_CTRL_PORT,LCD_RS_PIN,OUTPUT);
	DIO_SetPinDirection(LCD_CTRL_PORT,LCD_RW_PIN,OUTPUT);
	DIO_SetPinDirection(LCD_CTRL_PORT,LCD_E_PIN,OUTPUT);

	DIO_SetPortDirection(LCD_DATA_PORT,OUTPUT);

	LCD_SendCommand(LCD_SET_LINES_FONT);

	LCD_SendCommand(LCD_SET_DISPLAY_CURSOR_BLANK);

	LCD_SendCommand(LCD_CLEAR_DISPLAY);

	LCD_SendCommand(LCD_SET_ENTRY_MODE);

}



void LCD_SendCommand(uint8 copy_command)
{
DIO_SetPinValue(LCD_CTRL_PORT,LCD_RS_PIN,OUTPUT_LOW);

DIO_SetPinValue(LCD_CTRL_PORT,LCD_RW_PIN,OUTPUT_LOW);

DIO_SetPortValue(LCD_DATA_PORT,copy_command);

DIO_SetPinValue(LCD_CTRL_PORT,LCD_E_PIN,OUTPUT_HIGH);
_delay_ms(2);
DIO_SetPinValue(LCD_CTRL_PORT,LCD_E_PIN,OUTPUT_LOW);

}


void LCD_SendData(uint8 copy_data)
{

	DIO_SetPinValue(LCD_CTRL_PORT,LCD_RS_PIN,OUTPUT_HIGH);

	DIO_SetPinValue(LCD_CTRL_PORT,LCD_RW_PIN,OUTPUT_LOW);

	DIO_SetPortValue(LCD_DATA_PORT,copy_data);

	DIO_SetPinValue(LCD_CTRL_PORT,LCD_E_PIN,OUTPUT_HIGH);
	_delay_ms(2);
	DIO_SetPinValue(LCD_CTRL_PORT,LCD_E_PIN,OUTPUT_LOW);


 }




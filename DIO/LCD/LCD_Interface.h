/*
 * LCD_Interface.h
 *
 *  Created on: Dec 13, 2023
 *      Author: Hp
 */

#ifndef LCD_LCD_INTERFACE_H_
#define LCD_LCD_INTERFACE_H_

void LCD_SendCommand(uint8 copy_command);
void LCD_SendData(uint8 copy_data);

void LCD_Init();

#endif /* LCD_LCD_INTERFACE_H_ */

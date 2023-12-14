/*
 * LCD_Config.h
 *
 *  Created on: Dec 13, 2023
 *      Author: Hp
 */

#ifndef LCD_LCD_CONFIG_H_
#define LCD_LCD_CONFIG_H_


#define LCD_DATA_PORT   DIO_PORTA
#define LCD_CTRL_PORT   DIO_PORTB



#define LCD_RS_PIN     PIN1
#define LCD_RW_PIN     PIN2
#define LCD_E_PIN      PIN3

/* 8 BIT INIT */
#define LCD_SET_LINES_FONT                  0000111100
#define LCD_SET_DISPLAY_CURSOR_BLANK        0000001000
#define LCD_CLEAR_DISPLAY                   0000000001
#define LCD_SET_ENTRY_MODE                  0000000111












#endif /* LCD_LCD_CONFIG_H_ */

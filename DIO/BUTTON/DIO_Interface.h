/*
 * DIO_Interface.h
 *
 *  Created on: Dec 8, 2023
 *      Author: Hp
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_



#define DIO_PORTA    0
#define DIO_PORTB    1
#define DIO_PORTC    2
#define DIO_PORTD    3


#define PIN0         0
#define PIN1         1
#define PIN2         2
#define PIN3         3
#define PIN4         4
#define PIN5         5
#define PIN6         6
#define PIN7         7

#define OUTPUT       1
#define INPUT        0

#define OUTPUT_HIGH  1
#define OUTPUT_LOW   0

#define PORT_HIGH    0XFF
#define PORT_LOW     0

uint8 DIO_SetPinDirection(uint8 copy_port,
		                 uint8 copy_pin,
						 uint8 copy_direction);




uint8 DIO_SetPinValue(uint8 copy_port,
		                 uint8 copy_pin,
						 uint8 copy_value);


uint8 DIO_SetPortDirection(uint8 copy_port,
						 uint8 copy_direction);

uint8 DIO_SetPortValue(uint8 copy_port,
						 uint8 copy_value);




uint8 DIO_GetPinValue(uint8 copy_port,
						 uint8 copy_pin ,
						 uint8 *copy_value);


uint8 DIO_setInternalPullup(uint8 copyy_port,uint8 copy_pin);



#endif /* DIO_INTERFACE_H_ */




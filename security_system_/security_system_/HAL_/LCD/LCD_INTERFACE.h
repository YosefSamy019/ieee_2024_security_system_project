/*
 * LCD_INTERFACE.h
 *
 * Created: 20/03/2024 01:47:56
 *  Author: shrou
 */ 


#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_


#define F_CPU 16000000
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO/DIO_INTERFACE.h"

#include "LED/LED_INTERFACE.h"
#include "SEV_SEG/SEV_SEG_INTERFACE.h"
#include <util/delay.h>

#define E PIN_A0
#define RS PIN_A2
#define RW PIN_A3
#define DB4 PIN_A4
#define DB5 PIN_A5
#define DB6 PIN_A6
#define DB7 PIN_A7

void LCD_initialize(void);

void LCD_WriteCmd(u8 cmd);

void LCD_WriteData(u8 Data);

void LCD_WriteString(u8 *str);

void LCD_Clear(void);






#endif /* LCD_INTERFACE_H_ */
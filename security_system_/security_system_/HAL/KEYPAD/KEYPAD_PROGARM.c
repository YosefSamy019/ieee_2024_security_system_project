/*
 * KEYPAD_PROGARM.c
 *
 * Created: 18/03/2024 15:00:29
 *  Author: shrou
 */ 
#include <avr/delay.h>



#include "DIO_interface.h"
#include "STD_TYPES.h"
#include "REG.h"



#define row0  PIN_B0
#define row1  PIN_B1
#define row2  PIN_B2
#define row3  PIN_B3

#define coloum0  PIN_B4
#define coloum1  PIN_B5
#define coloum2  PIN_B6
#define coloum3  PIN_B7

#define keypad  PORTB

#define rows_init  PIN_B0
#define rows_end  PIN_B3

#define coloums_init  PIN_B4
#define coloums_end  PIN_B7







u8 keypad_buttons[4][4]={   {'7','8','9','/'},
                           {'4','5','6','*'} ,
						   {'1','2','3','-'},
						   {'?','0','_','+'}
						   }
						   

void KEYPAD_INIT(void)
{
	DIO_pinMode(row0,INPUT);
	DIO_pinMode(row1,INPUT);
	DIO_pinMode(row2,INPUT);
	DIO_pinMode(row3,INPUT);
	
	DIO_pinMode(coloum0,OUTPUT);
	DIO_pinMode(coloum1,OUTPUT);
	DIO_pinMode(coloum2,OUTPUT);
	DIO_pinMode(coloum3,OUTPUT);
	
	
	DIO_digitalWrite(coloum0,HIGH);
	DIO_digitalWrite(coloum1,HIGH);
	DIO_digitalWrite(coloum2HIGH);
	DIO_digitalWrite(coloum3,HIGH);
}



 u8 KEYPAD_GET_PRESS(void)
 {
	 
	 u8 ret_data =NOT_PRESS;
	 u8 
	 u8 rows ;
	 u8 coloums;
	 
	 
	 
	 
	 for(coloums=coloums_init;coulms=<coulms_end;coloums++)
	 {
		 for(rows=rows_init;rows<=rows_end;rows++)
		 {
			 
			 
			 
		 }
		 
	 }
	 
	 
	 
	 
	 
 }
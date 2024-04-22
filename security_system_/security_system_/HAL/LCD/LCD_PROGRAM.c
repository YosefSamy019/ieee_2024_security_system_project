/*
 * LCD_PROGRAM.c
 *
 * Created: 19/03/2024 22:00:11
 *  Author: shrou
 */ 

#include "LCD_INTERFACE.h"

static u8 initialVar=0;

void LCD_initialize(void){
	
	DIO_pinMode(PIN_A0,OUTPUT);
	DIO_pinMode(PIN_A1,OUTPUT);
	DIO_pinMode(PIN_A2,OUTPUT);
	DIO_pinMode(PIN_A3,OUTPUT);
	DIO_pinMode(PIN_A4,OUTPUT);
	DIO_pinMode(PIN_A5,OUTPUT);
	DIO_pinMode(PIN_A6,OUTPUT);
	DIO_pinMode(PIN_A7,OUTPUT);
	
	//initial steps from datasheet
	
	_delay_ms(30);
	
	LCD_WriteCmd(0b00100000);
	LCD_WriteCmd(0b00100000);
	LCD_WriteCmd(0b10000000);
	_delay_ms(1);
	LCD_WriteCmd(0x00);
	LCD_WriteCmd(0xF0); //1111 0000
	_delay_ms(1);
	LCD_WriteCmd(0x00);
	LCD_WriteCmd(0b00010000);
	_delay_ms(2);
	LCD_WriteCmd(0x00);
	LCD_WriteCmd(0b00010000);
	_delay_ms(2);
	

	
	initialVar=1;
	
}

void LCD_WriteCmd(u8 cmd){
	
	//CMD 0000 0000
	
	DIO_digitalWrite(RS,LOW);
	DIO_digitalWrite(RW,LOW);
	
	DIO_digitalWrite(PIN_A4,GET_BIT(cmd,4)); //D4
	DIO_digitalWrite(PIN_A5,GET_BIT(cmd,5)); //D5
	DIO_digitalWrite(PIN_A6,GET_BIT(cmd,6)); //D6
	DIO_digitalWrite(PIN_A7,GET_BIT(cmd,7)); //D7
	
	DIO_digitalWrite(E,HIGH);
	_delay_ms(1);
	DIO_digitalWrite(E,LOW);
	if(initialVar==1){
	DIO_digitalWrite(DB4,GET_BIT(cmd,0)); //D4
	DIO_digitalWrite(DB5,GET_BIT(cmd,1)); //D5
	DIO_digitalWrite(DB6,GET_BIT(cmd,2)); //D6
	DIO_digitalWrite(DB7,GET_BIT(cmd,3)); //D7
	
	DIO_digitalWrite(E,HIGH);
	_delay_ms(1);
	DIO_digitalWrite(E,LOW);
	}
	_delay_ms(2);
}


void LCD_WriteData(u8 Data){
	
		//Data 0000 0000
		
		DIO_digitalWrite(RS,HIGH);
		DIO_digitalWrite(RW,LOW);
		
		DIO_digitalWrite(PIN_A4,GET_BIT(Data,4)); //D4
		DIO_digitalWrite(PIN_A5,GET_BIT(Data,5)); //D5
		DIO_digitalWrite(PIN_A6,GET_BIT(Data,6)); //D6
		DIO_digitalWrite(PIN_A7,GET_BIT(Data,7)); //D7
		
		DIO_digitalWrite(E,HIGH);
		_delay_ms(1);
		DIO_digitalWrite(E,LOW);
		DIO_digitalWrite(DB4,GET_BIT(Data,0)); //D4
		DIO_digitalWrite(DB5,GET_BIT(Data,1)); //D5
		DIO_digitalWrite(DB6,GET_BIT(Data,2)); //D6
		DIO_digitalWrite(DB7,GET_BIT(Data,3)); //D7
			
		DIO_digitalWrite(E,HIGH);
		_delay_ms(1);
		DIO_digitalWrite(E,LOW);
		_delay_ms(2);
		}
		
void LCD_WriteString(u8 *str){
	
	u8 index=0;
	while(index<10){
		LCD_WriteString(str[index]);
		index++;
	}
}


	
void LCD_Clear(void){
	LCD_WriteCmd(0x01);
}

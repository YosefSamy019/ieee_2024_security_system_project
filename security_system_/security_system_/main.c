/*
 * security_system_.c
 *
 * Created: 20/03/2024 01:24:25
 * Author : shrou
 */ 

#include <avr/io.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO/DIO_INTERFACE.h"
#include "LED/LED_INTERFACE.h"
#include "SEV_SEG/SEV_SEG_INTERFACE.h"
#include "KEYPAD_INTERFACE.h"
#include "BUZZER_INTERFACE.h"
#include "LCD_INTERFACE.h"

#define PASSWORD "195"
#define RIGHT 1
#define WRONG 0
u8 check(u8 *interd_pass, u8 *correct_pass);
u8 password[]=PASSWORD;
u8 counter=0;
int main(void)
{
	
	SEV_SEG_init();
	LED_init(LED_GREEN);
	LED_init(LED_RED);
	BUZ_intiat(Buz_pin);
	KPD_Init();
	LCD_initialize();
	
	
    /* Replace with your application code */
    while (counter<3) 
    {
		LCD_Clear();
		LED_off(LED_RED);
		LED_off(LED_GREEN);
		LCD_WriteString("WELCOM");
		_delay_ms(80);
		//counter=0;
		while(counter<3)           //number of tries to enter passwod 
		{
			u8 input_pass[9];
			u8 res;
			u8 i=0,k=0;
			
		    LCD_Clear();
		    LCD_WriteString("enter the pass:");
			_delay_ms(50);
			 LCD_Clear();
			
			while(i==0)
			{
				input_pass[k]=KPD_GetPressedKey();
				if(input_pass[k] != 0xff)
				{
					if(input_pass[k] =='=')
					  {
						i=1;
						input_pass[k]='\0';
					   }
					else
					   {
						
						LCD_WriteData('*');
						k++;
	            		}
				 }
			}
			LCD_Clear();
			res=check(input_pass,password);
			
			     if(res==1)
				   {
				
				    LCD_WriteString("right");
				    LED_on(LED_GREEN);
				   _delay_ms(100);
				    counter=3;             
			        }
			     else
				    {
				
				 if(counter<2){
					LCD_WriteString("wrong try again ");
			     	_delay_ms(60);}
			 	  if(counter==2){
					   
					   SEV_SEG_on();
					   for (u8 j=9;j>=0;j--)
					   {
						   SEV_SEG_display(j);
						   _delay_ms(30);
						   if (j==0)
						   break;
					   }
					   SEV_SEG_off();
					
					LCD_WriteString("faild");
					BUZ_on(Buz_pin);
					while(1)
					{LED_on(LED_RED);
					_delay_ms(10);
					LED_off(LED_RED);
					_delay_ms(10);
					}
					
					//_delay_ms(100);
					
				}
				counter++;
				
			}
			
			
		}
		
	
    }
}

u8 check(u8 *interd_pass, u8 *correct_pass)
{
	u8 result=RIGHT;
	for(u8 i=0;i<4;i++)
	{
		if(interd_pass[i] != correct_pass[i]){
			result=WRONG;
			break;
		}
	}
	return result;
}

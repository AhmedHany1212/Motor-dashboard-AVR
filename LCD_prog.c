/*
 * LCD_prog.c
 *
 *  Created on: Aug 30, 2019
 *      Author: lenovo
 */
#include"typedef.h"
#include"lcd_prog.h"
#include"DIO_int.h"
#include<util/delay.h>
#include"AVR_DIO_REG.h"


void LCD_voidInit(void)

{
	_delay_ms(15);
    DIO_u8SetPortDirection(DIO_PORT_A,DIO_PORT_OUTPUT);
    DIO_u8SetPortDirection(DIO_PORT_B,DIO_PORT_OUTPUT);


 LCD_voidSendCmd(0x38);
_delay_ms(1);
LCD_voidSendCmd(0x80);
_delay_ms(15);
LCD_voidSendCmd(0x0E);
//_delay_ms(15);
//LCD_voidSendCmd(0x14);

}


void LCD_voidSendCmd(u8 cmd)
{
	// CMD IS COMMANDS

//rs LOW write command
	DIO_u8SetPinValue(DIO_PORT_B,0,DIO_PIN_LOW);
//rw LOW write
	DIO_u8SetPinValue(DIO_PORT_B,1,DIO_PIN_LOW);
	DIO_u8SetPortValue(DIO_PORT_A,cmd);
//enable
	 DIO_u8SetPinValue(DIO_PORT_B,2,DIO_PIN_HIGH);
	_delay_ms(1);
	 DIO_u8SetPinValue(DIO_PORT_B,2,DIO_PIN_LOW);
	_delay_ms(100);


}

void LCD_voidSendChar(u8 cmd)
{

//RW low WRITE
      DIO_u8SetPinValue(DIO_PORT_B,1,0);
//RS high SEND DATA
	  DIO_u8SetPinValue(DIO_PORT_B,0,1);
// SEND DATA TO PORT A
	  DIO_u8SetPortValue(DIO_PORT_A,cmd);
//ENABLE
	 DIO_u8SetPinValue(DIO_PORT_B,2,1);
	_delay_ms(1);
	 DIO_u8SetPinValue(DIO_PORT_B,2,0);
	 _delay_ms(100);
}

void LCD_voidSendString(u8* u8Str)
{
	u8 i=0;
	while(u8Str[i] !='\0')
	{
		LCD_voidSendChar(u8Str[i]);
		i++;

	}

}







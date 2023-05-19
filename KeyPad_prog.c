/*
 * KeyPad_prog.c
 *
 *  Created on: Aug 31, 2019
 *      Author: lenovo
 */
#include"typedef.h"
#include "AVR_DIO_REG.h"
#include"DIO_int.h"
#include"KeyPad_int.h"


u8 KeyPad_Col[]={C0,C1,C2,C3};
u8 KeyPad_Row[]={R0,R1,R2,R3};


void KeyPad_voidInit(void)
{
	//configure coloumn dir
	DIO_u8SetPortDirection(KeyPad_Port,0xF0);
// pull up
	DIO_u8SetPortValue(KeyPad_Port,0xFF);
}

void KeyPad_u8GetKey(u8*key)
{
u8 i,j,gitbit;

for(i=0;i<KeyPad_Num_OF_COL;i++)
{
	DIO_u8SetPortValue(KeyPad_Port,0xff);
	DIO_u8SetPinValue(KeyPad_Port,KeyPad_Col[i],DIO_PIN_LOW);
for(j=0;j<KeyPad_Num_OF_ROW;j++)

	{
	DIO_u8GetPinValue(KeyPad_Port,KeyPad_Row[j],&gitbit);
	if(!(gitbit))
	{
		while(!(gitbit))
				{
					DIO_u8GetPinValue(KeyPad_Port,KeyPad_Row[j],&gitbit);
				}
	switch(i)
	{
	case 0: if(j==0)      *key= '1';
	        else if(j==1) *key= '4';
	        else if(j==2) *key= '7';
	        else if(j==3) *key= '=';
			break;

	case 1: if(j==0)      *key= '2';
	        else if(j==1) *key= '5';
	        else if(j==2) *key= '8';
	        else if(j==3) *key= '*';
			break;



	case 2: if(j==0)      *key= '3';
	        else if(j==1) *key= '6';
	        else if(j==2) *key= '9';
	        else if(j==3) *key= '%';
			break;

	case 3: if(j==0)      *key= '+';
	        else if(j==1) *key= '-';
	        else if(j==2) *key= '/';
	        else if(j==3) *key= '0';
			break;
	}
	}
	}
    }
    }



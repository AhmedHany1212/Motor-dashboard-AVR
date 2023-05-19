
#include "typedef.h"
#include "DIO_int.h"
#include"KeyPad_int.h"
#include"LCD_prog.h"
#include<util/delay.h>
int main(void)
{

	LCD_voidInit();
	KeyPad_voidInit();
	LCD_voidSendCmd(0x01);
	u8 chary;
	DIO_u8SetPortDirection(DIO_PORT_A,0xff);

	while(1)
	{

	KeyPad_u8GetKey(&chary);
	if(chary=='1')
		{
		LCD_voidSendChar(chary);

			DIO_u8SetPortValue(DIO_PORT_A,0x01);
			_delay_ms(3);
			DIO_u8SetPortValue(DIO_PORT_A,0x02);
			_delay_ms(3);
			DIO_u8SetPortValue(DIO_PORT_A,0x04);
			_delay_ms(3);
			DIO_u8SetPortValue(DIO_PORT_A,0x08);
			_delay_ms(3);

		}
	if(chary=='2')
	{
		LCD_voidSendChar(chary);

			DIO_u8SetPortValue(DIO_PORT_A,0x08);
			_delay_ms(3);
			DIO_u8SetPortValue(DIO_PORT_A,0x04);
			_delay_ms(3);
			DIO_u8SetPortValue(DIO_PORT_A,0x02);
			_delay_ms(3);
			DIO_u8SetPortValue(DIO_PORT_A,0x01);
			_delay_ms(3);
	}
	}

return 0;
}

#ifndef  DIO_INT_H_
#define  DIO_INT_H_





#define DIO_PORT_A 0
#define DIO_PORT_B 1
#define DIO_PORT_C 2
#define DIO_PORT_D 3

#define DIO_PIN_OUTPUT   1
#define DIO_PIN_INPUT    0

#define DIO_PIN_HIGH     1
#define DIO_PIN_LOW      0

#define DIO_PORT_OUTPUT  255
#define DIO_PORT_INPUT   0


#define DIO_PORT_HIGH  255
#define DIO_PORT_LOW   0





u8 DIO_u8SetPinDirection(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Direction);
u8 DIO_u8SetPortDirection(u8 Copy_u8Port,u8 Copy_u8Direction);

u8 DIO_u8SetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Value);
u8 DIO_u8SetPortValue(u8 Copy_u8Port,u8 Copy_u8Value);

u8 DIO_u8GetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin,u8*Copy_u8PValue);
u8 DIO_u8GetPortValue(u8 Copy_u8Port,u8*Copy_u8PValue);







#endif

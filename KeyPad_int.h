/*
 * KeyPad_int.h
 *
 *  Created on: Aug 31, 2019
 *      Author: lenovo
 */

#ifndef KEYPAD_INT_H_
#define KEYPAD_INT_H_
//#include "AVR_DIO_REG.h"
#define   KeyPad_Port        DIO_PORT_D
#define   KeyPad_Num_OF_COL  4
#define   KeyPad_Num_OF_ROW  4



#define R0 0
#define R1 1
#define R2 2
#define R3 3

#define C0 4
#define C1 5
#define C2 6
#define C3 7

void KeyPad_voidInit(void);
void KeyPad_u8GetKey(u8*key);






#endif /* KEYPAD_INT_H_ */

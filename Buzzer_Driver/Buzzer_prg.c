/*
 * Buzzer_prg.c
 *
 *  Created on: May 10, 2020
 *      Author: Anwar
 */
#include "../Lib/Std_types.h"
#include "../Lib/Bit_math.h"
#include"Dio_int.h"
#include"Buzzer_cfg.h"
#include"Buzzer_int.h"
#undef F_CPU
#define F_CPU 8000000
#include <util/delay.h>

void Buzzer_vidInit(void)
{
	Dio_vidSetPinDir(Buzzer_u8PIN,DIO_u8OUTPUT);
}
void Buzzer_vidTurnOn(void)
{
	Dio_vidSetPinVal(Buzzer_u8PIN,DIO_u8HIGH);
}
void Buzzer_vidTurnOff(void)
{
	Dio_vidSetPinVal(Buzzer_u8PIN,DIO_u8LOW);
}

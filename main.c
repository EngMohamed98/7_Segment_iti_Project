/*
 * main.c
 *
 *  Created on: 2/9/2022
 *      Author: Mohamed Abd ElGhany
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA=0xff;
	DDRB=0xff;
	int cat[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
	while(1)
	{
		int i=0;

		for(i=0;i<8;i++)
		{
			SET_BIt(PORTA,i);
			_delay_ms(10);
		}
		for(i=0;i<8;i++)
		{
			CLR_BIt(PORTA,i);
			_delay_ms(10);
		}

		for(i=0;i<10;i++)
		{

			PORTB=cat[i];
			_delay_ms(100);

		}

	}
}

﻿/*
 * led1.c
 *
 * Created: 2022-06-17 오전 11:46:27
 *  Author: PKNU
 */ 

#define F_CPU 7372800
#include <avr/io.h>
#include <util/delay.h>

int main()
{
	DDRA = 0xFF;	// portA를 출력으로 설정 0b 1111 1111
	while(1){
		PORTA = 0xFF;	// portA의 각 비트에 5V 출력
		_delay_ms(1000);
		PORTA = 0x00;	// portA의 각 비트에 0V 출력
		_delay_ms(1000);
	}
	
	return 0;
}
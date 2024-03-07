/*
 * main.c
 *
 *  Created on: Feb 29, 2024
 *      Author: river
 */

#include"../LIB/std_types.h"
#include"../LIB/Bit_math.h"
#include"../MCAL/DIO/DIO_Int.h"
#include"../MCAL/DIO/DIO_Reg.h"
#include"../HAL/LED/LED_Cfg.h"
#include"../HAL/LED/LED_Int.h"
#include"../HAL/SEGEMENT/SEGEMENT_Cfg.h"
#include"../HAL/SEGEMENT/SEGEMENT_Int.h"
#include"util/delay.h"

void number(void){
		SEGEMENT_VidDisplayNumber(3, SEGEMENT_1_PORT);
		SEGEMENT_VidDisplayNumber(0, SEGEMENT_2_PORT);
			_delay_ms(1000);
		for(int j=2;j>=0;j--){
			SEGEMENT_VidDisplayNumber(j, SEGEMENT_1_PORT);
			for(int i=9;i>=0;i--){
				SEGEMENT_VidDisplayNumber(i, SEGEMENT_2_PORT);
				_delay_ms(1000);}}}


void main(void){


SEGEMENT_VidInit();


	while(1){
		LED_u8TurnOnLed(1); // red led
			number();
			LED_u8TurnOffLed(1);


			LED_u8TurnOnLed(2);  //yellow led
			number();
		 LED_u8TurnOffLed(2);

			LED_u8TurnOnLed(3);  // Green led
		    number();
		    LED_u8TurnOffLed(3);

}}



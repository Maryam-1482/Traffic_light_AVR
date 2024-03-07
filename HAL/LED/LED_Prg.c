/*
 * LED.c
 *
 *  Created on: Feb 29, 2024
 *      Author: river
 */


#include"../../LIB/std_types.h"
#include"../../LIB/Bit_math.h"
#include"../../MCAL/DIO/DIO_Int.h"
#include"../../MCAL/DIO/DIO_Reg.h"
#include"LED_Cfg.h"
#include"LED_Int.h"



uint8_t LED_u8TurnOnLed(uint8_t LED_Num){
	uint8_t err_status=E_OK;
	DIO_u8SetPortMode(LED_PORT, FULL_OUTPUT);
	switch(LED_Num){
	case LED_1:
		DIO_u8SetPinMode(LED_PORT,LED_1_PIN,OUTPUT);
		DIO_u8SetPinValue(LED_PORT,LED_1_PIN,HIGH);
		break;
	case LED_2:
		DIO_u8SetPinMode(LED_PORT,LED_2_PIN,OUTPUT);
			DIO_u8SetPinValue(LED_PORT,LED_2_PIN,HIGH);
			break;
	case LED_3:
		DIO_u8SetPinMode(LED_PORT,LED_3_PIN,OUTPUT);
			DIO_u8SetPinValue(LED_PORT,LED_3_PIN,HIGH);
			break;
	case LED_4:
		DIO_u8SetPinMode(LED_PORT,LED_4_PIN,OUTPUT);
			DIO_u8SetPinValue(LED_PORT,LED_4_PIN,HIGH);
			break;
	case LED_5:
		DIO_u8SetPinMode(LED_PORT,LED_5_PIN,OUTPUT);
			DIO_u8SetPinValue(LED_PORT,LED_5_PIN,HIGH);
			break;
	case LED_6:
		DIO_u8SetPinMode(LED_PORT,LED_6_PIN,OUTPUT);
			DIO_u8SetPinValue(LED_PORT,LED_6_PIN,HIGH);
			break;
	case LED_7:
		DIO_u8SetPinMode(LED_PORT,LED_7_PIN,OUTPUT);
			DIO_u8SetPinValue(LED_PORT,LED_7_PIN,HIGH);
			break;
	case LED_8:
		DIO_u8SetPinMode(LED_PORT,LED_8_PIN,OUTPUT);
			DIO_u8SetPinValue(LED_PORT,LED_8_PIN,HIGH);
			break;
	default: err_status=E_NOK; break;
	}
	return err_status;
}
uint8_t LED_u8TurnOffLed(uint8_t LED_Num){
	uint8_t err_status=E_OK;
		DIO_u8SetPortMode(LED_PORT, FULL_OUTPUT);
		switch(LED_Num){
		case LED_1:
			DIO_u8SetPinMode( LED_PORT,  LED_1_PIN , OUTPUT);
			DIO_u8SetPinValue(LED_PORT,LED_1_PIN,LOW);
			break;
		case LED_2:
			DIO_u8SetPinMode( LED_PORT,  LED_2_PIN , OUTPUT);
				DIO_u8SetPinValue(LED_PORT,LED_2_PIN,LOW);
				break;
		case LED_3:
			DIO_u8SetPinMode( LED_PORT,  LED_3_PIN , OUTPUT);
				DIO_u8SetPinValue(LED_PORT,LED_3_PIN,LOW);
				break;
		case LED_4:
			DIO_u8SetPinMode( LED_PORT,  LED_4_PIN , OUTPUT);
				DIO_u8SetPinValue(LED_PORT,LED_4_PIN,LOW);
				break;
		case LED_5:
			DIO_u8SetPinMode( LED_PORT,  LED_5_PIN , OUTPUT);
				DIO_u8SetPinValue(LED_PORT,LED_5_PIN,LOW);
				break;
		case LED_6:
			DIO_u8SetPinMode( LED_PORT,  LED_6_PIN , OUTPUT);
				DIO_u8SetPinValue(LED_PORT,LED_6_PIN,LOW);
				break;
		case LED_7:
			DIO_u8SetPinMode( LED_PORT,  LED_7_PIN , OUTPUT);
				DIO_u8SetPinValue(LED_PORT,LED_7_PIN,LOW);
				break;
		case LED_8:
			DIO_u8SetPinMode( LED_PORT,  LED_8_PIN , OUTPUT);
				DIO_u8SetPinValue(LED_PORT,LED_8_PIN,LOW);
				break;
		default: err_status=E_NOK; break;
		}
		return err_status;
	}



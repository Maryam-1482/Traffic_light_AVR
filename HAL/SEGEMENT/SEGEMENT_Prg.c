/*
 * SEGEMENT_Prg.c
 *
 *  Created on: Mar 2, 2024
 *      Author: river
 */

#include"../../LIB/std_types.h"
#include"../../LIB/Bit_math.h"
#include"../../MCAL/DIO/DIO_Int.h"
#include"../../MCAL/DIO/DIO_Reg.h"
#include"SEGEMENT_Cfg.h"
#include"SEGEMENT_Int.h"
#include"util/delay.h"





static const uint8_t SEGEMENT_Num[10]= {
		0b00111111 , //0
		0b00000110 , //1
		0b01011011 , //2
		0b01001111 , //3
		0b01100110 , //4
		0b01101101 , //5
		0b01111101 , //6
		0b00000111 , //7
		0b01111111 , //8
		0b01101111   //9
};


void SEGEMENT_VidInit(){
	DIO_u8SetPortMode(SEGEMENT_1_PORT, FULL_OUTPUT);
	DIO_u8SetPortMode(SEGEMENT_2_PORT, FULL_OUTPUT);

	 DIO_u8SetPinMode(PORT_A, PIN_0, OUTPUT);
	        	           	   DIO_u8SetPinValue(PORT_A, PIN_0, HIGH);
	        	           	_delay_ms(1000);
}


void SEGEMENT_VidDisplayNumber(uint8_t number , uint8_t port_id){
	if((number>=0) && (number<=9)){
           if( SEGEMENT_TYPE==1){
		DIO_u8SetPortValue(port_id , SEGEMENT_Num[number]);}
           else if  (2==SEGEMENT_TYPE){

		DIO_u8SetPortValue(port_id , ~SEGEMENT_Num[number]);}

}}


void SEGEMENT_VidTurnOff(uint8_t port_id){
	if( SEGEMENT_TYPE==1){
			DIO_u8SetPortMode(port_id ,FULL_INPUT);}
	           else if  (2==SEGEMENT_TYPE){
			DIO_u8SetPortMode(port_id , FULL_INPUT );}}


void SEGEMENT_VidCountUp(uint8_t number , uint8_t port_id){
    for(uint8_t counter = number ; counter<=9;counter ++){
    	SEGEMENT_VidDisplayNumber(port_id , counter);
    	_delay_ms(1000);
    }}

void SEGEMENT_VidCountDown(uint8_t number, uint8_t port_id){
	for(uint8_t counter = number ; counter>=0;counter--){
	    	SEGEMENT_VidDisplayNumber(port_id , counter);
	    	_delay_ms(1000);
	    }}


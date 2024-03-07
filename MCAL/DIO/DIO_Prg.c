/*
 * DIO_Prg.c
 *
 *  Created on: Feb 28, 2024
 *      Author: river
 */

#include"../../LIB/std_types.h"
#include"../../LIB/Bit_math.h"
#include"DIO_Int.h"
#include"DIO_Reg.h"


uint8_t DIO_u8SetPinMode(uint8_t port_id, uint8_t pin_num, uint8_t mode){
	uint8_t err_status=E_OK;
	switch(port_id){
	case PORT_A:
		if(mode==INPUT){
			CLR_BIT(DDRA_REG , pin_num);
		}
		else if(mode==OUTPUT){
			SET_BIT(DDRA_REG , pin_num);}
		else{
			err_status=E_NOK;
		}
		break;

	case PORT_B:
			if(mode==INPUT){
				CLR_BIT(DDRB_REG , pin_num);}
			else if(mode==OUTPUT){
				SET_BIT(DDRB_REG , pin_num);}
			else{
				err_status=E_NOK;
			}
			break;

	case PORT_C:
			if(mode==INPUT){
				CLR_BIT(DDRC_REG , pin_num);}
			else if(mode==OUTPUT){
				SET_BIT(DDRC_REG , pin_num);}
			else{
				err_status=E_NOK;
			}
			break;

	case PORT_D:
			if(mode==INPUT){
				CLR_BIT(DDRD_REG  ,pin_num);}
			else if(mode==OUTPUT){
				SET_BIT(DDRD_REG , pin_num);}
			else{
				err_status=E_NOK;
			}
			break;

	default:
		err_status=E_NOK;
	}
	return err_status;}


uint8_t DIO_u8SetPortMode(uint8_t port_id, uint8_t mode){
	uint8_t err_status=E_OK;
	switch(port_id){
	case PORT_A:
		DDRA_REG=mode;  break;
	case PORT_B:
			DDRB_REG=mode;  break;
	case PORT_C:
			DDRC_REG=mode;  break;
	case PORT_D:
			DDRD_REG=mode;  break;
	default:  err_status=E_NOK; break;
	}
	return err_status;}

uint8_t DIO_u8SetPortValue(uint8_t port_id, uint8_t value){
       uint8_t err_status=E_OK;
       switch(port_id){
       case PORT_A:
       		PORTA_REG=value;  break;
       	case PORT_B:
       			PORTB_REG=value;  break;
       	case PORT_C:
       			PORTC_REG=value;  break;
       	case PORT_D:
       			PORTD_REG=value;  break;
       	default:  err_status=E_NOK; break;
       	}
       	return err_status;}

uint8_t DIO_u8GetPinValue(uint8_t port_id, uint8_t pin_num ){

	uint8_t value;
	switch(port_id){
	case PORT_A:
		value=GET_BIT(PINA_REG,pin_num);
		break;
	case PORT_B:
			value=GET_BIT(PINB_REG,pin_num);
			break;
	case PORT_C:
			value=GET_BIT(PINC_REG,pin_num);
			break;
	case PORT_D:
			value=GET_BIT(PIND_REG,pin_num);
			break;

       	}
       	return value;}

uint8_t DIO_u8GetPortValue(uint8_t port_id , uint8_t *value){
	uint8_t err_status=E_OK;
	switch(port_id){
	case PORT_A:
		value=PORTA_REG; break;
	case PORT_B:
			value=PORTB_REG; break;
	case PORT_C:
			value=PORTC_REG; break;
	case PORT_D:
			value=PORTD_REG; break;
	default:  err_status=E_NOK; break;
	       	}
	       	return err_status;}

uint8_t DIO_u8SetPinValue(uint8_t port_id , uint8_t pin_num, uint8_t value){
	uint8_t err_status=E_OK;
	switch(port_id){
	case PORT_A:
		if(value==LOW){
			CLR_BIT(PORTA_REG, pin_num);}
			else if(value==HIGH){
				SET_BIT(PORTA_REG , pin_num);}
			else{
				err_status=E_NOK;
			}
		break;
	case PORT_B:
		if(value==LOW){
					CLR_BIT(PORTB_REG, pin_num);}
					else if(value==HIGH){
						SET_BIT(PORTB_REG , pin_num);}
					else{
						err_status=E_NOK;
					}
		break;
	case PORT_C:
		if(value==LOW){
					CLR_BIT(PORTC_REG, pin_num);}
					else if(value==HIGH){
						SET_BIT(PORTC_REG , pin_num);}
					else{
						err_status=E_NOK;
					}
		break;
	case PORT_D:
		if(value==LOW){
					CLR_BIT(PORTD_REG, pin_num);}
					else if(value==HIGH){
						SET_BIT(PORTD_REG , pin_num);}
					else{
						err_status=E_NOK;
					}
		break;
	default:  err_status=E_NOK; break;
	       	}
	  	return err_status;}



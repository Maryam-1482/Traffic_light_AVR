/*
 * DIO_Int.h
 *
 *  Created on: Feb 28, 2024
 *      Author: river
 */

#ifndef MCAL_DIO_DIO_INT_H_
#define MCAL_DIO_DIO_INT_H_

/**
 * macros used in port_id
 */
#define PORT_A      (uint8_t)0
#define PORT_B      (uint8_t)1
#define PORT_C      (uint8_t)2
#define PORT_D      (uint8_t)3

/**
 * macros used in pin_id
 */
#define PIN_0      (uint8_t)0
#define PIN_1      (uint8_t)1
#define PIN_2      (uint8_t)2
#define PIN_3      (uint8_t)3
#define PIN_4      (uint8_t)4
#define PIN_5      (uint8_t)5
#define PIN_6      (uint8_t)6
#define PIN_7      (uint8_t)7

/**
 * macros used in  pin mode
 */
#define INPUT       (uint8_t)0
#define OUTPUT      (uint8_t)1

/**
 * macros used in value
 */

#define LOW         (uint8_t)0
#define HIGH        (uint8_t)1

/**
 * macros used in  port mode
 */

#define FULL_INPUT   (uint8_t)0
#define FULL_OUTPUT  (uint8_t)0xff

/**
 * macros used in  err_status
 */
#define E_OK         (uint8_t)0
#define E_NOK        (uint8_t)1




uint8_t DIO_u8SetPinMode(uint8_t port_id, uint8_t pin_num, uint8_t mode);
uint8_t DIO_u8SetPortMode(uint8_t port_id, uint8_t mode);
uint8_t DIO_u8SetPortValue(uint8_t port_id, uint8_t value);
uint8_t DIO_u8GetPinValue(uint8_t port_id, uint8_t pin_num );
uint8_t DIO_u8GetPortValue(uint8_t port_id , uint8_t *value);
uint8_t DIO_u8SetPinValue(uint8_t port_id , uint8_t pin_num, uint8_t value);


#endif /* MCAL_DIO_DIO_INT_H_ */

/*
 * SEGEMENT_Int.h
 *
 *  Created on: Mar 2, 2024
 *      Author: river
 */

#ifndef HAL_SEGEMENT_SEGEMENT_INT_H_
#define HAL_SEGEMENT_SEGEMENT_INT_H_

#define CATHOD     (uint8_t)1
#define ANODE      (uint8_t)2





void SEGEMENT_VidInit();
void SEGEMENT_VidDisplayNumber(uint8_t number , uint8_t port_id);
void SEGEMENT_VidTurnOff(uint8_t port_id);
void SEGEMENT_VidCountUp(uint8_t number , uint8_t port_id);
void SEGEMENT_VidCountDown(uint8_t number , uint8_t port_id);












#endif /* HAL_SEGEMENT_SEGEMENT_INT_H_ */

/*
 * state_machine.h
 *
 *  Created on: Dec 30, 2021
 *      Author: jpaca
 */

#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

void vTask_StateMachine(void* params);

#include "main.h"
#include "sensor_read.h"

#define HIGH	1U
#define LOW		0U
#define exit_sensor_sens1	1U
#define exit_sensor_sens2	2U
#define exit_sensor_reset	0U

typedef enum {
	CLC_train_not_present = 0,
	CLC_train_crossing,
	CLC_train_exit
}CLC_state;

uint8_t state_machine_get_state(void);

#endif /* STATE_MACHINE_H */

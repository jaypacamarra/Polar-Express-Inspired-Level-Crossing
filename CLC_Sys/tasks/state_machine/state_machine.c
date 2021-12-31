/*
 * state_machine.c
 *
 *  Created on: Dec 30, 2021
 *      Author: jpaca
 */
#include "state_machine.h"

static uint8_t CLC_current_state = CLC_train_not_present;

void vTask_StateMachine(void* params)
{
	uint8_t exit_sensor = exit_sensor_reset;	/* exit sensor for train, initialized as reset, 0 */

	for(;;)
	{
		uint8_t sens1 = intersection_ctrl_get_sensor1_reading();
		uint8_t sens2 = intersection_ctrl_get_sensor2_reading();

		if ( sens1 == LOW && CLC_current_state != CLC_train_crossing )
		{
			CLC_current_state = CLC_train_crossing;
			exit_sensor = exit_sensor_sens2;
		}
		else if ( sens2 == LOW && CLC_current_state != CLC_train_crossing )
		{
			CLC_current_state = CLC_train_crossing;
			exit_sensor = exit_sensor_sens1;
		}

		if ( exit_sensor ==  exit_sensor_sens1 && CLC_current_state == CLC_train_crossing )
		{
			if ( sens1 == LOW )
			{
				CLC_current_state = CLC_train_exit;
				exit_sensor = exit_sensor_reset;
			}
		}
		else if ( exit_sensor ==  exit_sensor_sens2 && CLC_current_state == CLC_train_crossing )
		{
			if ( sens2 == LOW )
			{
				CLC_current_state = CLC_train_exit;
				exit_sensor = exit_sensor_reset;
			}
		}
	}
}

uint8_t state_machine_get_state(void)
{
	return CLC_current_state;
}

#include "state_machine.h"

/*
 * vTask_StateMachine
 *
 * Keeps track of the christmas level crossing (CLC) state
 * possible states defined in state_machine.h
 *
 */

static uint8_t CLC_current_state = CLC_train_not_present;

void vTask_StateMachine(void* params)
{
	for(;;)
	{
		uint8_t sens1 = sensor_read_get_sensor1_reading();
		uint8_t sens2 = sensor_read_get_sensor2_reading();

		if ( sens1 == LOW )
		{
			CLC_current_state = CLC_train_crossing;
		}
		if ( sens2 == LOW )
		{
			CLC_current_state = CLC_train_exit;
		}
	}
}

uint8_t state_machine_get_state(void)
{
	return CLC_current_state;
}

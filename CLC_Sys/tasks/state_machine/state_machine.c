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
		if ( sensor_read_get_sensor1_reading() == LOW )
		{
			while ( sensor_read_get_sensor2_reading() == HIGH )
				CLC_current_state = CLC_train_crossing;
			while ( sensor_read_get_sensor2_reading() == LOW )
				CLC_current_state = CLC_train_exit_in_progress;
			CLC_current_state = CLC_train_exit_fully;
			vTaskDelay(pdMS_TO_TICKS(2000)); //delay to make sure train fully exits
		}
	}
}

uint8_t state_machine_get_state(void)
{
	return CLC_current_state;
}

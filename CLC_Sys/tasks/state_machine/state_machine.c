/*
 * state_machine.c
 *
 *  Created on: Dec 30, 2021
 *      Author: jpaca
 */
#include "state_machine.h"

static uint8_t CLC_current_state = CLC_train_not_present;
static uint8_t CLC_train_exit_timeout_timer_state = timer_not_started;

void vTask_StateMachine(void* params)
{
//	TickType_t xLastWakeTime;         // will hold the timestamp at which the task was last unblocked
//	const TickType_t xFrequency = 20; // task frequency in ms
//
//	// Initialize the xLastWakeTime variable with the current time;
//	xLastWakeTime = xTaskGetTickCount();
	for(;;)
	{
		// Wait for the next cycle
//		vTaskDelayUntil(&xLastWakeTime, xFrequency);

		uint8_t sens1 = sensor_read_get_sensor1_reading();
		uint8_t sens2 = sensor_read_get_sensor2_reading();

		if ( sens1 == LOW && CLC_current_state == CLC_train_not_present )
		{
			CLC_current_state = CLC_train_crossing;
		}
		else if ( sens2 == LOW && CLC_current_state == CLC_train_not_present )
		{
			CLC_current_state = CLC_train_crossing;
		}

		if ( sensor_read_get_exit_sensor() == exit_sensor_sens1
				&& CLC_current_state == CLC_train_crossing )
		{
			if ( sens1 == LOW )
			{
				CLC_current_state = CLC_train_exit;
			}
		}
		else if ( sensor_read_get_exit_sensor() == exit_sensor_sens2
				&& CLC_current_state == CLC_train_crossing )
		{
			if ( sens2 == LOW )
			{
				CLC_current_state = CLC_train_exit;
			}
		}

//		if ( CLC_current_state == CLC_train_exit )
//		{
//			if ( CLC_train_exit_timeout_timer_state == timer_not_started )
//			{
//				static TimerHandle_t CLC_train_exit_timeout_handle;
//				xTimerReset(CLC_train_exit_timeout_handle, pdMS_TO_TICKS(500));
//			}
//			if ( CLC_train_exit_timeout_timer_state == timer_expired )
//			{
//				CLC_current_state = CLC_train_not_present;
//				CLC_train_exit_timeout_timer_state = timer_not_started;
//			}
//		}


	}
}

uint8_t state_machine_get_state(void)
{
	return CLC_current_state;
}

void CLC_train_set_exit_timeout( uint8_t exit_timeout )
{
	CLC_train_exit_timeout_timer_state = timer_expired;
}

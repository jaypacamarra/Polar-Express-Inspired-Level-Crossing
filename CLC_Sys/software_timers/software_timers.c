/*
 * software_timers.c
 *
 *  Created on: Dec 30, 2021
 *      Author: jpaca
 */
#include "software_timers.h"

/* User Created Timer Handles
 * Must have a matching prototype!
 */
void software_timers_init(void)
{
	xTimers[0] = xTimerCreate(
			"sensor1 conditioning timer",
			pdMS_TO_TICKS(sensor_minimum_trigger_time_ms),
			pdFALSE,
			( void * ) 0,
			sensor1_cond_tim_callback );

	xTimers[1] = xTimerCreate(
			"sensor2 conditioning timer",
			pdMS_TO_TICKS(sensor_minimum_trigger_time_ms),
			pdFALSE,
			( void * ) 0,
			sensor2_cond_tim_callback );

	xTimers[2] = xTimerCreate(
			"CLC train exit timeout timer",
			pdMS_TO_TICKS(500),
			pdFALSE,
			( void * ) 0,
			CLC_train_exit_timeout_ballback );

	/* Make sure each timer created successfully */
	for ( uint8_t i=0 ; i<NUM_TIMERS ; ++i )
	{
		configASSERT( xTimers[i] != NULL )
	}

}

void sensor1_cond_tim_callback( TimerHandle_t sensor1_cond_tim_handle )
{
	sensor_read_set_sensor1_cond_timer_state( timer_expired );
}

void sensor2_cond_tim_callback( TimerHandle_t sensor2_cond_tim_handle )
{
	sensor_read_set_sensor2_cond_timer_state( timer_expired );
}

void CLC_train_exit_timeout_ballback( TimerHandle_t train_exit_timeout_handle )
{
	CLC_train_set_exit_timeout( timer_expired );
}

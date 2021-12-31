/*
 * software_timers.h
 *
 *  Created on: Dec 31, 2021
 *      Author: jpaca
 */

#ifndef SOFTWARE_TIMERS_H
#define SOFTWARE_TIMERS_H

#include "main.h"
#include "sensor_read.h"
#include "state_machine.h"

typedef enum
{
	timer_not_started = 0,
	timer_started,
	timer_stopped,
	timer_expired
}timer_state;

/* An array to hold handles to the created timers. */
#define NUM_TIMERS		3U
TimerHandle_t xTimers[ NUM_TIMERS ];

/* software timer init prototype */
void software_timers_init(void);

/* timer callback prototypes*/
void sensor1_cond_tim_callback( TimerHandle_t sensor1_cond_tim_handle );
void sensor2_cond_tim_callback( TimerHandle_t sensor2_cond_tim_handle );
void CLC_train_exit_timeout_ballback( TimerHandle_t train_exit_timeout_handle );

#endif /* SOFTWARE_TIMERS_H */

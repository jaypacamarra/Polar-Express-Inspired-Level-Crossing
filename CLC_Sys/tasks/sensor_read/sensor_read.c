/*
 * sensor_read.c
 *
 *  Created on: Dec 30, 2021
 *      Author: jpaca
 */
#include "sensor_read.h"

/*
 * vTask_SensorRead
 *
 * Reads the two locomotive inbound sensor, sensor1 and sensor2
 * Conditions sensor1 and sensor2 readings from noise
 *
 */

/* File Variables */
static uint8_t sensor1_reading;
static uint8_t sensor2_reading;
static uint8_t exit_sensor = exit_sensor_reset;	/* exit sensor for train, initialized as reset, 0 */

static timer_state sensor1_cond_timer_state = timer_not_started;
static timer_state sensor2_cond_timer_state = timer_not_started;

void vTask_SensorRead(void* params)
{
//	TickType_t xLastWakeTime;         // will hold the timestamp at which the task was last unblocked
//	const TickType_t xFrequency = 10; // task frequency in ms
//
//	// Initialize the xLastWakeTime variable with the current time;
//	xLastWakeTime = xTaskGetTickCount();

	for(;;)
	{
		// Wait for the next cycle
//		vTaskDelayUntil(&xLastWakeTime, xFrequency);

		/* Read Sensor 1 and 2
		 * HIGH = no train
		 * LOW = train detected
		 *
		 * Applies signal conditioning
		*/
//		sensor1_reading = sensor_read_sensor1_conditioned();
		sensor1_reading = HAL_GPIO_ReadPin(Sensor1_GPIO_Port, Sensor1_Pin);
//		sensor2_reading = sensor_read_sensor2_conditioned();
		sensor2_reading = HAL_GPIO_ReadPin(Sensor2_GPIO_Port, Sensor2_Pin);

		/* exit sensor is sensor2 */
//		if ( sensor1_reading == LOW && sensor2_reading == HIGH )
//		{
//			exit_sensor = exit_sensor_sens2;
//		}
//
//		/* exit sensor is sensor1 */
//		else if ( sensor1_reading == HIGH && sensor2_reading == LOW )
//		{
//			exit_sensor = exit_sensor_sens1;
//		}
//
//		/* Any other combination is reset */
//		if ( state_machine_get_state() == CLC_train_exit )
//		{
//			exit_sensor = exit_sensor_reset;
//		}


	}
}

uint8_t sensor_read_get_sensor1_reading(void)
{
	return sensor1_reading;
}

uint8_t sensor_read_get_sensor2_reading(void)
{
	return sensor2_reading;
}

uint8_t sensor_read_get_exit_sensor(void)
{
	return exit_sensor;
}

void sensor_read_set_sensor1_cond_timer_state(timer_state state)
{
	sensor1_cond_timer_state = state;
}

void sensor_read_set_sensor2_cond_timer_state(timer_state state)
{
	sensor2_cond_timer_state = state;
}

uint8_t sensor_read_sensor1_conditioned(void)
{
	uint8_t sensor_conditioned_reading = HIGH;
	static TimerHandle_t sensor1_cond_tim_handle;

	if ( HAL_GPIO_ReadPin(Sensor1_GPIO_Port, Sensor1_Pin) == LOW )
	{
		if ( sensor1_cond_timer_state == timer_not_started )
		{
			xTimerReset(sensor1_cond_tim_handle, pdMS_TO_TICKS(sensor_minimum_trigger_time_ms));
			sensor1_cond_timer_state = timer_started;
		}
	}
	else
	{
		xTimerStop(sensor1_cond_tim_handle, pdMS_TO_TICKS(100));
		sensor1_cond_timer_state = timer_stopped;
	}

	if ( sensor1_cond_timer_state == timer_expired
			&& HAL_GPIO_ReadPin(Sensor1_GPIO_Port, Sensor1_Pin) == LOW )
	{
		sensor_conditioned_reading = LOW;
		sensor1_cond_timer_state = timer_not_started;
	}

	return sensor_conditioned_reading;
}

uint8_t sensor_read_sensor2_conditioned(void)
{
	uint8_t sensor_conditioned_reading = HIGH;
	static TimerHandle_t sensor2_cond_tim_handle;

	if ( HAL_GPIO_ReadPin(Sensor2_GPIO_Port, Sensor2_Pin) == LOW )
	{
		if ( sensor2_cond_timer_state == timer_not_started )
		{
			xTimerReset(sensor2_cond_tim_handle, pdMS_TO_TICKS(sensor_minimum_trigger_time_ms));
			sensor2_cond_timer_state = timer_started;
		}
	}
	else
	{
		xTimerStop(sensor2_cond_tim_handle, pdMS_TO_TICKS(100));
		sensor2_cond_timer_state = timer_stopped;
	}

	if ( sensor2_cond_timer_state == timer_expired
			&& HAL_GPIO_ReadPin(Sensor2_GPIO_Port, Sensor2_Pin) == LOW )
	{
		sensor_conditioned_reading = LOW;
		sensor2_cond_timer_state = timer_not_started;
	}

	return sensor_conditioned_reading;
}



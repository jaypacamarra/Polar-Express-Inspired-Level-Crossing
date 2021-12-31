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

static uint8_t sensor1_reading;
static uint8_t sensor2_reading;

void vTask_SensorRead(void* params)
{
	for(;;)
	{
		/* Read Sensor 1 and 2
		 * HIGH = no train
		 * LOW = train detected
		*/
		sensor1_reading = HAL_GPIO_ReadPin(Sensor1_GPIO_Port, Sensor1_Pin);
		sensor2_reading = HAL_GPIO_ReadPin(Sensor2_GPIO_Port, Sensor2_Pin);

		/* Sensor 1 conditioning - accept if LOW for > 500 ms */


		/* Sensor 2 conditioning - accept if LOW for > 500 ms */


	}
}

uint8_t intersection_ctrl_get_sensor1_reading(void)
{
	return sensor1_reading;
}

uint8_t intersection_ctrl_get_sensor2_reading(void)
{
	return sensor2_reading;
}

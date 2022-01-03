#include "sensor_read.h"

/*
 * vTask_SensorRead
 *
 * Reads the two locomotive sensors
 * sensor1 = entrance locomotive sensor
 * sensor2 = exit locomotive sensor
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
		 *
		 * sensor1 and sensor2 are both IR sensors and are active low
		*/

		sensor1_reading = HAL_GPIO_ReadPin(Sensor1_GPIO_Port, Sensor1_Pin);
		sensor2_reading = HAL_GPIO_ReadPin(Sensor2_GPIO_Port, Sensor2_Pin);

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

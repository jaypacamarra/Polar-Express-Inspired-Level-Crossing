/*
 * sensor_read.h
 *
 *  Created on: Dec 30, 2021
 *      Author: jpaca
 */

#ifndef SENSOR_READ_H
#define SENSOR_READ_H

void vTask_SensorRead(void* params);

#include "main.h"

#define sensor1								1U
#define sensor2								2U
#define exit_sensor_sens1					1U
#define exit_sensor_sens2					2U
#define exit_sensor_reset					0U
#define sensor_minimum_trigger_time_ms		500

uint8_t sensor_read_get_sensor1_reading(void);
uint8_t sensor_read_get_sensor2_reading(void);
uint8_t sensor_read_get_exit_sensor(void);
void 	sensor_read_set_sensor1_cond_timer_state(uint8_t state);
void 	sensor_read_set_sensor2_cond_timer_state(uint8_t state);
uint8_t sensor_read_sensor1_conditioned(void);
uint8_t sensor_read_sensor2_conditioned(void);

#endif /* SENSOR_READ_H */

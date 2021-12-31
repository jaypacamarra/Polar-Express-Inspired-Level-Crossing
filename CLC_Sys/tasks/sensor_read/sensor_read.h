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

uint8_t intersection_ctrl_get_sensor1_reading(void);
uint8_t intersection_ctrl_get_sensor2_reading(void);

#endif /* SENSOR_READ_H */

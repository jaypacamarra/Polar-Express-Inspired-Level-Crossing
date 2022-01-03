/*
 * gate.h
 *
 *  Created on: Jan 2, 2022
 *      Author: jpaca
 */

#ifndef GATE_CTRL_H
#define GATE_CTRL_H

#include "FreeRTOS.h"
#include "main.h"
#include "state_machine.h"

#define GATE_CTRL_GATE_FULLY_RAISED_SERVO_VAL		( 1800U )
#define GATE_CTRL_GATE_FULLY_LOWERED_SERVO_VAL		( 800U )
#define GATE_CTRL_LOWER								( 0U )
#define GATE_CTRL_RAISE								( 1U )
#define gate_ctrl_servo_angle_check(x)				( MAX(MIN(x,GATE_CTRL_GATE_FULLY_RAISED_SERVO_VAL),GATE_CTRL_GATE_FULLY_LOWERED_SERVO_VAL ) )
#define MAX(a,b)									( (a) < (b) ? (b) : (a) )
#define	MIN(a,b)									( (a) > (b) ? (b) : (a) )

void vTask_GateCtrl(void* params);
void gate_ctrl_update_servo_angle(uint8_t servoDir);

#endif /* GATE_CTRL_H */

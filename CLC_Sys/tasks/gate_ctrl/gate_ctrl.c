/*
 * gate_ctrl.c
 *
 *  Created on: Jan 2, 2022
 *      Author: jpaca
 */
#include "gate_ctrl.h"

extern TIM_HandleTypeDef htim3;

void vTask_GateCtrl(void* params)
{
	for( ; ; )
	{
		/* slowly lower gate */
		if ( state_machine_get_state() == CLC_train_crossing )
		{
			gate_ctrl_update_servo_angle( GATE_CTRL_LOWER );
		}

		/* slowly raise gate */
		else /* train is not crossing */
		{
			gate_ctrl_update_servo_angle( GATE_CTRL_RAISE );
		}

		/* Gate lower/raise speed based on delay in ms*/
		vTaskDelay(pdMS_TO_TICKS(4));
	}
}

void gate_ctrl_update_servo_angle(uint8_t servoDir)
{
	if ( servoDir == GATE_CTRL_RAISE )
	{
		htim3.Instance->CCR1 = htim3.Instance->CCR1 + 1;
	}
	else if ( servoDir == GATE_CTRL_LOWER )
	{
		htim3.Instance->CCR1 = htim3.Instance->CCR1 - 1;
	}

	/* ensure servo angle within bounds
	 *
	 * GATE_CTRL_GATE_FULLY_LOWERED_SERVO_VAL 	(min value)
	 * GATE_CTRL_GATE_FULLY_RAISED_SERVO_VAL	(max value)
	 *
	 * */
	htim3.Instance->CCR1 = gate_ctrl_servo_angle_check( htim3.Instance->CCR1 );
}



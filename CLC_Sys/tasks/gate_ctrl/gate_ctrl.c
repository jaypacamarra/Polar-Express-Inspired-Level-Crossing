#include "gate_ctrl.h"

/*
 * vTask_GateCtrl
 *
 * Lowers or raises the gate slowly based on the state
 * Gate lowers if train is crossing, CLC_train_crossing
 *
 */

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

		/* Gate lower/raise speed based on delay in ms
		 *
		 * Time from fully raised to fully lowered or vice versa is based on 4 seconds
		 * 4 seconds = 4000 ms / (GATE_CTRL_GATE_FULLY_RAISED_SERVO_VAL - GATE_CTRL_GATE_FULLY_LOWERED_SERVO_VAL)
		 * Therefore, 4ms task delay is required
		 */
		vTaskDelay(pdMS_TO_TICKS(4));
	}
}

void gate_ctrl_update_servo_angle(uint8_t servoDir)
{
	if ( servoDir == GATE_CTRL_RAISE )
	{
		htim3.Instance->CCR1 = htim3.Instance->CCR1 + 1;	/* INCREASE capture compare reg to increase duty cycle */
	}
	else if ( servoDir == GATE_CTRL_LOWER )
	{
		htim3.Instance->CCR1 = htim3.Instance->CCR1 - 1;	/* DECREASE capture compare reg to increase duty cycle */
	}

	/* ensure servo angle within bounds
	 *
	 * #define GATE_CTRL_GATE_FULLY_LOWERED_SERVO_VAL 	(min value)
	 * #define GATE_CTRL_GATE_FULLY_RAISED_SERVO_VAL	(max value)
	 *
	 * */
	htim3.Instance->CCR1 = gate_ctrl_servo_angle_check( htim3.Instance->CCR1 );
}

uint8_t gate_ctrl_gate_not_fully_raised(void)
{
	return htim3.Instance->CCR1 != GATE_CTRL_GATE_FULLY_RAISED_SERVO_VAL;
}



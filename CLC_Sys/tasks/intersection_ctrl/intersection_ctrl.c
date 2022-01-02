/*
 * intersection_ctrl.c
 *
 *  Created on: Dec 30, 2021
 *      Author: jpaca
 */
#include "intersection_ctrl.h"

extern TIM_HandleTypeDef htim3;

void vTask_IntersectionCtrl(void* params)
{
	TickType_t xLastWakeTime;         // will hold the timestamp at which the task was last unblocked

	// Initialize the xLastWakeTime variable with the current time;
	xLastWakeTime = xTaskGetTickCount();

	for(;;)
	{
		if ( state_machine_get_state() == CLC_train_crossing )
		{
			HAL_GPIO_TogglePin(LD5_GPIO_Port, LD5_Pin);	/* Red Led On*/
			HAL_GPIO_WritePin(LD4_GPIO_Port, LD4_Pin, 0);

			/* Rotate 135 degrees? */
			htim3.Instance->CCR1 = 18;
//			HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);

			/* HAL_Delay and vTaskDelay same behaviour */
//			HAL_Delay(750);
			vTaskDelayUntil( &xLastWakeTime, pdMS_TO_TICKS(750) );
		}
		else
		{
			HAL_GPIO_WritePin(LD5_GPIO_Port, LD5_Pin, 0);	/* Green Led On*/
			HAL_GPIO_WritePin(LD4_GPIO_Port, LD4_Pin, 1);

			/* Rotate 45 degrees? */
			htim3.Instance->CCR1 = 13;
//			HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
		}



	}
}

#include "intersection_ctrl.h"

/*
 * vTask_IntersectionCtrl
 *
 * Toggles red led to flash if train is crossing
 * Otherwise, solid green led
 *
 */

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
			/* Flash Red Led */
			HAL_GPIO_TogglePin(LD5_GPIO_Port, LD5_Pin);
			HAL_GPIO_WritePin(LD4_GPIO_Port, LD4_Pin, 0);

			vTaskDelayUntil( &xLastWakeTime, pdMS_TO_TICKS(750) );
		}
		else
		{
			/* Solid Green Led */
			HAL_GPIO_WritePin(LD5_GPIO_Port, LD5_Pin, 0);
			HAL_GPIO_WritePin(LD4_GPIO_Port, LD4_Pin, 1);
		}



	}
}

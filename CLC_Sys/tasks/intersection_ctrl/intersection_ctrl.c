/*
 * intersection_ctrl.c
 *
 *  Created on: Dec 30, 2021
 *      Author: jpaca
 */
#include "intersection_ctrl.h"

void vTask_IntersectionCtrl(void* params)
{
	for(;;)
	{
		if ( state_machine_get_state() == CLC_train_crossing )
		{
			HAL_GPIO_WritePin(LD5_GPIO_Port, LD5_Pin, 1);	/* Red Led On*/
			HAL_GPIO_WritePin(LD4_GPIO_Port, LD4_Pin, 0);
		}
		else
		{
			HAL_GPIO_WritePin(LD5_GPIO_Port, LD5_Pin, 0);	/* Green Led On*/
			HAL_GPIO_WritePin(LD4_GPIO_Port, LD4_Pin, 1);
		}
	}
}

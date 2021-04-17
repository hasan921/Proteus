/*
 * seven_seg.c
 *
 *  Created on: Apr 17, 2021
 *      Author: WIN8
 */
#include "main.h"




void sevenSeg_loop(void)
{
    HAL_GPIO_TogglePin(SEG_A_GPIO_Port, SEG_A_Pin);
    HAL_Delay(50);



}

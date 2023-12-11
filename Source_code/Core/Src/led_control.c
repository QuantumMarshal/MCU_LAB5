/*
 * led_control.c
 *
 *  Created on: Dec 5, 2023
 *      Author: Admin
 */

#include "led_control.h"

void offLed(){
	HAL_GPIO_WritePin(Led1_GPIO_Port, Led1_Pin, SET);
	HAL_GPIO_WritePin(Led2_GPIO_Port, Led2_Pin, SET);
	HAL_GPIO_WritePin(Led3_GPIO_Port, Led3_Pin, SET);
	HAL_GPIO_WritePin(Led4_GPIO_Port, Led4_Pin, SET);
	HAL_GPIO_WritePin(Led5_GPIO_Port, Led5_Pin, SET);
}

void displayLed1(){
	HAL_GPIO_TogglePin(Led1_GPIO_Port, Led1_Pin);
}
void displayLed2(){
	HAL_GPIO_TogglePin(Led2_GPIO_Port, Led2_Pin);
}
void displayLed3(){
	HAL_GPIO_TogglePin(Led3_GPIO_Port, Led3_Pin);
}
void displayLed4(){
	HAL_GPIO_TogglePin(Led4_GPIO_Port, Led4_Pin);
}
void displayLed5(){
	HAL_GPIO_TogglePin(Led5_GPIO_Port, Led5_Pin);
}

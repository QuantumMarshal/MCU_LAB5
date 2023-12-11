///*
// * scheduler.h
// *
// *  Created on: Dec 5, 2023
// *      Author: Admin
// */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include "global.h"
#include <stdint.h>


#define SCH_MAX_TASKS 40
#define	NO_TASK_ID 0

const int DELAY_TASK;

void SCH_Init(void);
void SCH_Update(void);
void SCH_Dispatch_Task(void);
uint32_t SCH_Add_Task(void (* pFunction)(), uint32_t DELAY, uint32_t PERIOD);
uint8_t SCH_Delete_Task(uint32_t taskID);

#endif /* INC_SCHEDULER_H_ */


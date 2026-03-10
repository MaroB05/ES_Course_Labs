#ifndef SWITCH_INTERFACE_H
#define SWITCH_INTERFACE_H

#include "../../SERVICES/STD_TYPES.h"

/* Switch States */
#define SWITCH_OFF    0
#define SWITCH_ON     1

void switch_Init(u8 Port, u8 Pin);
u8 get_switch_state(u8 Port, u8 Pin);

#endif

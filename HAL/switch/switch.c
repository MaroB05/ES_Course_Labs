#include "switch_interface.h"
#include "../../MCAL/GPIO/GPIO_interface.h"

void switch_Init(u8 Port, u8 Pin){
  GPIO_SetPinDirection(Port, Pin, GPIO_INPUT);
}

u8 get_switch_state(u8 Port, u8 Pin){
  return GPIO_GetPinValue(Port, Pin);
}

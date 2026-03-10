/*
* APPLICATION LAYER


*/
#include "../HAL/switch/switch_interface.h"
#include "../HAL/LED/LED_interface.h"
#include "../MCAL/GPIO/GPIO_interface.h"

void delay(u8 s)
{
  unsigned int i;
  unsigned int time = s * 10000;
  for(i = 0; i < time; i++);
}

void main()
{
  LED_Init(GPIO_PORTB, GPIO_PIN0);
  LED_Init(GPIO_PORTB, GPIO_PIN7);
  switch_Init(GPIO_PORTA, GPIO_PIN0);
  switch_Init(GPIO_PORTA, GPIO_PIN5);

  while(1)
  {
    if (get_switch_state(GPIO_PORTA, GPIO_PIN0)){
      LED_On(GPIO_PORTB, GPIO_PIN0);
      LED_On(GPIO_PORTB, GPIO_PIN7);
      delay(2);
      LED_Off(GPIO_PORTB, GPIO_PIN0);
      LED_Off(GPIO_PORTB, GPIO_PIN7);
      delay(2);
    } else if (get_switch_state(GPIO_PORTA, GPIO_PIN5)) {
      LED_On(GPIO_PORTB, GPIO_PIN0);
      LED_On(GPIO_PORTB, GPIO_PIN7);
      delay(5);
      LED_Off(GPIO_PORTB, GPIO_PIN0);
      LED_Off(GPIO_PORTB, GPIO_PIN7);
      delay(5);
    } else {
      LED_Off(GPIO_PORTB, GPIO_PIN0);
      LED_Off(GPIO_PORTB, GPIO_PIN7);
    }
  }
}

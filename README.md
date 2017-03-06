# GPIO_bits
Simple access to GPIOs


Usage for STM32 microkontrolltrs:
Definition:
 #define LED_WHITE_pin 9   //Define GPIO pin number
 #define LED_WHITE_GPIO_Port GPIOA  //Define GPIO port
 #define LED_WHITE_O  PORT_PIN(LED_WHITE_GPIO_Port->ODR,LED_WHITE_pin)

Usage:
  LED_WHITE_O = !LED_WHITE_O; //toggle pin

  LED_WHITE_O = 1; //turn the LED diode ON

  LED_WHITE_O = 0; //turn the LED diode OFF

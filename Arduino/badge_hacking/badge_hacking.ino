/*
 * Placeholder source code to hack your Aerospace Village Badge 2022,
 * prenseted during DEFCON 30.
 * 
 * This code was originally designed to integrate an ATtiny MCU onto the
 * blank U1 spot. That stated the SAO v1.69 pins are mapped as followed:
 *  - GPIO 1 : PB1 -> digital pin 1
 *  - GPIO 2 : PB3 -> digital pin 3
 *  - SDA : PB0 with accompanying pull up resistor R2
 *  - SCL : PB2 with accompanying pull up resistor R1
 * 
 */

#define GPIO_1 1  // Read description above for mapping
#define GPIO_2 3

#define hold 500

void setup() {
  pinMode(GPIO_1, OUTPUT);
  pinMode(GPIO_2, OUTPUT);

}

void loop() {
  digitalWrite(GPIO_1, HIGH);
  delay(hold);
  digitalWrite(GPIO_1, LOW);
  delay(hold);

}

#include <Arduino.h>
#include <EncInterface.h>

EncInterface interface;

void setup() {
  // put your setup code here, to run once:
  interface.setup(16, 17);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(interface.speed());
  delay(10);
}


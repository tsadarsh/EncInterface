#include <Arduino.h>
#include <ESP32Encoder.h>
#include "EncInterface.h"

ESP32Encoder encoder;

void EncInterface::setup(int CLK, int DT) {
  encoder.attachHalfQuad(CLK, DT);
  encoder.setCount(0);
}

long EncInterface::postion() {
  return encoder.getCount();
}

long EncInterface::speed() {
  long init_tick = encoder.getCount();
  delay(100);
  long delta = encoder.getCount() - init_tick;
  return delta;
}

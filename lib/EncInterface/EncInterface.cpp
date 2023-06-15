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
  long d_tick = encoder.getCount() - last_tick;
  long d_time = millis() - last_time;
  float tps = d_tick / (d_time * 0.001);
  last_tick = encoder.getCount();
  last_time = millis();
  return tps;
}

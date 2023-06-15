#ifndef EncInterface_h
#define EncInterface_h

#include <Arduino.h>
#include <ESP32Encoder.h>

class EncInterface
{
    long last_tick = 0;
    long last_time = 0;
    public:
        void setup(int CLK, int DT);
        long postion();
        long speed();
};

#endif
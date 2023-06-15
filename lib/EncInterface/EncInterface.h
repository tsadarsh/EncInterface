#ifndef EncInterface_h
#define EncInterface_h

#include <Arduino.h>
#include <ESP32Encoder.h>

class EncInterface
{
    public:
        void setup(int CLK, int DT);
        long postion();
        long speed();
};

#endif
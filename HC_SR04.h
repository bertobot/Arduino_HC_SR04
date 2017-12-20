#ifndef __HC_SR04_h_
#define __HC_SR04_h_

#if ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif

class HC_SR04 {
public:
    HC_SR04(uint8_t trigger, uint8_t echo);
    virtual ~HC_SR04();

    long pulse(uint8_t trigger_duration=10, float quotient=58.2f);

    long duration, distance;

private:
    uint8_t mTrigger, mEcho;
};

#endif

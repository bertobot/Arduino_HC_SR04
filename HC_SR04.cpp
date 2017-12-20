#include "HC_SR04.h"

HC_SR04::HC_SR04(uint8_t trigger, uint8_t echo) {
    mTrigger = trigger;
    mEcho = echo;

    pinMode(mTrigger, OUTPUT);
    pinMode(mEcho, INPUT);

    distance = 0;
    duration = 0;
}

HC_SR04::~HC_SR04() {}

long HC_SR04::pulse(uint8_t td, float q) {
    digitalWrite(mTrigger, LOW);
    delayMicroseconds(2);

    digitalWrite(mTrigger, HIGH);
    delayMicroseconds(td);
    digitalWrite(mTrigger, LOW);
    
    duration = pulseIn(mEcho, HIGH);
    distance = duration / q;

    return distance;
}


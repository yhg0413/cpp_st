#pragma once
#include <Arduino.h>
class Button{
protected:
    int pin;
    boolean state_previous; //풀업이라 true
    boolean state_current;

    void (*callback)();
public:
    Button(int pin);

    int read();
    void check();
    void setCallback(void (*callback)());
};
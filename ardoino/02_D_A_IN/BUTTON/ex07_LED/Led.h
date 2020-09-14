#pragma once
#include <Arduino.h>
// 헤더파일 한번만 include 되게하는 명령어 

class Led{
protected:
    int pin;
public:
    Led(int pin);

    void on();
    void off();
    void toggle();
    void set(int value);


};
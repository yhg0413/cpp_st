#pragma once

#include <Arduino.h>

typedef void (*pulse_callback_t)(int);//괄호는 매개변수


class Pulse{
protected:
    int onDelay; // HIGH시간
    int offDelay; // LOW 시간


    int value; //현재 상태 (H/L)
    unsigned long oldTime; //최근의 상태 변경 시점 기록
    boolean state; // 펄스의 운영여부
    pulse_callback_t callback;

public:
    Pulse(int onDelay, int offDelay);
    
    void setDelay(int onDelay, int offDelay);
    void run();
    int readValue(){return value;}

    void play();
    void stop();

    boolean getState(){return state;}

    void setCallback(pulse_callback_t callback){this->callback = callback;}
};
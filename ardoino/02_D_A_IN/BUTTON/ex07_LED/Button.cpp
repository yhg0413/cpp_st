#include "Button.h"

Button::Button(int pin) : pin(pin){
    pinMode(pin, INPUT_PULLUP);
    state_previous = true; //풀업이라 true
}

int Button::read(){
    return !digitalRead(pin); // 풀다운인것 처럼 운영 버튼 누르면 온
}


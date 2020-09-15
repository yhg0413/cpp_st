#include "Button.h"

Button::Button(int pin) : pin(pin){
    pinMode(pin, INPUT_PULLUP);
    state_previous = true; //풀업이라 true
    callback =NULL; // 아무것도 가르키지않는다 를 의미 주소값에 0을넣음
}

int Button::read(){
    return !digitalRead(pin); // 풀다운인것 처럼 운영 버튼 누르면 온
}

void Button::setCallback(void (*callback)()){
    this->callback = callback;
}

void Button::check(){
    state_current = digitalRead(pin);
    if(!state_current){
        if(state_previous == true)
        {
            state_previous = false;
            //버튼을 누른 시점에서 해야할 작업        }
            if(callback != NULL)
            {//callback 안에 값이 있을경우
                callback();
            }
        
        }
        delay(5);
    } 
    else{
        state_previous = true;
    }
}


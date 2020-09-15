#include"Led.h"
#include"Button.h"
#include <SimpleTimer.h>

SimpleTimer timer;

Led led1(2);
Led led2(3);
Led led3(4);
Button btn1(8);
Button btn2(9);
Button btn3(10);
int timerid=0;
boolean blinkPlay = false;


void led2OnOff(){
    led2.toggle();
}
void led3togle(){
    led3.toggle();
}
void led3blink(){
    blinkPlay = !blinkPlay;
    if(!blinkPlay){
        led3.off();
    }
    timer.toggle(timerid);
}

void setup(){
    Serial.begin(9600);
    btn2.setCallback(led2OnOff);
    btn3.setCallback(led3blink);
    timerid = timer.setInterval(500,led3togle);
    timer.disable(timerid);
    
}

//함수 포인터 형식 : void (*포인터변수명)(매개변수);



void loop(){
    timer.run();
    led1.set(btn1.read());
    btn2.check();
    btn3.check();
    
    //led.set(btn.read());

    
    /*
    if(!state_current){//누른경우
        if(state_previous == true){
            state_previous = false;
            led.toggle();
        }
        delay(10);
    }else{
        state_previous=true;
    }*/
}
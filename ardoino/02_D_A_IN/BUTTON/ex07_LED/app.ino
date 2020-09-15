#include"Led.h"
#include"Button.h"


Led led(4);
Button btn(11);


void setup(){
    Serial.begin(9600);
    btn.setCallback(work);
}

//함수 포인터 형식 : void (*포인터변수명)(매개변수);

void work(){
    led.toggle();
}

void loop(){
    
    //led.set(btn.read());

    btn.check();
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
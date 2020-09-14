#include"Led.h"
#include"Button.h"


Led led(4);
Button btn(11);


void setup(){
    Serial.begin(9600);
}


void loop(){
    
    led.set(btn.read());
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
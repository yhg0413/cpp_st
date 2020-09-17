#include <MiniCom.h>
#include <Ultra.h>
#include <Led.h>
#include <Servo.h>
#include "Pulse.h"

Servo servo;
MiniCom com;
Ultra ultra(2,3);
Led led(4);
Pulse pulse(100,500);

int delayTime[] ={
    50,100,200,500,1000
};

void pulseCallback(int value){//LED제어
    led.set(value);
    com.print(1,"YES",value);
}

int checkDistance(){
    int distance=ultra.readDistance();
    com.print(0,"distance",distance);
    return distance;
}

void work(){
    int distance = checkDistance();
    if(distance<10){
        //led.on();
        //pulse의 offDelay를 distance를 고려하여 조정
        int offDelay = map(distance, 4, 9,0,4);
        pulse.setDelay(10, delayTime[offDelay]);
        servo.write(90);
        if(!pulse.getState()){ // 처음 들어왔을떄
            pulse.play();
            
        }
    }
    if(distance>10){
        if(pulse.getState()){
            pulse.stop();
        }
        //led.off();
        servo.write(0);
    }
}
void setup(){
    com.init();
    servo.attach(9);
    servo.write(0);
    com.setInterval(100,work);
    led.off();
    pulse.setCallback(pulseCallback);
    
}

void loop(){
    com.run();
    pulse.run();
}

//Event Driven 방식 이라고함
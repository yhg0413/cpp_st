#include <TrafficLight.h>

TrafficLight light(13,3,5);

void setup() {
  
}

void loop() {
    light.run();
}




/*
void goandleft(int duration = 0){
    digitalWrite(redLED, 0);
    digitalWrite(yelloLED,1);
    digitalWrite(greenLED, 1);
    if(duration!=0){
        delay(duration);
    }
}
void goandleftblink(int duration = 0){
    digitalWrite(redLED, 0);
    
    digitalWrite(greenLED, 1);
    for(int i=0; i<duration/100/4; i++){
        digitalWrite(yelloLED,1);
        delay(duration/10);
        digitalWrite(yelloLED,0);
        delay(duration/10);
    }
    
}
*/
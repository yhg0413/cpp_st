
#include "Ultra.h"

Ultra::Ultra(int echo, int trig):echo(echo), trig(trig){
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
}

int Ultra::readDistance(){
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);

    //echo 핀으로 입력으로부터 거리를 cm 단위로 계산

    int distance = pulseIn(echo, HIGH) / 58;
    return distance;
}


#include "Pulse.h"


Pulse::Pulse(int onDelay, int offDelay): onDelay(onDelay), offDelay(offDelay){
    value = HIGH;
    oldTime = millis();
    state = false;
    callback = NULL;
}

void Pulse::setDelay(int onDelay, int offDelay){
    this->onDelay = onDelay;
    this->offDelay = offDelay;
}

void Pulse::run(){
    if(!state) return;
    unsigned long currentTime =millis();
    unsigned long diff = currentTime - oldTime;

    long interval = value ? onDelay : offDelay; // value 트루면 onDelay 를 대입 false면 offDelay 대입

    if(diff >= interval){
        oldTime = currentTime;
        value = !value;
        if(callback!= NULL){
            callback(value);
        }
    }
}

void Pulse::play(){
    state = true;
    value = HIGH;
    oldTime = millis();
}

void Pulse::stop(){
    state = false;
    value = LOW;

}
#include <MiniCom.h>
#include "Ultra.h"
MiniCom com;
Ultra ultra(2,3);


void checkDistance(){
    int F=ultra.readDistance();
    com.print(0,"distance",F);
}

void setup(){
    com.init();
    com.setInterval(100,checkDistance);
}

void loop(){
    com.run();
}
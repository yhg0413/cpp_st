int pin_button = 11;
boolean state_previous = true; //풀업이라 true
boolean state_current;

int count = 0;

void setup(){
    Serial.begin(9600);
    pinMode(pin_button, INPUT_PULLUP);
}

void loop(){
    state_current = digitalRead(pin_button);
    if(!state_current){//누른경우
        if(state_previous == true){
            count++;
            state_previous = false;
            Serial.println(count);
        }
        delay(10);
    }else{
        state_previous=true;
    }
}
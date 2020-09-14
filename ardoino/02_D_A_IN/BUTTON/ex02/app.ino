int LED = 4;
int BUTTON = 11;

void setup(){
    pinMode(BUTTON, INPUT_PULLUP);
    pinMode(LED, OUTPUT);
}

void loop(){
    
    if(digitalRead(BUTTON)==LOW){
        digitalWrite(LED,HIGH);
    }else{
        digitalWrite(LED,LOW);
    }
    delay(10);
}
int pin_LED[] = {3,5,6};

void setup(){
    for(int i=0; i<3; i++)pinMode(pin_LED[i], OUTPUT);
}

void loop(){
    for(int j=0; j<3; j++){
        for(int i=0; i<255; i++){
            analogWrite(pin_LED[j], i);
            delay(1);
        }
        for(int i=255; i>=0; i--){
            analogWrite(pin_LED[j],i);
            delay(1);
        }
    }
}
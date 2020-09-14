//디지털 신호 입력 시간 측정하기
const int pin_button =11;
long startTime =0;
long swCountTimer =0;

void setup(){
    Serial.begin(9600);
    pinMode(pin_button, INPUT_PULLUP);
}

void loop(){
    if(digitalRead(pin_button) == LOW){
        startTime = millis();
        while(digitalRead(pin_button) == LOW);
        swCountTimer = millis() - startTime;
        Serial.print(swCountTimer);
        Serial.println(" ms");
    }
    delay(10);
}
int pin_LED =3;

void setup() {
    Serial.begin(9600);
    pinMode(pin_LED,OUTPUT);
}

void loop(){
    if(Serial.available()){// 수신 데이터기 있으면 true, 없으면 flase
        char inChar = Serial.read();//문자 하나만 읽음 
        if(inChar == '\r' || inChar == '\n') return;
        if(inChar == '1'){
            digitalWrite(pin_LED, HIGH);
        }else{
            digitalWrite(pin_LED, LOW);
        }

    }
}
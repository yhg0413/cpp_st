int pins[] = {3,5,7,9};
int state = 0;

void setup() {
    Serial.begin(9600);
    for(int i=0; i<4; i++){
        pinMode(pins[i], OUTPUT);
        digitalWrite(pins[i], LOW);
    }
}

void loop() {
    for(int i=0; i<4; i++){// 불켜진쪽은 O 꺼진쪽은 X ex OXXX XOXX XXOX
        if(i==state){
            Serial.print("0 ");
            digitalWrite(pins[i], HIGH);
        }
        else{
            Serial.print("X ");
            digitalWrite(pins[i], LOW);
        }
    }
    Serial.println();
    state = (state + 1) %4;
    delay(1000);
}

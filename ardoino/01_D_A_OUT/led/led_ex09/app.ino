int pins[] = {3,5,7,9};
int state = 0;

void setup(){
    Serial.begin(9600);
    for(int i=0; i<4; i++){
        pinMode(pins[i], OUTPUT);
        digitalWrite(pins[i], LOW);
    }
}

void loop(){
    if(Serial.available()){
        char data = Serial.read();
        if(data == '\r' || data == '\n') return;

        Serial.println(String("You entered \'")+data+'\'');
        //String 은 arduino.h에 선언되어있음

        if(data >= '1' && data<= '4'){
            state = data - '0' -1; // LED 인덱스로 변환 문자형 1을 숫자 1로 만드는것
            Serial.print("LED ");
            Serial.print(state + 1);
            Serial.println("  i On...");
        }
        else {
            Serial.println(" * Invalid LED number ... ");
            state = -1;
        }
        for(int i = 0; i < 4; i++){
            if(i==state){
                Serial.print("O ");
                digitalWrite(pins[i], HIGH);

            }
            else{
                Serial.print("X ");
                digitalWrite(pins[i], LOW);
            }
        }
    }
}
#include <Wire.h>

void setup(){
    Wire.begin();
    Serial.begin(9600);
}

void loop(){
    byte error, address;
    int nDevices = 0;

    Serial.println("Start Scanning . . .");
    for(address = 1; address < 127; address++){
        Wire.beginTransmission(address);
        error = Wire.endTransmission();//주소값이 맞으면 투르 아니면 폴트
        //장치마다 주소값이 다 다른데 그 주솟값을 찾아주기 위한 코드
        if (error == 0 ){// 에러가 0이면 주소값이라는것
        Serial.print("I2C device found at address 0x");
        if(address < 16) Serial.print("0");
        Serial.print(address, HEX);
        Serial.println();

        nDevices ++;
        }
    }
    

    if(nDevices == 0){// 장치가 연결되지 않은경우
        Serial.println("No I2C devices found\n");
        delay(5000);
    }
}
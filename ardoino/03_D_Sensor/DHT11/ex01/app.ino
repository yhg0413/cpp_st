#include <DHT.h>
#include <MiniCom.h>
  
  // DHT.h 라이브러리를 포함한다 #define DHTPIN 3 #define DHTTYPE DHT11
#define DHTPIN 3
#define DHTTYPE DHT11

MiniCom com;

DHT dht(DHTPIN, DHTTYPE);  // DHT설정 - dht (디지털3, dht11)
void checkHumiTemp(){
    float h = dht.readHumidity();     // 변수 h에 습도 값을 저장 
    float t = dht.readTemperature();  // 변수 t에 온도 값을 저장
    com.print(0,"Humi",h);
    com.print(1,"Temp",t);
    
}


void setup() { 
    com.init();
    com.setInterval(2000,checkHumiTemp);
    dht.begin(); 
}
void loop() { 
    com.run();
    
}
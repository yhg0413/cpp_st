#include <SoftwareSerial.h>
#include <WiFiEsp.h>
#define BT_RXD 2
#define BT_TXD 3

SoftwareSerial softSerial(BT_RXD, BT_TXD);

char ssid[] = "V10_8610";
char pass[] = "00000000";
int status = WL_IDLE_STATUS;

void printWifiStatus(){
    Serial.print("SSID: ");
    Serial.println(WiFi.SSID());

    IPAddress ip = WiFi.localIP();
    Serial.print("IP Address: ");
    Serial.println(ip);

    long rssi = WiFi.RSSI();
    Serial.print("Signal Strength (RSSI) : ");
    Serial.print(rssi);
    Serial.println(" dBm");
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//pc와의 통신인데 pc는 모든 속도를 지원함
  //범웨어로 설정된 디폴트 속도는 115200 bps
  softSerial.begin(9600); //펌웨어 설정에 따라 조정
  WiFi.init(&softSerial); //선언문에선 참조 일반적인것 주소연산자

  if(WiFi.status() == WL_NO_SHIELD){//no_shield = esp가 꽂혀있지않다
      Serial.println("WIFi shield not present");
      while(true);
  }
  while(status != WL_CONNECTED){//WL_CONNECTED = AP에 접속이 됐느냐
      Serial.print("Attempting to connect TO WPA SSID: ");//연결시도
      Serial.println(ssid);
      status = WiFi.begin(ssid, pass);
  }
    Serial.println("You're connected to the network");

    printWifiStatus();
}

void loop() {
  
}
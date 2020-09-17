#include <WifiUtil.h>
#define BT_RXD 2
#define BT_TXD 3

SoftwareSerial softSerial(BT_RXD, BT_TXD);

char SSID[] = "V10_8610";
char PASSWORD[] = "00000000";
int status = WL_IDLE_STATUS;
const char server[] = "arduino.cc";


WifiUtil wifi(2, 3);
WiFiEspClient client;
void request(){
    if(client.connect(server, 80)){
        Serial.println("connect to server");

        client.println("GET /asciilogo.txt HTTP/1.1");
        client.println("HOST: arduino.cc");
        client.println("Connection: close");
        client.println();
    }
}
void response(){
    while (client.available()){
        char c = client.read();
        Serial.write(c);
    }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//pc와의 통신인데 pc는 모든 속도를 지원함
  wifi.init(SSID,PASSWORD);
  request();
}

void loop() {//check == 0 : 끈긴적이 없다 1 = 끊겼다가 다시 연결
response();

}
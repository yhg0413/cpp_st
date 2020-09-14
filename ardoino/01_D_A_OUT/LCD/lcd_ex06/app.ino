#include <LiquidCrystal_I2C.h>
#include <SimpleTimer.h>


LiquidCrystal_I2C lcd(0x27,16,2);
SimpleTimer timer;

void printTime(){
    char buf[17];
    unsigned long t = millis();
    int ms = t % 1000/ 10;
    t = t / 1000; //밀리초 -> ch
    int h = t / 3600;
    int m = (t - (h*3600)) / 60; //초 -> 분
    int s = t-(h*3600 + m * 60);
    

    sprintf(buf, "%02d:%02d:%02d:%02d", h, m, s,ms);
    lcd.setCursor(0,0);
    lcd.print(buf);
    //millisecond -? 시 : 분 : 초 로 변환해서 출력

}

void setup(){
    Serial.begin(9600);
    lcd.init();
    lcd.backlight();
    
    timer.setInterval(10,printTime);
}

void loop(){
    timer.run();
}
#include <Led.h>
#include <Button.h>
#include <SimpleTimer.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int timerId = -1;
int blinkTimerId = -1;
int state = 0; //0 준비상태, 1 가동상태


SimpleTimer timer;

Led led_Y = 3;
Led led_G = 2;

Button btn1 = 8;
Button btn2 = 9;
Button btn3 = 10;

unsigned long startTime = 0;
unsigned long time_c;
void led_G_toggle(){
    led_G.toggle();
}
void led_Y_toggle(){
    led_Y.toggle();
}
void printTime(unsigned long t, int line){
    char buff[17];
    int ms = t %1000 / 100;
    t = t / 1000;
    int h = t / 3600;
    int m = (t-(h*3600)) / 60;
    int s = (t-(h*3600 + m *60));

    sprintf(buff, "%02d:%02d:%02d:%1d", h,m,s,ms);
    lcd.setCursor(0,line);
    lcd.print(buff);
}

void printTime(){
    unsigned long t = millis();
    unsigned long diff = t - startTime;
    printTime(diff,0);
}
void startStop(){
    if(state == false){
        //기동시작
        startTime = millis();
        timer.enable(timerId);
        timer.enable(blinkTimerId);
        led_Y.off();
        state = true;
    }
    else
    {
        timer.toggle(timerId);
        led_Y.toggle();
        timer.toggle(blinkTimerId);
        led_G.off();
    }
}

void lep_time(){
    if(state){
        unsigned long t = millis();
    unsigned long diff = t - startTime;
    printTime(diff,1);
    }
    
}

void reset(){
    state = false;
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("00:00:00:.0");
    led_Y.on();
    led_G.off();
    timer.disable(timerId);
    timer.disable(blinkTimerId);
}
void setup(){
    Serial.begin(9600);
    lcd.init();
    lcd.backlight();

    timerId = timer.setInterval(100,printTime);
    timer.disable(timerId);
    blinkTimerId = timer.setInterval(250,led_G_toggle);
    reset();
    btn1.setCallback(startStop);
    btn2.setCallback(lep_time);
    btn3.setCallback(reset);
    
}

void loop(){
    timer.run();
    btn1.check();
    btn2.check();
    btn3.check();
}







//버튼 1 스타트 or 스탑
//버튼 2 LapTime 눌렀을때의 시간을 두번째 라인에 출력
//버튼 3 리셋

//평상시에 노랑색 켜두고
//start하면 노랑 꺼지고 초록 블링크
//스탑하면 노랑 켜지고 초록 꺼짐
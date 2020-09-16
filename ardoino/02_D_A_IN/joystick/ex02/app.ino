#include <Servo.h>
#include <AnalogSensor.h>
#include <LiquidCrystal_I2C.h>
#include <SimpleTimer.h>
#include <Joystick.h>
#include <Led.h>

int SERVO_PIN = 3;

LiquidCrystal_I2C lcd(0x27, 16,2);
JoyStick joy(A1,A0,2);
Servo servo;
SimpleTimer timer;
boolean mode = true;
Led led(13);

// joystick 값 읽고 출력하기

void readJoystick(){
    joystick_value_t value = joy.read();
    char buf[17];

    if(mode){
        sprintf(buf, "X:%4d/Y:%4d", value.x,value.y);
        lcd.setCursor(0,0);
        lcd.print(buf);
    }
    else{
        servo.write(value.x);//카메라 방향 조정
        sprintf(buf, "Angle : %04d", value.x);
        lcd.setCursor(0,1);
        lcd.print(buf);
    }
}

// joystick 운영 모드 변경
void changeMode(){
    mode = !mode;
    if(mode){//주행모드
        joy.setRangeX(-255,255);
        
    }else{//카메라 방향모드
        joy.setRangeX(0,180);
        
    }
    led.toggle();
}


void setup(){
    Serial.begin(9600);
    lcd.init();
    lcd.backlight();
    lcd.clear();
    servo.attach(SERVO_PIN);
    //DC 모터 : 속도조절은 PWM : 0 ~ 255, 전진, 후진 :
    joy.setRangeX(-255, 255);
    joy.setRangeY(-255, 255);
    joy.setCallback(changeMode);
    timer.setInterval(100,readJoystick);
}

void loop(){
    timer.run();
    joy.check();
}
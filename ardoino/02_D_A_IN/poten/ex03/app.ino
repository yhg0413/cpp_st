// map() 함수
#include <LiquidCrystal_I2C.h>
#include <PWMLed.h>
#include <AnalogSensor.h>
LiquidCrystal_I2C lcd(0x27,16,2);
AnalogSensor AS(A0,180,0);
PWMLed led(3);
const int pin = 3;
const int PTMpin = A0;

int PTMValue;
int brightness;


void setup(){
    Serial.begin(9600);
    lcd.init();
    lcd.backlight();
    lcd.clear();
}

void loop(){
    char buff[17];
    lcd.setCursor(0,0);
    PTMValue = analogRead(PTMpin);
    sprintf(buff,"PTM Value : %4d",PTMValue);
    lcd.print(buff);

    lcd.setCursor(0,1);
    brightness = AS.read();
    //brightness = map(PTMValue, 0, 1023, 255, 0); 감소형도 가능
    sprintf(buff,"PTM Value : %4d",brightness);
    lcd.print(buff);

    led.set(brightness);
}
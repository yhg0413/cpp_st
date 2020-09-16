#include <AnalogSensor.h>
#include <Led.h>
#include <LiquidCrystal_I2C.h>
#include <SimpleTimer.h>

LiquidCrystal_I2C lcd(0x27, 16,2);
AnalogSensor pSensor(A0,0,1023);
Led led(3);
SimpleTimer timer;

void print_illu(){
    char buf[17];
    int readVal=pSensor.read();
    readVal=constrain(readVal,0,200);
    int brightness = map(readVal, 0, 200, 255, 0);
    sprintf(buf, "readVal = %04d", readVal);
    lcd.setCursor(0,0);
    lcd.print(buf);
    
    led.set(brightness);
}


void setup(){
    Serial.begin(9600);
    lcd.init();
    lcd.clear();
    lcd.backlight();
    led.off();
    timer.setInterval(100,print_illu);
}

void loop(){
    timer.run();
}
    
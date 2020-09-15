
#include <Servo.h> 
#include <AnalogSensor.h>
#include <LiquidCrystal_I2C.h>
#include <SimpleTimer.h>

LiquidCrystal_I2C lcd(0x27,16,2);
SimpleTimer timer;

Servo servoMoter;
AnalogSensor AS(A0, 179, 0);
const int servoMoterPin = 9;
int angle;

void moveMotor(){
    char buf[17];
    
    sprintf(buf,"angle : %03d", angle);
    
    angle = AS.read();
    servoMoter.write(angle);
    lcd.setCursor(0,0);
    lcd.print(buf);

}
void setup(){
    lcd.init();
    lcd.backlight();
    lcd.clear();
    timer.setInterval(1000/20,moveMotor);
    servoMoter.attach(servoMoterPin);
    servoMoter.write(0);
    delay(1000);
}

void loop(){
    timer.run();
    
}
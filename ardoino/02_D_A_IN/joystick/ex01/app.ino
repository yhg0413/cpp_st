#include <Button.h>
#include <AnalogSensor.h>
#include <LiquidCrystal_I2C.h>
#include <SimpleTimer.h>

Button SW(2);
AnalogSensor Rx(A1,0,255);
AnalogSensor Ry(A0,0,255);
LiquidCrystal_I2C lcd(0x27, 16,2);

SimpleTimer timer;

void print_X_Y(){
    char buff[17];
    int Rxdata, Rydata,SWdata;
    Rxdata = Rx.read();
    Rydata = Ry.read();
    SWdata=SW.read();
    sprintf(buff,"Rx:%03d Ry:%03d", Rxdata, Rydata);
    lcd.setCursor(0,0);
    lcd.print(buff);
    sprintf(buff,"SW:%1d", SWdata);
    lcd.setCursor(0,1);
    lcd.print(buff);
}

void setup(){
    lcd.init();
    lcd.backlight();
    lcd.clear();
    timer.setInterval(50,print_X_Y);
}

void loop(){
    timer.run();

}
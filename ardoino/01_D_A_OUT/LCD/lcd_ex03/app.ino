#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);


void setup(){
    lcd.init();
    lcd.backlight();

    lcd.print("1st line");
    lcd.setCursor(1, 1);
    lcd.print("2nd line");
}

void loop(){

}
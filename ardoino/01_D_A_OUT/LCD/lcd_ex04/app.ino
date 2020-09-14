#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
    Serial.begin(9600);
    lcd.init();

    lcd.setCursor(0, 0);
    lcd.print("Arduino LCD");
    delay(1000);
    lcd.setCursor(0, 1);
    lcd.print("Welcome");
    delay(250);
    lcd.noBacklight();
    delay(250);
    lcd.backlight();
    delay(250);
    lcd.noBacklight();
    delay(250);
    lcd.backlight();
    delay(3000);

    //open Serial Motior Type to display 표시
    lcd.clear();
    lcd.setCursor(0, 0 );
    lcd.print("Open Serial Mntr");
    lcd.setCursor(0, 1);
    lcd.print("Type to display");
}

// 16x2
// 하인별로 한줄 전체를 덮어쓴느 형태
String readLine(){
    String line = "";
    while(Serial.available() > 0){
            char ch = Serial.read();
            if(ch != '\r' && ch != '\n'){line+=ch;}
        }
    return line;
}


void loop(){
    if(Serial.available()){//수신 내용이 있을경우 T
        delay(100);
        //lcd.clear();//clear가 없으면 문자가 남음
        //clear를 쓰지않고 문자를 깔끔하게 나타내기
        lcd.setCursor(0,0);
        lcd.print("Message fromPC");
        lcd.setCursor(0,1);
        /*
        while(Serial.available() > 0){
            char ch = Serial.read();
            if(ch != '\r' && ch != '\n'){lcd.write(ch);}
        }
        */
        String line=readLine();
        if(line != ""){
            lcd.setCursor(0,1);
            char buf[17]; // 문자의 개수는 16개지만 문자끝에 NULL문자가 필요해서 17
            float d = 3.14159;
            char buf2[10];
            dtostrf(d,2,3,buf2);
            sprintf(buf, "%-8s %s   ", line.c_str(),buf2);// %- 좌측정렬 %n- 우측정렬
            //sprintf로 하면 문자열 buff에 출력하겠다는 뜻이 됌
            //c++의 sprintf 는 실수형을 지원하지만 아두이노는 지원하지않음
            //그래서 dtostrf 를 사용함 교재에있음
            lcd.print(buf);
            //lcd.print(line.c_str());
            //String 객체를 문자열로 바꿔서 넣음
        }
    }
    //
}
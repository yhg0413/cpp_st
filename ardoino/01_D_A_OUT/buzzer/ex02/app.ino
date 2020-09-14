int speakerPin = 5;
void setup(){

}

void loop(){
    tone(speakerPin, 5000, 1000);
    //  출력핀     출력Hz   [출력시간(ms)]생략가능(계속소린마)
    //tone는 바로 리턴해서 소리나는시간이 딜레이시간에 포함됌
    delay(2000);// <- 1초 소리나고 1초 소리 안남 (2초)
}
const int redPin = 6;
const int greenPin = 5;
const int bluePin = 3;

void setup(){
    randomSeed(analogRead(A0));
    //아날로그 리드는 꽂혀있지않으면 임의의 값을 리턴함 랜덤 시드를 넣기위해 그냥 임의의수 뽑은것 큰 의미없음
    analogWrite(redPin, 255);
    delay(500);
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    delay(500);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 255);
    delay(500);
}

void loop(){
    analogWrite(redPin, random(256));
    analogWrite(greenPin, random(256));
    analogWrite(bluePin, random(256));
    delay(1000);
}
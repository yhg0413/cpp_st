#include "Car.hpp" // 검색순서 : cwd(& include 포함 현재디렉토리)-> 사용자 lib ->컴파일러 lib
#include <iostream> // 검색순서 : 사용자 liv-> 컴파일러 lib
//클래스 정의파일

void Car::setSpeed(int s){// :: scope 연산자
    speed = s;
}

int Car::getSpeed(){
    return speed;
}
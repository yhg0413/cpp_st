#include "Car.hpp" // �˻����� : cwd(& include ���� ������丮)-> ����� lib ->�����Ϸ� lib
#include <iostream> // �˻����� : ����� liv-> �����Ϸ� lib
//Ŭ���� ��������

void Car::setSpeed(int s){// :: scope ������
    speed = s;
}

int Car::getSpeed(){
    return speed;
}
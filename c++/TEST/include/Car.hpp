#pragma once

#include<string>
using namespace std;
class Car { // Ŭ��������
// ����Ʈ ���� ������ :private
    int speed;
    int gear;
    string color;
public:
    int getSpeed(); // �Լ�����
    void setSpeed(int s);
};
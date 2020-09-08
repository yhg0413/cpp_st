#include <iostream>
using namespace std;

class Circle{
public:
    int x, y;
    int radius;

    Circle(): x(0), y(0), radius(0){}
    Circle(int x, int y, int r): x(x), y(y), radius(r){}

    void print(){
        cout << "������: " << radius << "@(" << x << "," <<y<< ")" <<endl;
    }
};

int main(int argc, char const *argv[]){
    Circle objArray[10]; // 10���� ��Ұ� ����Ʈ �����ڿ� ���� ����

    for(Circle c : objArray){ // �ʱ�ȭ�� ��� �ƴ��� Ȯ��
        c.print();
    }
    for(Circle& c : objArray){
        c.x = rand()%500; // 0<=500
        c.y = rand()%300; // 0<=300
        c.radius = rand()%100; // 0<=100
    }

    for(Circle c : objArray){
        c.print();
    }
    cout << "----------------------"<< endl;
    cout << "Circle memory size : "<< sizeof(Circle) << endl;
    cout << "array length :" << sizeof(objArray) / sizeof(Circle) <<endl;

    return 0;
}
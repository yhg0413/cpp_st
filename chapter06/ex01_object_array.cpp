#include <iostream>
using namespace std;

class Circle{
public:
    int x, y;
    int radius;

    Circle(): x(0), y(0), radius(0){}
    Circle(int x, int y, int r): x(x), y(y), radius(r){}

    void print(){
        cout << "반지름: " << radius << "@(" << x << "," <<y<< ")" <<endl;
    }
};

int main(int argc, char const *argv[]){
    Circle objArray[10]; // 10개의 요소가 디폴트 생성자에 의해 생성

    for(Circle c : objArray){ // 초기화가 어떻게 됐는지 확인
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
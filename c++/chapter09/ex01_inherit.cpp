#include <iostream>
#include <string>
using namespace std;

class Shape{
    int x, y;
public:
    // Shape() : object() 호출문을 부름 자동
    // 모든 클래스의 부모는 object()
    Shape(){
        cout << "Shape() 생성자" << endl;
    }
    /*디폴트생성자를 없앨경우
        자식클래스에서 자동호출을 하지못함
        자동호출은 클래스명() 으로 호출하기때문에 에러남
        디폴트생성자가 꼭 있어야함
        아니면 항상 자식클래스에 상속받아야함
    */
    Shape(int xloc, int yloc) : x(xloc), y(yloc){
        cout << "Shape(xloc, yloc) 생성자" << endl;
    }
    ~Shape(){
       cout << "~Shape() 소멸자" << endl; 
    }
};

class Rectangle : public Shape{
    int width, height;

public:
    //지정을 안할시 디폴드로 
    //Rectangle() : Shape() 로 실행됌
    Rectangle(){
        cout << "Rectangle() 생성자" << endl;
    }
    Rectangle(int x, int y, int w, int h):Shape(x, y), width(w), height(h){
        cout << "Rectangle(x, y, w, h) 생성자" << endl;
    }
    ~Rectangle(){
        cout << "~Rectangle() 소멸자" <<endl;
    }
};

int main(int argc, char const *argv[]){
    Rectangle r1;
    cout << endl;
    Rectangle r2(0, 0, 100, 100);
    cout << endl;
    return 0;
}
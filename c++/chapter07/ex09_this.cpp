#include <iostream>
#include <string>
using namespace std;

class Rectangle{
private:
    int length;
    int width;

public:
    Rectangle(int length=30, int width=40) : length(length), width(width){
        
    }
    ~Rectangle(){}

    void setLength(int length){this-> length = length;}
    int getLength(){return this->length; }

    void setWidth(int width) { this ->width = width; }
    int getWidth(){ return this->width;}

};

int main(int argc, char const *argv[]){
    Rectangle rect;
    cout << "사각형의 길이 : " << rect.getLength() << endl;
    cout << "사각형의 너비 : " << rect.getWidth() << endl;

    rect.setLength(20);
    rect.setWidth(10);

    cout << "사각형의 길이 : " << rect.getLength() << endl;
    cout << "사각형의 너비 : " << rect.getWidth() << endl;

    return 0;
}
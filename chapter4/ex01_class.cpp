#include <iostream>
#include <string>
using namespace std;

class Circle{
public:
    int radius;
    string color;
    
    double calcArea(){
        return 3.14 * radius * radius;
    }
};


int main(int argc, char const *argv[]){
    Circle obj; // 按眉积己
    obj.radius = 100;
    obj.color = "blue";

    cout << "盔狼 搁利 " << obj.calcArea() << endl;
    return 0;
}
#include <iostream>
using namespace std;
class Time{
    public:
    int hour;
    int minute;


    Time(int h=0, int m=0){
        hour = h;
        minute = m;
    }
    void print(){
        cout << hour << ":" << minute << endl;
    }
};
int main(int argc, char const *argv[]){
    Time a;
    Time b(10,25);
    Time c(10);
    a.print();
    b.print();
    c.print();
    return 0;
}
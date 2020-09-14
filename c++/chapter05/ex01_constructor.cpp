#include <iostream>
using namespace std;


class Second{
    public:
    int sec;

    Second(){
        sec=0;
    }
    Second(int s){
        sec = s;
    }
};


class Time{
    public:
    int hour;
    int minute;
    Second sec;
    //생성자

    Time(){
        hour = 0;
        minute =0;
        sec.sec = 20;
    }
    //Time(){} 얘를 사용하면 Time a도 오류안남
    Time(int h, int m){
        hour = h;
        minute = m;
        
    }//기본적으로 리턴을 하지않으면 int로 자동반환하지만 생성자는예외로
    //리턴타입을 넣지않고 클래스명과 같은 함수를 만들경우 생성자라고함

    

    //생성자를 정의하지 않을경우 time(){} 이렇게 디폴트생성자가 만들어짐

    void print(){
        cout << hour << ":" << minute << endl;
    }
    
};

void printTime(Time t){//매개변수 t의 입력된 값을 t로 복사(인스턴스생성) 하여 실행함
        cout << t.hour << ":" << t.minute << endl;
    }
    /*
void printTime(Time &t){//매개변수 t의 입력된 값을 t에 참조 메모리 할당을 받지않고 원본을 가지고 접근함
    cout << t.hour << ":" << t.minute << endl;
}*/
int main(int argc, char const *argv[]){
    //Time a; 위의 생성자 정의가 int변수 두개가 들어갔기때문에
    //디폴트 생성자가 없어서 에러남
    Time a;
    Time b(10, 25);
    Time c{12, 25};
    Time d = {10,25};
    Time f = c;
    a.print();
    c.hour = 10;
    b.print();
    c.print();
    d.print();
    f.print();

    printTime(b);// b값을 복사 하여 t에서 사용 참조아님 복사임 파이썬은 참조
    return 0;
}
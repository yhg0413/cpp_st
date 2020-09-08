# chapter05 생성자와 접근 제한자

 - ### 생성자

   	- 객체가 인스턴스화 될 때 자동으로 호출되는 멤버 함수
   	- 리턴 타입이 없으며 클래스 이름과 동일
   	- 멤버 변수의 초기화가 주요 역할임
    - 생성자를 정의하지 않으면 컴파일러에 의해 디폴트 생성자가 자동 추가됨
       - 디폴트 생성자
         	- 매게변수가 없는 생성자

ex01_constructor.cpp

```c++
#include <iostream>
using namespace std;

class Time{
    public:
    int hour;
    int minute;

    //생성자

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
    Time b(10, 25);
    Time c{12, 25};
    Time d = {10,25};
    Time f = c;
    c.hour = 10;
    b.print();
    c.print();
    d.print();
    f.print();

    printTime(b);// b값을 복사 하여 t에서 사용 참조아님 복사임 파이썬은 참조
    return 0;
}
```

```결과
10:25
10:25
10:25
12:25
10:25
```

- 생성자의 중복 정의 (overload)
  - 함수처럼 오버로드 가능
    - 매개변수가 달라야함

ex02_overload.cpp

```c++
#include <iostream>
using namespace std;
class Time{
    public:
    int hour;
    int minute;

  

    Time(){
        hour = 0;
        minute = 0;
    }
    Time(int h, int m){
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
    a.print();
    b.print();
    return 0;
}
```

```결과
0:0
10:25
```

ex_03_default.cpp - 디폴트인수를 사용하는 생성자

```c++
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
```

```결과
0:0
10:25
10:0
```



- 멤버 초기화 리스트

```c++
Time(int h, int m){
    hour = h;
    minute = m;
}

위 아래 같은 뜻임

Time(int h, int m) : hour(h), minute(m){
    
}
```

대입문과 동일한 효과를 가지게 됌(아래) 

Time(int h, int m) : hour(h), minute(m){
    
}

- 소멸자
  - ~클래스명()
  - 인스턴스 변수가 메모리에서 사라질 때 자동으로 호출
    - 전역변수 : 프로그램 종료시
    - 지역변수 : 블럭이 끝날 때
    - 동적 생성 변수 : delete 호출시
  - 동적 할당된 자원의 cleanup 작업 수행
  - 매게변수가 없으며 오버로드 불가능 --> 1개 만 만들 수 있음

ex04_destructor.cpp

```c++
#include <iostream>
#include <string.h>
using namespace std;

class MyString{
    private:
    char *s;
    int size;

    public:
    MyString(char *c){
        size = strlen(c) + 1;
        s = new char[size];//동적할당 new 데이터타입[크기] 
        //new 는 heap에 데이터를 할당받고 확보된 메모리의 시작주소값을 리턴함
        strcpy(s,c);
    }

    ~MyString(){
        delete[]s;// 배열이면 배열이라는걸 알려주기위해 []를 써줘야함
    }//가바지컬렉터가 c++은 없기때문에 이렇게 일일이 지워줘야함
};

int main(int argc, char const *argv[]){
    
    return 0;
}
```


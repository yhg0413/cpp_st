



# chapter04 클래스와 객체

 - 객체의 구성요소
    - 멤버 변수
      	- 객체의 상태를 저장하는 변수
   - 멤버 함수(메서드)
     - 객체 안에 정의된 함수
     - 멤버 변수 접근에 자유로움

![image-20200907142857407](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907142857407.png)

 - 클래스와 객체(인스턴스)
    - 클래스
      	- 객체의 형태를 정의하는 설계도
   - 객체(인스턴스)
     - 클래스의 형태를 취하는 실체

![image-20200907142959813](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907142959813.png)

![image-20200907143015775](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907143015775.png)

클래스 선언시 꼭 대괄호 끝에 세미클로붙이기

 - 접근지정자
    - private
      	- 클래스 안에서만 접근(사용)할 수 있음
   - protected
     - 클래스 안과 상속된 클래스에서 접근 가능
   - public
     - 어디서나 접근이 가능
- 객체 생성
  - 클래스 타입으로 변수를 선언하면 해당 객체(인스턴스)가 생성됌

![image-20200907143623932](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907143623932.png)

위와같은 선언은 정적할당(스택에 배정됌)

동적할당은 heap에 배정됌

동적할당은 pointer를 활용하여 선언함

 - 객체 멤버 접근
   	- . 연산자로 접근 (public에서만 가능)

![image-20200907143721100](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907143721100.png)

##### ex01_class.cpp

```c++
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
    Circle obj; // 객체생성
    obj.radius = 100;
    obj.color = "blue";

    cout << "원의 면적 " << obj.calcArea() << endl;
    return 0;
}
```

```결과
원의 면적 31400
```

##### ex02_class.cpp - 여러 개의 객체 생성

```c++
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
    Circle pizza1, pizza2; // ㄱ객체생성

    pizza1.radius = 100;
    pizza1.color = "yellow";

    cout << "피자의 면적 " << pizza1.calcArea() << endl;

    pizza2.radius = 200;
    pizza2.color = "white";

    cout << "피자의 면적 " << pizza2.calcArea() << endl;


    return 0;
}
```

```결과
피자의 면적 31400
피자의 면적 125600
```

##### ex03_car.cpp

```c++
#include <iostream>
using namespace std;

class Car{
    public:
    int speed;
    int gear;
    string color;

    void speedUp(){
        speed += 10;
    }
    void speedDown(){
        speed -=10;
    }
};


int main(int argc, char const *argv[]){
    Car myCar;

    myCar.speed = 100;
    myCar.gear = 3;
    myCar.color = "red";

    myCar.speedUp();
    myCar.speedDown();
    
    return 0;
}
```



##### ex04_overload.cpp - 멤버 함수 오버로드

```c++
#include <iostream>
#include <string>
using namespace std;

class PrintData{
    public:
    void print(int i){cout << i << endl;}
    void print(double f){cout << f << endl;}
    void print(string s = "No Data!"){cout << s << endl;}
};

int main(int argc, char const *argv[]){
    PrintData prn;

    prn.print(1);
    prn.print(3.14);
    prn.print("C++ is cool.");
    prn.print();
    return 0;
}
```

```결과
1
3.14
C++ is cool.
No Data!
```



 - ##### 객체 지향의 특징

   	- 캡슐화
   	- 정보 은닉
   	- 상속과 다형성

- 상속

```c++
class 자식 클래스명: public 부모 클래스명 { 
    // 자식 클래스 멤버 정의 
}
```

![image-20200907151751560](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907151751560.png)



##### ex05_inherit.cpp-상속

```c++
#include <iostream>
#include <string>
using namespace std;

class Shape{
    protected:
    int x, y;

    public:
    void draw(){}
    void move(){}
};

class Reactangle:public Shape{
    protected:
    int width;
    int height;
    public:
    int calcArea(){
        return width*height;
    }
};


int main(int argc, char const *argv[]){
    
    return 0;
}
```



 - 클래스 원형과 구현 정의 분리
    - 헤더 파엘이 클래스 원형
      	- 멤버 변수 정의
      	- 멤버 함수의 원형 정의
   - cpp 파일에 멤버 함수 정의
     - 헤어 파일을 먼저 include
     - 멤버 함수 구현

![image-20200907153409894](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907153409894.png)

![image-20200907161530790](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907161530790.png)

![image-20200907161544408](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907161544408.png)

![image-20200907161607954](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907161607954.png)

![image-20200907161622124](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907161622124.png)

![image-20200907161635392](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907161635392.png)

![image-20200907161650710](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907161650710.png)



### include/Car.hpp

```hpp
#pragma once

#include<string>
using namespace std;
class Car { // 클래스원형
// 디폴트 접근 제한자 :private
    int speed;
    int gear;
    string color;
public:
    int getSpeed(); // 함수원형
    void setSpeed(int s);
};
```

### src/Car.cpp

```c++
#include "Car.hpp" // 검색순서 : cwd(& include 포함 현재디렉토리)-> 사용자 lib ->컴파일러 lib
#include <iostream> // 검색순서 : 사용자 liv-> 컴파일러 lib
//클래스 정의파일

void Car::setSpeed(int s){// :: scope 연산자
    speed = s;
}

int Car::getSpeed(){
    return speed;
}
```

### src/main.cpp

```c++
#include <iostream> 

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
}
```

makefile로 컴파일하기 아래 사진의 make.exe가 있어야함

![image-20200907164007628](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907164007628.png)

![image-20200907164328206](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907164328206.png)

bin 폴더에 main.exe가 만들어졌는지 확인

![image-20200907164359279](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907164359279.png)

![image-20200907164542861](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907164542861.png)



makefile에서 리눅스기반이라 이 명령어들을 변경 (clear -> cls) (-rm -> del)

![image-20200907164824666](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907164824666.png)![image-20200907165033178](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907165033178.png)



실행은 make run

위를 기반으로 printData 추가

```c++
#include <iostream> 
#include <string>

#include "Car.hpp"
#include "PrintData.hpp"

using namespace std;
int main(int argc, char const *argv[]) {
    Car myCar;

    myCar.setSpeed(100);

    cout << "속도 : " << myCar.getSpeed() << endl;

    PrintData pd;
    pd.print(10);
    pd.print(10.2);
    pd.print("Hello world");
    pd.print();
    return 0;
}
```

PrintData.hpp

```c++
#pragma once // -> 함으로써 include한 파일명이 동일할경우 또 불러오지않고 불러온내용에서 그냥 한번도 체크? 하는걸로 끝냄 이미 읽은파일을 처리하는 명령어
#include <string>
using namespace std;
class PrintData { // 클래스 원형

public:
    void print(int i);
    void print(double f);
    void print(string s = "No data!");
};
```

PrintData.cpp

```c++
#include "PrintData.hpp"
#include <iostream>
using namespace std;
void PrintData::print(int i ){
    cout << i << endl;   
}
void PrintData::print(double f ){
    cout << f << endl;   
}
void PrintData::print(string s ){
    cout << s << endl;   
}
```

결과

```c++
속도 : 100
10
10.2
Hello world
No data!
```

```c++
#pragma once

이전엔 둘이 같은데 #pragma once로 편하게 한번만 쓰면 끝나게 만듬

#ifndef 상수 // if not defined

#define 상수



내용



#endif
```
# chapter07 포인터와 동적 객체 생성

- 포인터(pointer)

  - 메모리의 주소값을 저장하는 변수
  - 변수 선언시 타입 뒤에 *를 지정
  - int *p;  //정수를 가르키는 포인터 선언

  

  포인터 변수를 지을때는 앞에 소문자p를 넣어서 포인터변수임을

  알리는 관례가있다.

  

  

  ![image-20200908155302791](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908155302791.png)

- 주소 연산자 &

  - 기존 변수의 주소 값을 획득하여 포인터 변수에 저장할 때 사용

  int number = 10;

  int *p; // 정수를 가르키는 포인터 선언

  p = &number;

![image-20200908155420035](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908155420035.png)

- 간접 참조 연산자 *
  - 포인터 변수에는 주소가 저장되어있음
  - 그 주소에 저장되어 있는 데이터를 얻을 때 사용

##### ex01_pointer.cpp

```c++
#include <iostream>
using namespace std;


int main(int argc, char const *argv[]){
    //f(NULL); -- int, char * 둘 다 가능함으로 에러
    int number = 0;
    int *p = &number;//포인터변수 p를 선언한것이지
    //현제 연산자 *를 사용한것임


    cout << p << endl; // p는 number의 주소값을 가지게 됌
    cout << *p << endl; // 따라서 * number의 주소값 이랑 같은 뜻이됌
    //포인터연산자는 주소값을 따라가 그 주소값에 저장된 값을 불러옴
    //그래서 *p는 number에 저장된 0을 가져옴

    return 0;
}
```

```결과
0x61fe14
0
```



- NULL
  - 포인터가 아무것도 가리키지 않는 것을 의미하는 특수한 데이터
    - 0으로 해석되므로 int이기도 하면서 포인터 이기도 함
  - 포틴어 변수를 초기화할 때 사용
  - nullptr 사용 가능
    - 포인터로만 해석

ex02_null.cpp

```c++
#include <iostream>
using namespace std;


void f(int i){
    cout << "f(int)" << endl;
}

void f(char *p){
    cout << "f(char *)" <<endl;
}

int main(int argc, char const *argv[]){
    int *pNumber = NULL ; //초기화권장
    int *pNumber2; //비권장 임의의 초기값을가짐

    //f(NULL); --int, char * 둘 다 가능하므로 에러
    f(nullptr);//포인터변수로 인식하는 nullptr를 사용하여 오버로드에서
    //오류나지않고 초기화가 가능했다 nullptr : 포인터 NULL를 의미하는 키워드


    if(pNumber != NULL){
        cout << *pNumber << endl;
    }

    if(pNumber2 != NULL){//결과를 장담하지 못함
        cout << *pNumber2 << endl;
    }

    return 0;
}


```

```결과
f(char *)
7083665(임의의 초기값)
```

- 프로그램에서의 메모리
  - 스택(Stack)
    - 지역 변수 할당
    - 시스템에 의해 관리
  - 힙(heap)
    - 동적 메모리 할당
    - 개발자에 의해 관리

![image-20200908161502883](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908161502883.png)



- 동적 할당 메모리

  - new

    - 동적으로 힙에 메모리를 할당

  - delete

    - 동적으로 힙에 할당된 메모리를 회수( 정적데이터는 불가능 )
    - 파괴자가 호출 됌
    - 동적 메모리를 회수 하지않으면 가비지(garbage) 증가 -- 메모리 누수
    - 딜리트 하기전엔 NULL검사를 항상하고 포인터 선언시에도 NULL로 초기화 항상하기

  - 

    class T{};

    T *p = new T;

    T *p = new T[N];

    T *p = new T[N] {initializer1, . . . , initializeerN};

  - 

    int *p;

    p=new int[5];

    int *p = new int[5] {0,1,2,3,4};![image-20200908162222624](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908162222624.png)

  - -

    int *p = new int;

    .

    delete p; //단일 데이터 삭제



​				int *p = new int[5] {0,1,2,3,4};

​				delete[] p; // 배열 데이터 삭제

##### ex03_new_delete.cpp

```c++
#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[]){
    int *ptr;

    srand(time(NULL));

    ptr = new int[10];
    for(int i=0; i<10; i++){
        ptr[i] = rand();
    }

    for(int i=0; i<10; i++){
        cout << ptr[i] << " ";
    }
    cout << endl;
    delete []ptr;
    return 0;
}
```

```결과
13154 12992 25621 7157 16942 4525 6560 10147 12399 20541 
```

##### ex04_garbage.cpp

```c++
#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[]){
    int *ptr = new int;

    *ptr = 99;
    
    return 0;
}
```

```결과
new int의 힙에 배정된 공간이 삭제되지않고 계속 남는다
```

- 스마트 포인터

  - 포인터의 동적 메모리 회수를 자동으로 처리해줌

    - 포인터 변수가 제거될 때 자동으로 delete 호출

  - #include <memory> 추가 후 사용

  - unique_ptr

    - 포인터에 대해 오직 하나의 소유자만 허용

  - -

    unique_ptr<int[]> buf(new int[10]);

    

  - shared_ptr

    - 참조 횟수가 계산되는 스마트 포인터



##### ex05_smart_pointer.cpp

```c++
#include <iostream>
#include <memory>
using namespace std;

int main(int argc, char const *argv[]){
    unique_ptr<int[]> buf(new int[10]);

    for(int i=0; i<10; i++){
        buf[i] = i;
    }
    for(int i=0; i<10; i++){
        cout <<buf[i] << " ";
    }
    cout << endl;
    return 0;
}
```

```결과
0 1 2 3 4 5 6 7 8 9 
```



- 객체의 동적 생성

  - 객체에 대해서도 동일한 원칙 정욕

  - 멤버 접근에 대한 표현이 다름

    - 포인터_변수 -> 멤버

  - -

    Dog *pDog = new Dog;

    pDog->age = 10;

    .

    .

    delete pDog;

##### ex06_dynamic.cpp

```c++
#include <iostream>
#include <string>
using namespace std;

class Dog{
    public :
    int age;
    string name;

    Dog() {
        cout << "Dog 생성자 호출" << endl;
        age = 1;
        name = "바둑이";
    }
    ~Dog(){
        cout << "Dog 소멸자 호출" << endl;
    }
};

int main(int argc, char const *argv[]){
    Dog *pDog = new Dog;
    delete pDog;
    
    return 0;
}
```

```결과
Dog 생성자 호출
Dog 소멸자 호출
```


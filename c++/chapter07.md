# chapter07 ?��?��?��??? ?��?�� 객체 ?��?��

- ?��?��?��(pointer)

  - 메모리의 주소값을 ????��?��?�� �??��
  - �??�� ?��?��?�� ????�� ?��?�� *�? �??��
  - int *p;  //?��?���? �?르키?�� ?��?��?�� ?��?��

  

  ?��?��?�� �??���? �??��?��?�� ?��?�� ?��문자p�? ?��?��?�� ?��?��?���??��?��?��

  ?��리는 �?�?�??��?��.

  

  

  ![image-20200908155302791](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908155302791.png)

- 주소 ?��?��?�� &

  - 기존 �??��?�� 주소 값을 ?��?��?��?�� ?��?��?�� �??��?�� ????��?�� ?�� ?��?��

  int number = 10;

  int *p; // ?��?���? �?르키?�� ?��?��?�� ?��?��

  p = &number;

![image-20200908155420035](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908155420035.png)

- 간접 참조 ?��?��?�� *
  - ?��?��?�� �??��?��?�� 주소�? ????��?��?��?��?��
  - �? 주소?�� ????��?��?�� ?��?�� ?��?��?���? ?��?�� ?�� ?��?��

##### ex01_pointer.cpp

```c++
#include <iostream>
using namespace std;


int main(int argc, char const *argv[]){
    //f(NULL); -- int, char * ?�� ?�� �??��?��?���? ?��?��
    int number = 0;
    int *p = &number;//?��?��?���??�� p�? ?��?��?��것이�?
    //?��?�� ?��?��?�� *�? ?��?��?��것임


    cout << p << endl; // p?�� number?�� 주소값을 �?�?�? ?��
    cout << *p << endl; // ?��?��?�� * number?�� 주소�? ?��?�� 같�?? ?��?��?��
    //?��?��?��?��?��?��?�� 주소값을 ?��?���? �? 주소값에 ????��?�� 값을 불러?��
    //그래?�� *p?�� number?�� ????��?�� 0?�� �??��?��

    return 0;
}
```

```결과
0x61fe14
0
```



- NULL
  - ?��?��?���? ?��무것?�� �?리키�? ?��?�� 것을 ?��미하?�� ?��?��?�� ?��?��?��
    - 0?���? ?��?��?���?�? int?��기도 ?��면서 ?��?��?�� ?��기도 ?��
  - ?��?��?�� �??���? 초기?��?�� ?�� ?��?��
  - nullptr ?��?�� �??��
    - ?��?��?��로만 ?��?��

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
    int *pNumber = NULL ; //초기?��권장
    int *pNumber2; //비권?�� ?��?��?�� 초기값을�?�?

    //f(NULL); --int, char * ?�� ?�� �??��?���?�? ?��?��
    f(nullptr);//?��?��?���??���? ?��?��?��?�� nullptr�? ?��?��?��?�� ?��버로?��?��?��
    //?��류나�??���? 초기?���? �??��?��?�� nullptr : ?��?��?�� NULL�? ?��미하?�� ?��?��?��


    if(pNumber != NULL){
        cout << *pNumber << endl;
    }

    if(pNumber2 != NULL){//결과�? ?��?��?���? 못함
        cout << *pNumber2 << endl;
    }

    return 0;
}


```

```결과
f(char *)
7083665(?��?��?�� 초기�?)
```

- ?��로그?��?��?��?�� 메모�?
  - ?��?��(Stack)
    - �??�� �??�� ?��?��
    - ?��?��?��?�� ?��?�� �?�?
  - ?��(heap)
    - ?��?�� 메모�? ?��?��
    - 개발?��?�� ?��?�� �?�?

![image-20200908161502883](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908161502883.png)



- ?��?�� ?��?�� 메모�?

  - new

    - ?��?��?���? ?��?�� 메모리�?? ?��?��

  - delete

    - ?��?��?���? ?��?�� ?��?��?�� 메모리�?? ?��?��( ?��?��?��?��?��?�� 불�???�� )
    - ?��괴자�? ?���? ?��
    - ?��?�� 메모리�?? ?��?�� ?���??��?���? �?비�??(garbage) 증�?? -- 메모�? ?��?��
    - ?��리트 ?��기전?�� NULL�??���? ?��?��?���? ?��?��?�� ?��?��?��?��?�� NULL�? 초기?�� ?��?��?���?

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

    delete p; //?��?�� ?��?��?�� ?��?��



???				int *p = new int[5] {0,1,2,3,4};

???				delete[] p; // 배열 ?��?��?�� ?��?��

##### ex03_new_delete.cpp

```c++
#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[]){
    int *ptr;

    srand(time(NULL));
    /*
    ptr??? ?��?��?�� ?��?�� 메모리의 ?��?��주소,
    ?��?��?�� ptr??? �? 번째 ?��리먼?��(ptr[0])?�� ????�� ?��?��?��
    *ptr??? ptr[0]�? 같음
    */
    ptr = new int[10];
    for(int i=0; i<10; i++){
        ptr[i] = rand();
        //*(ptr+i) = rand();
    }

    for(int i=0; i<10; i++){
        cout << ptr[i] << " ";
        //cout << *(ptr+i) << " ";
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
    //ptr?�� ????��?�� 주소�? �?르키?�� 값에 99�? ?��?��?��

    
    //ptr = 99; 주소값에 99�? ?��?��?��
    
    return 0;
}
```

```결과
new int?�� ?��?�� 배정?�� 공간?�� ?��?��?���??���? 계속 ?��?��?��
```

- ?��마트 ?��?��?��

  - ?��?��?��?�� ?��?�� 메모�? ?��?���? ?��?��?���? 처리?���?

    - ?��?��?�� �??���? ?��거될 ?�� ?��?��?���? delete ?���?
  - ?��?��?���??���? ?��?��?��?�� ?��?��질때 ?��?��?���?  delete ?���?
  
- #include <memory> 추�?? ?�� ?��?��
  
- unique_ptr
  
  - ?��?��?��?�� ????�� ?���? ?��?��?�� ?��?��?���? ?��?��
  
- -
  
  unique_ptr<int[]> buf(new int[10]);
  
  
  
- shared_ptr
  
    - 참조 ?��?���? 계산?��?�� ?��마트 ?��?��?��



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



- 객체?�� ?��?�� ?��?��

  - 객체?�� ????��?��?�� ?��?��?�� ?���? ?��?��

  - 멤버 ?��근에 ????�� ?��?��?�� ?���?

    - ?��?��?��_�??�� -> 멤버

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
        cout << "Dog ?��?��?�� ?���?" << endl;
        age = 1;
        name = "바둑?��";
    }
    ~Dog(){
        cout << "Dog ?��멸자 ?���?" << endl;
    }
};

int main(int argc, char const *argv[]){
    Dog *pDog = new Dog;
    delete pDog;
    
    return 0;
}
```

```결과
Dog ?��?��?�� ?���?
Dog ?��멸자 ?���?
```

- ?��?��?���? 객체 멤버 ?��근하�?

  - -

    (*pDog).getAge();

    pDog->getAge(); // ?��?��?���? 멤버 ?��근할 ?�� ->?��?��

##### ex07_pointer.cpp - ?��?��?���? 객체 멤버 ?��근하�?

```c++
#include <iostream>
#include <string>
using namespace std;

class Dog{
    public:

    int age;
    string name;

    Dog(){
        age = 1;
        name = "바둑?��";
    }
    ~Dog(){}

    int getAge() {return age;}
    void setAge(int a){ age = a; }
};

int main(int argc, char const *argv[]){
    Dog *pDog = new Dog;
    
    cout << "강아�??�� ?��?��: " << pDog->getAge() << endl;
    
    pDog->setAge(3);
    cout << "강아�??�� ?��?�� : " << pDog->getAge() << endl;

    delete pDog;
    
    return 0;
}
```

```결과
강아�??�� ?��?��: 1
강아�??�� ?��?�� : 3
```

ex08_dynamic_member.cpp

```c++
#include <iostream>
#include <string>
using namespace std;

class Dog{
    private:

    int *pAge;
    int *pWeight;

    public:

    Dog(){
        pAge = new int{1};
        pWeight = new int{10};
    }
    ~Dog(){
        delete pAge;
        delete pWeight;
    }
    int getAge() { return *pAge; }
    void setAge(int a) { *pAge = a; }
    int getWeight() { return *pWeight; }
    void setWeight(int w) { *pWeight = w; }
};

int main(int argc, char const *argv[]){
    Dog *pDog = new Dog;
    cout << sizeof(pDog) << endl;// pDog ?��?��?�� �??��?�� ?���? = 8 (?��?��?���??��?�� 8?�� ?��기�?? �?진다)
    cout << sizeof(*pDog) << endl;// pDog�? ?��?��?��?��?�� ?��?��?��?��?�� ?���?
    // ?��?��?���??���? ?��개라?�� 16
    cout << "강아�??�� ?��?�� : " <<pDog->getAge() << endl;
    
    pDog->setAge(3);
    cout << "강아�??�� ?��?�� : " << pDog->getAge() <<endl;

    delete pDog;
    return 0;
}
```

```결과
8
16
강아�??�� ?��?�� : 1
강아�??�� ?��?�� : 3
```



- ##### this ?��?��?�� 

  - 모든 객체�? �?�??�� 멤버 �??��
  - ?��?��(?��?��?��?��?��)?�� ????�� ?��?��?�� �??��
  - 멤버 �??��??? 매개 �??��?�� ?��름이 같�?? 경우 멤버 �??���? �?�??���? ?��?�� ?��?��
  - ?��?��?���??��?��?�� -> �? ?��?��?��?��?�� . ?��?��

##### ex09_this.cpp - this ?��?��?��

```c++
#include <iostream>
#include <string>
using namespace std;

class Rectangle{
private:
    int length;
    int widht;

public:
    Rectangle(){
        length = 30;
        widht = 40;
    }
    ~Rectangle(){}
    void setLength(int length){this-> length = length;}
    int getLength(){return this->length; }
    void setWidth(int widht) { this ->widht = widht; }
    int getWidth(){ return this -> widht;}

};

int main(int argc, char const *argv[]){
    Rectangle rect;
    cout << "?��각형?�� 길이 : " << rect.getLength() << endl;
    cout << "?��각형?�� ?���? : " << rect.getWidth() << endl;

    rect.setLength(20);
    rect.setWidth(10);

    cout << "?��각형?�� 길이 : " << rect.getLength() << endl;
    cout << "?��각형?�� ?���? : " << rect.getWidth() << endl;

    return 0;
}
```

```결과
?��각형?�� 길이 : 30
?��각형?�� ?���? : 40
?��각형?�� 길이 : 20
?��각형?�� ?���? : 10
```



- ##### const ?��?��?��

  - const int *p1; // ?��?��?�� ????�� ?��?��?��. 값이 ?��?��?��, 값을 바�?? ?�� ?��?��
  - int * const p2;// ?��?��?���? ?��?��?��, ?���? 주소�? 바�?? ?�� ?��?��
  - const int * const p3; // ?��린터??? �? 모두 ?��?��

ex10_const_pointer

```c++
#include <iostream>
#include <string>
using namespace std;

void print(string t){
    cout << t << endl;
}

void print(const char t[]){
    cout << t << endl;
}
//?��경우 test??? pstr??? 받을?��?��?��
//?���?�? str??? 받�??못한?��

int main(int argc, char const *argv[]){
    char test[] = "Hello"; //문자?��배열
    char *pstr = "c++"; //문자?�� 보인?��
    string str = "World"; //string 객체

 

    print(test);
    print(pstr);
    print(str);
    print(str.c_str());

    //print(str.c_str()); ?��?��?��?��?��?�� ?��?��?��게될�?
    //string ?��?��?���? �??��?���??��?�� ?��?�� c?��?�� ?��?��?�� ?��?��브러리�??
    //?��?��?��?�� str.c_str()?�� ?��?��?��?�� string객체�? char *로써 리턴?��?��?��
    //const char *?�� 리턴?�� const�? ?��?��?��?�� ?��?��?��?���?�? �?경을 ?���?못하�?
    //만드?��것임


    return 0;
}
```

```결과
Hello
c++
World
Hello
c++
World
World
```


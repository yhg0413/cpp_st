# chapter07 ?¬?Έ?°??? ??  κ°μ²΄ ??±

- ?¬?Έ?°(pointer)

  - λ©λͺ¨λ¦¬μ μ£Όμκ°μ ????₯?? λ³??
  - λ³?? ? ?Έ? ???? ?€? *λ₯? μ§?? 
  - int *p;  //? ?λ₯? κ°?λ₯΄ν€? ?¬?Έ?° ? ?Έ

  

  ?¬?Έ?° λ³??λ₯? μ§???? ?? ?λ¬Έμpλ₯? ?£?΄? ?¬?Έ?°λ³????

  ?λ¦¬λ κ΄?λ‘?κ°???€.

  

  

  ![image-20200908155302791](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908155302791.png)

- μ£Όμ ?°?°? &

  - κΈ°μ‘΄ λ³??? μ£Όμ κ°μ ????¬ ?¬?Έ?° λ³??? ????₯?  ? ?¬?©

  int number = 10;

  int *p; // ? ?λ₯? κ°?λ₯΄ν€? ?¬?Έ?° ? ?Έ

  p = &number;

![image-20200908155420035](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908155420035.png)

- κ°μ  μ°Έμ‘° ?°?°? *
  - ?¬?Έ?° λ³???? μ£Όμκ°? ????₯??΄??
  - κ·? μ£Όμ? ????₯??΄ ?? ?°?΄?°λ₯? ?»? ? ?¬?©

##### ex01_pointer.cpp

```c++
#include <iostream>
using namespace std;


int main(int argc, char const *argv[]){
    //f(NULL); -- int, char * ? ?€ κ°??₯?¨?Όλ‘? ??¬
    int number = 0;
    int *p = &number;//?¬?Έ?°λ³?? pλ₯? ? ?Έ?κ²μ΄μ§?
    //??  ?°?°? *λ₯? ?¬?©?κ²μ


    cout << p << endl; // p? number? μ£Όμκ°μ κ°?μ§?κ²? ?
    cout << *p << endl; // ?°?Ό? * number? μ£Όμκ°? ?΄? κ°μ?? ?»?΄?
    //?¬?Έ?°?°?°?? μ£Όμκ°μ ?°?Όκ°? κ·? μ£Όμκ°μ ????₯? κ°μ λΆλ¬?΄
    //κ·Έλ? *p? number? ????₯? 0? κ°?? Έ?΄

    return 0;
}
```

```κ²°κ³Ό
0x61fe14
0
```



- NULL
  - ?¬?Έ?°κ°? ?λ¬΄κ²? κ°?λ¦¬ν€μ§? ?? κ²μ ?λ―Έν? ?Ή?? ?°?΄?°
    - 0?Όλ‘? ?΄??λ―?λ‘? int?΄κΈ°λ ?λ©΄μ ?¬?Έ?° ?΄κΈ°λ ?¨
  - ?¬?΄?΄ λ³??λ₯? μ΄κΈ°??  ? ?¬?©
  - nullptr ?¬?© κ°??₯
    - ?¬?Έ?°λ‘λ§ ?΄?

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
    int *pNumber = NULL ; //μ΄κΈ°?κΆμ₯
    int *pNumber2; //λΉκΆ?₯ ??? μ΄κΈ°κ°μκ°?μ§?

    //f(NULL); --int, char * ? ?€ κ°??₯?λ―?λ‘? ??¬
    f(nullptr);//?¬?Έ?°λ³??λ‘? ?Έ??? nullptrλ₯? ?¬?©??¬ ?€λ²λ‘???
    //?€λ₯λμ§??κ³? μ΄κΈ°?κ°? κ°??₯??€ nullptr : ?¬?Έ?° NULLλ₯? ?λ―Έν? ?€??


    if(pNumber != NULL){
        cout << *pNumber << endl;
    }

    if(pNumber2 != NULL){//κ²°κ³Όλ₯? ?₯?΄?μ§? λͺ»ν¨
        cout << *pNumber2 << endl;
    }

    return 0;
}


```

```κ²°κ³Ό
f(char *)
7083665(??? μ΄κΈ°κ°?)
```

- ?λ‘κ·Έ?¨??? λ©λͺ¨λ¦?
  - ?€?(Stack)
    - μ§??­ λ³?? ? ?Ή
    - ??€?? ??΄ κ΄?λ¦?
  - ?(heap)
    - ??  λ©λͺ¨λ¦? ? ?Ή
    - κ°λ°?? ??΄ κ΄?λ¦?

![image-20200908161502883](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908161502883.png)



- ??  ? ?Ή λ©λͺ¨λ¦?

  - new

    - ?? ?Όλ‘? ?? λ©λͺ¨λ¦¬λ?? ? ?Ή

  - delete

    - ?? ?Όλ‘? ?? ? ?Ή? λ©λͺ¨λ¦¬λ?? ??( ? ? ?°?΄?°? λΆκ???₯ )
    - ?κ΄΄μκ°? ?ΈμΆ? ?
    - ??  λ©λͺ¨λ¦¬λ?? ?? ?μ§???Όλ©? κ°?λΉμ??(garbage) μ¦κ?? -- λ©λͺ¨λ¦? ??
    - ?λ¦¬νΈ ?κΈ°μ ? NULLκ²??¬λ₯? ?­??κ³? ?¬?Έ?° ? ?Έ??? NULLλ‘? μ΄κΈ°? ?­??κΈ?

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

    delete p; //?¨?Ό ?°?΄?° ?­? 



???				int *p = new int[5] {0,1,2,3,4};

???				delete[] p; // λ°°μ΄ ?°?΄?° ?­? 

##### ex03_new_delete.cpp

```c++
#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[]){
    int *ptr;

    srand(time(NULL));
    /*
    ptr??? ? ?Ή? ??  λ©λͺ¨λ¦¬μ ??μ£Όμ,
    ?°?Ό? ptr??? μ²? λ²μ§Έ ?λ¦¬λ¨Ό?Έ(ptr[0])? ???? ?¬?Έ?°
    *ptr??? ptr[0]κ³? κ°μ
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

```κ²°κ³Ό
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
    //ptr? ????₯? μ£Όμκ°? κ°?λ₯΄ν€? κ°μ 99λ₯? ?£?΄?Ό

    
    //ptr = 99; μ£Όμκ°μ 99λ₯? ?£?΄?Ό
    
    return 0;
}
```

```κ²°κ³Ό
new int? ?? λ°°μ ? κ³΅κ°?΄ ?­? ?μ§??κ³? κ³μ ?¨??€
```

- ?€λ§νΈ ?¬?Έ?°

  - ?¬?Έ?°? ??  λ©λͺ¨λ¦? ??λ₯? ???Όλ‘? μ²λ¦¬?΄μ€?

    - ?¬?Έ?° λ³??κ°? ? κ±°λ  ? ???Όλ‘? delete ?ΈμΆ?
  - ?¬?Έ?°λ³??κ°? ?€??? ?¬?Όμ§λ ???Όλ‘?  delete ?ΈμΆ?
  
- #include <memory> μΆκ?? ? ?¬?©
  
- unique_ptr
  
  - ?¬?Έ?°? ????΄ ?€μ§? ??? ?? ?λ§? ??©
  
- -
  
  unique_ptr<int[]> buf(new int[10]);
  
  
  
- shared_ptr
  
    - μ°Έμ‘° ??κ°? κ³μ°?? ?€λ§νΈ ?¬?Έ?°



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

```κ²°κ³Ό
0 1 2 3 4 5 6 7 8 9 
```



- κ°μ²΄? ??  ??±

  - κ°μ²΄? ????΄?? ??Ό? ?μΉ? ? ?

  - λ©€λ² ? κ·Όμ ???? ???΄ ?€λ¦?

    - ?¬?Έ?°_λ³?? -> λ©€λ²

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
        cout << "Dog ??±? ?ΈμΆ?" << endl;
        age = 1;
        name = "λ°λ?΄";
    }
    ~Dog(){
        cout << "Dog ?λ©Έμ ?ΈμΆ?" << endl;
    }
};

int main(int argc, char const *argv[]){
    Dog *pDog = new Dog;
    delete pDog;
    
    return 0;
}
```

```κ²°κ³Ό
Dog ??±? ?ΈμΆ?
Dog ?λ©Έμ ?ΈμΆ?
```

- ?¬?Έ?°λ‘? κ°μ²΄ λ©€λ² ? κ·ΌνκΈ?

  - -

    (*pDog).getAge();

    pDog->getAge(); // ?¬?Έ?°λ‘? λ©€λ² ? κ·Όν  ? ->?¬?©

##### ex07_pointer.cpp - ?¬?Έ?°λ‘? κ°μ²΄ λ©€λ² ? κ·ΌνκΈ?

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
        name = "λ°λ?΄";
    }
    ~Dog(){}

    int getAge() {return age;}
    void setAge(int a){ age = a; }
};

int main(int argc, char const *argv[]){
    Dog *pDog = new Dog;
    
    cout << "κ°μμ§?? ??΄: " << pDog->getAge() << endl;
    
    pDog->setAge(3);
    cout << "κ°μμ§?? ??΄ : " << pDog->getAge() << endl;

    delete pDog;
    
    return 0;
}
```

```κ²°κ³Ό
κ°μμ§?? ??΄: 1
κ°μμ§?? ??΄ : 3
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
    cout << sizeof(pDog) << endl;// pDog ?¬?Έ?° λ³??? ?¬κΈ? = 8 (?¬?Έ?°λ³??? 8? ?¬κΈ°λ?? κ°?μ§λ€)
    cout << sizeof(*pDog) << endl;// pDogκ°? ?¬?Έ?Έ?? ?Έ?€?΄?€? ?¬κΈ?
    // ?¬?Έ?°λ³??κ°? ?κ°λΌ? 16
    cout << "κ°μμ§?? ??΄ : " <<pDog->getAge() << endl;
    
    pDog->setAge(3);
    cout << "κ°μμ§?? ??΄ : " << pDog->getAge() <<endl;

    delete pDog;
    return 0;
}
```

```κ²°κ³Ό
8
16
κ°μμ§?? ??΄ : 1
κ°μμ§?? ??΄ : 3
```



- ##### this ?¬?Έ?° 

  - λͺ¨λ  κ°μ²΄κ°? κ°?μ§?? λ©€λ² λ³??
  - ?? (?Έ?€?΄?€?)? ???? ?¬?Έ?° λ³??
  - λ©€λ² λ³????? λ§€κ° λ³??? ?΄λ¦μ΄ κ°μ?? κ²½μ° λ©€λ² λ³??λ₯? μ§?μΉ??κΈ? ??΄ ?¬?©
  - ?¬?Έ?°λ³???Ό? -> λ₯? ?¬?©?΄?Ό?¨ . ??

##### ex09_this.cpp - this ?¬?Έ?°

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
    cout << "?¬κ°ν? κΈΈμ΄ : " << rect.getLength() << endl;
    cout << "?¬κ°ν? ?λΉ? : " << rect.getWidth() << endl;

    rect.setLength(20);
    rect.setWidth(10);

    cout << "?¬κ°ν? κΈΈμ΄ : " << rect.getLength() << endl;
    cout << "?¬κ°ν? ?λΉ? : " << rect.getWidth() << endl;

    return 0;
}
```

```κ²°κ³Ό
?¬κ°ν? κΈΈμ΄ : 30
?¬κ°ν? ?λΉ? : 40
?¬κ°ν? κΈΈμ΄ : 20
?¬κ°ν? ?λΉ? : 10
```



- ##### const ?¬?Έ?°

  - const int *p1; // ??? ???? ?¬?Έ?°. κ°μ΄ ???, κ°μ λ°κ?? ? ??
  - int * const p2;// ?¬?Έ?°κ°? ???, ?€λ₯? μ£Όμλ‘? λ°κ?? ? ??
  - const int * const p3; // ?¬λ¦°ν°??? κ°? λͺ¨λ ??

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
//?΄κ²½μ° test??? pstr??? λ°μ???€
//?μ§?λ§? str??? λ°μ??λͺ»ν?€

int main(int argc, char const *argv[]){
    char test[] = "Hello"; //λ¬Έμ?΄λ°°μ΄
    char *pstr = "c++"; //λ¬Έμ?΄ λ³΄μΈ?°
    string str = "World"; //string κ°μ²΄

 

    print(test);
    print(pstr);
    print(str);
    print(str.c_str());

    //print(str.c_str()); ???΄?Έ?? ?¬?©?κ²λ κ²?
    //string ?΄??€λ₯? μ§???μ§??? ??  c?Έ?΄ ??¬? ?Ό?΄λΈλ¬λ¦¬λ??
    //?¬?©? ? str.c_str()? ?¬?©??¬ stringκ°μ²΄λ₯? char *λ‘μ¨ λ¦¬ν΄??¨?€
    //const char *? λ¦¬ν΄?¨ constλ₯? ?¬?©?΄? ?½???μ§?λ§? λ³?κ²½μ ?μ§?λͺ»νκ²?
    //λ§λ?κ²μ


    return 0;
}
```

```κ²°κ³Ό
Hello
c++
World
Hello
c++
World
World
```


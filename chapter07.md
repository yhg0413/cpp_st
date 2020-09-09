# chapter07 ?¬?¸?„°??? ?™?  ê°ì²´ ?ƒ?„±

- ?¬?¸?„°(pointer)

  - ë©”ëª¨ë¦¬ì˜ ì£¼ì†Œê°’ì„ ????¥?•˜?Š” ë³??ˆ˜
  - ë³??ˆ˜ ?„ ?–¸?‹œ ????… ?’¤?— *ë¥? ì§?? •
  - int *p;  //? •?ˆ˜ë¥? ê°?ë¥´í‚¤?Š” ?¬?¸?„° ?„ ?–¸

  

  ?¬?¸?„° ë³??ˆ˜ë¥? ì§??„?•Œ?Š” ?•?— ?†Œë¬¸ìpë¥? ?„£?–´?„œ ?¬?¸?„°ë³??ˆ˜?„?„

  ?•Œë¦¬ëŠ” ê´?ë¡?ê°??ˆ?‹¤.

  

  

  ![image-20200908155302791](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908155302791.png)

- ì£¼ì†Œ ?—°?‚°? &

  - ê¸°ì¡´ ë³??ˆ˜?˜ ì£¼ì†Œ ê°’ì„ ?š?“?•˜?—¬ ?¬?¸?„° ë³??ˆ˜?— ????¥?•  ?•Œ ?‚¬?š©

  int number = 10;

  int *p; // ? •?ˆ˜ë¥? ê°?ë¥´í‚¤?Š” ?¬?¸?„° ?„ ?–¸

  p = &number;

![image-20200908155420035](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908155420035.png)

- ê°„ì ‘ ì°¸ì¡° ?—°?‚°? *
  - ?¬?¸?„° ë³??ˆ˜?—?Š” ì£¼ì†Œê°? ????¥?˜?–´?ˆ?Œ
  - ê·? ì£¼ì†Œ?— ????¥?˜?–´ ?ˆ?Š” ?°?´?„°ë¥? ?–»?„ ?•Œ ?‚¬?š©

##### ex01_pointer.cpp

```c++
#include <iostream>
using namespace std;


int main(int argc, char const *argv[]){
    //f(NULL); -- int, char * ?‘˜ ?‹¤ ê°??Š¥?•¨?œ¼ë¡? ?—?Ÿ¬
    int number = 0;
    int *p = &number;//?¬?¸?„°ë³??ˆ˜ pë¥? ?„ ?–¸?•œê²ƒì´ì§?
    //?˜„? œ ?—°?‚°? *ë¥? ?‚¬?š©?•œê²ƒì„


    cout << p << endl; // p?Š” number?˜ ì£¼ì†Œê°’ì„ ê°?ì§?ê²? ?Œ
    cout << *p << endl; // ?”°?¼?„œ * number?˜ ì£¼ì†Œê°? ?´?‘ ê°™ì?? ?œ»?´?Œ
    //?¬?¸?„°?—°?‚°??Š” ì£¼ì†Œê°’ì„ ?”°?¼ê°? ê·? ì£¼ì†Œê°’ì— ????¥?œ ê°’ì„ ë¶ˆëŸ¬?˜´
    //ê·¸ë˜?„œ *p?Š” number?— ????¥?œ 0?„ ê°?? ¸?˜´

    return 0;
}
```

```ê²°ê³¼
0x61fe14
0
```



- NULL
  - ?¬?¸?„°ê°? ?•„ë¬´ê²ƒ?„ ê°?ë¦¬í‚¤ì§? ?•Š?Š” ê²ƒì„ ?˜ë¯¸í•˜?Š” ?Š¹?ˆ˜?•œ ?°?´?„°
    - 0?œ¼ë¡? ?•´?„?˜ë¯?ë¡? int?´ê¸°ë„ ?•˜ë©´ì„œ ?¬?¸?„° ?´ê¸°ë„ ?•¨
  - ?¬?‹´?–´ ë³??ˆ˜ë¥? ì´ˆê¸°?™”?•  ?•Œ ?‚¬?š©
  - nullptr ?‚¬?š© ê°??Š¥
    - ?¬?¸?„°ë¡œë§Œ ?•´?„

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
    int *pNumber = NULL ; //ì´ˆê¸°?™”ê¶Œì¥
    int *pNumber2; //ë¹„ê¶Œ?¥ ?„?˜?˜ ì´ˆê¸°ê°’ì„ê°?ì§?

    //f(NULL); --int, char * ?‘˜ ?‹¤ ê°??Š¥?•˜ë¯?ë¡? ?—?Ÿ¬
    f(nullptr);//?¬?¸?„°ë³??ˆ˜ë¡? ?¸?‹?•˜?Š” nullptrë¥? ?‚¬?š©?•˜?—¬ ?˜¤ë²„ë¡œ?“œ?—?„œ
    //?˜¤ë¥˜ë‚˜ì§??•Šê³? ì´ˆê¸°?™”ê°? ê°??Š¥?–ˆ?‹¤ nullptr : ?¬?¸?„° NULLë¥? ?˜ë¯¸í•˜?Š” ?‚¤?›Œ?“œ


    if(pNumber != NULL){
        cout << *pNumber << endl;
    }

    if(pNumber2 != NULL){//ê²°ê³¼ë¥? ?¥?‹´?•˜ì§? ëª»í•¨
        cout << *pNumber2 << endl;
    }

    return 0;
}


```

```ê²°ê³¼
f(char *)
7083665(?„?˜?˜ ì´ˆê¸°ê°?)
```

- ?”„ë¡œê·¸?¨?—?„œ?˜ ë©”ëª¨ë¦?
  - ?Š¤?ƒ(Stack)
    - ì§??—­ ë³??ˆ˜ ?• ?‹¹
    - ?‹œ?Š¤?…œ?— ?˜?•´ ê´?ë¦?
  - ?™(heap)
    - ?™?  ë©”ëª¨ë¦? ?• ?‹¹
    - ê°œë°œ??— ?˜?•´ ê´?ë¦?

![image-20200908161502883](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908161502883.png)



- ?™?  ?• ?‹¹ ë©”ëª¨ë¦?

  - new

    - ?™? ?œ¼ë¡? ?™?— ë©”ëª¨ë¦¬ë?? ?• ?‹¹

  - delete

    - ?™? ?œ¼ë¡? ?™?— ?• ?‹¹?œ ë©”ëª¨ë¦¬ë?? ?šŒ?ˆ˜( ? •? ?°?´?„°?Š” ë¶ˆê???Š¥ )
    - ?ŒŒê´´ìê°? ?˜¸ì¶? ?Œ
    - ?™?  ë©”ëª¨ë¦¬ë?? ?šŒ?ˆ˜ ?•˜ì§??•Š?œ¼ë©? ê°?ë¹„ì??(garbage) ì¦ê?? -- ë©”ëª¨ë¦? ?ˆ„?ˆ˜
    - ?”œë¦¬íŠ¸ ?•˜ê¸°ì „?—” NULLê²??‚¬ë¥? ?•­?ƒ?•˜ê³? ?¬?¸?„° ?„ ?–¸?‹œ?—?„ NULLë¡? ì´ˆê¸°?™” ?•­?ƒ?•˜ê¸?

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

    delete p; //?‹¨?¼ ?°?´?„° ?‚­? œ



???				int *p = new int[5] {0,1,2,3,4};

???				delete[] p; // ë°°ì—´ ?°?´?„° ?‚­? œ

##### ex03_new_delete.cpp

```c++
#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[]){
    int *ptr;

    srand(time(NULL));
    /*
    ptr??? ?• ?‹¹?œ ?™?  ë©”ëª¨ë¦¬ì˜ ?‹œ?‘ì£¼ì†Œ,
    ?”°?¼?„œ ptr??? ì²? ë²ˆì§¸ ?—˜ë¦¬ë¨¼?Š¸(ptr[0])?— ????•œ ?¬?¸?„°
    *ptr??? ptr[0]ê³? ê°™ìŒ
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

```ê²°ê³¼
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
    //ptr?— ????¥?œ ì£¼ì†Œê°? ê°?ë¥´í‚¤?Š” ê°’ì— 99ë¥? ?„£?–´?¼

    
    //ptr = 99; ì£¼ì†Œê°’ì— 99ë¥? ?„£?–´?¼
    
    return 0;
}
```

```ê²°ê³¼
new int?˜ ?™?— ë°°ì •?œ ê³µê°„?´ ?‚­? œ?˜ì§??•Šê³? ê³„ì† ?‚¨?Š”?‹¤
```

- ?Š¤ë§ˆíŠ¸ ?¬?¸?„°

  - ?¬?¸?„°?˜ ?™?  ë©”ëª¨ë¦? ?šŒ?ˆ˜ë¥? ??™?œ¼ë¡? ì²˜ë¦¬?•´ì¤?

    - ?¬?¸?„° ë³??ˆ˜ê°? ? œê±°ë  ?•Œ ??™?œ¼ë¡? delete ?˜¸ì¶?
  - ?¬?¸?„°ë³??ˆ˜ê°? ?Š¤?ƒ?—?„œ ?‚¬?¼ì§ˆë•Œ ??™?œ¼ë¡?  delete ?˜¸ì¶?
  
- #include <memory> ì¶”ê?? ?›„ ?‚¬?š©
  
- unique_ptr
  
  - ?¬?¸?„°?— ????•´ ?˜¤ì§? ?•˜?‚˜?˜ ?†Œ?œ ?ë§? ?—ˆ?š©
  
- -
  
  unique_ptr<int[]> buf(new int[10]);
  
  
  
- shared_ptr
  
    - ì°¸ì¡° ?šŸ?ˆ˜ê°? ê³„ì‚°?˜?Š” ?Š¤ë§ˆíŠ¸ ?¬?¸?„°



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

```ê²°ê³¼
0 1 2 3 4 5 6 7 8 9 
```



- ê°ì²´?˜ ?™?  ?ƒ?„±

  - ê°ì²´?— ????•´?„œ?„ ?™?¼?•œ ?›ì¹? ? •?š•

  - ë©¤ë²„ ? ‘ê·¼ì— ????•œ ?‘œ?˜„?´ ?‹¤ë¦?

    - ?¬?¸?„°_ë³??ˆ˜ -> ë©¤ë²„

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
        cout << "Dog ?ƒ?„±? ?˜¸ì¶?" << endl;
        age = 1;
        name = "ë°”ë‘‘?´";
    }
    ~Dog(){
        cout << "Dog ?†Œë©¸ì ?˜¸ì¶?" << endl;
    }
};

int main(int argc, char const *argv[]){
    Dog *pDog = new Dog;
    delete pDog;
    
    return 0;
}
```

```ê²°ê³¼
Dog ?ƒ?„±? ?˜¸ì¶?
Dog ?†Œë©¸ì ?˜¸ì¶?
```

- ?¬?¸?„°ë¡? ê°ì²´ ë©¤ë²„ ? ‘ê·¼í•˜ê¸?

  - -

    (*pDog).getAge();

    pDog->getAge(); // ?¬?¸?„°ë¡? ë©¤ë²„ ? ‘ê·¼í•  ?•Œ ->?‚¬?š©

##### ex07_pointer.cpp - ?¬?¸?„°ë¡? ê°ì²´ ë©¤ë²„ ? ‘ê·¼í•˜ê¸?

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
        name = "ë°”ë‘‘?´";
    }
    ~Dog(){}

    int getAge() {return age;}
    void setAge(int a){ age = a; }
};

int main(int argc, char const *argv[]){
    Dog *pDog = new Dog;
    
    cout << "ê°•ì•„ì§??˜ ?‚˜?´: " << pDog->getAge() << endl;
    
    pDog->setAge(3);
    cout << "ê°•ì•„ì§??˜ ?‚˜?´ : " << pDog->getAge() << endl;

    delete pDog;
    
    return 0;
}
```

```ê²°ê³¼
ê°•ì•„ì§??˜ ?‚˜?´: 1
ê°•ì•„ì§??˜ ?‚˜?´ : 3
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
    cout << sizeof(pDog) << endl;// pDog ?¬?¸?„° ë³??ˆ˜?˜ ?¬ê¸? = 8 (?¬?¸?„°ë³??ˆ˜?Š” 8?˜ ?¬ê¸°ë?? ê°?ì§„ë‹¤)
    cout << sizeof(*pDog) << endl;// pDogê°? ?¬?¸?Š¸?•˜?Š” ?¸?Š¤?„´?Š¤?˜ ?¬ê¸?
    // ?¬?¸?„°ë³??ˆ˜ê°? ?‘ê°œë¼?„œ 16
    cout << "ê°•ì•„ì§??˜ ?‚˜?´ : " <<pDog->getAge() << endl;
    
    pDog->setAge(3);
    cout << "ê°•ì•„ì§??˜ ?‚˜?´ : " << pDog->getAge() <<endl;

    delete pDog;
    return 0;
}
```

```ê²°ê³¼
8
16
ê°•ì•„ì§??˜ ?‚˜?´ : 1
ê°•ì•„ì§??˜ ?‚˜?´ : 3
```



- ##### this ?¬?¸?„° 

  - ëª¨ë“  ê°ì²´ê°? ê°?ì§??Š” ë©¤ë²„ ë³??ˆ˜
  - ??‹ (?¸?Š¤?„´?Š¤?—)?— ????•œ ?¬?¸?„° ë³??ˆ˜
  - ë©¤ë²„ ë³??ˆ˜??? ë§¤ê°œ ë³??ˆ˜?˜ ?´ë¦„ì´ ê°™ì?? ê²½ìš° ë©¤ë²„ ë³??ˆ˜ë¥? ì§?ì¹??•˜ê¸? ?œ„?•´ ?‚¬?š©
  - ?¬?¸?„°ë³??ˆ˜?¼?„œ -> ë¥? ?‚¬?š©?•´?•¼?•¨ . ?•„?‹˜

##### ex09_this.cpp - this ?¬?¸?„°

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
    cout << "?‚¬ê°í˜•?˜ ê¸¸ì´ : " << rect.getLength() << endl;
    cout << "?‚¬ê°í˜•?˜ ?„ˆë¹? : " << rect.getWidth() << endl;

    rect.setLength(20);
    rect.setWidth(10);

    cout << "?‚¬ê°í˜•?˜ ê¸¸ì´ : " << rect.getLength() << endl;
    cout << "?‚¬ê°í˜•?˜ ?„ˆë¹? : " << rect.getWidth() << endl;

    return 0;
}
```

```ê²°ê³¼
?‚¬ê°í˜•?˜ ê¸¸ì´ : 30
?‚¬ê°í˜•?˜ ?„ˆë¹? : 40
?‚¬ê°í˜•?˜ ê¸¸ì´ : 20
?‚¬ê°í˜•?˜ ?„ˆë¹? : 10
```



- ##### const ?¬?¸?„°

  - const int *p1; // ?ƒ?ˆ˜?— ????•œ ?¬?¸?„°. ê°’ì´ ?ƒ?ˆ˜?„, ê°’ì„ ë°”ê?? ?ˆ˜ ?—†?Œ
  - int * const p2;// ?¬?¸?„°ê°? ?ƒ?ˆ˜?„, ?‹¤ë¥? ì£¼ì†Œë¡? ë°”ê?? ?ˆ˜ ?—†?Œ
  - const int * const p3; // ?¬ë¦°í„°??? ê°? ëª¨ë‘ ?ƒ?ˆ˜

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
//?´ê²½ìš° test??? pstr??? ë°›ì„?ˆ˜?ˆ?‹¤
//?•˜ì§?ë§? str??? ë°›ì??ëª»í•œ?‹¤

int main(int argc, char const *argv[]){
    char test[] = "Hello"; //ë¬¸ì?—´ë°°ì—´
    char *pstr = "c++"; //ë¬¸ì?—´ ë³´ì¸?„°
    string str = "World"; //string ê°ì²´

 

    print(test);
    print(pstr);
    print(str);
    print(str.c_str());

    //print(str.c_str()); ?•„?‘?´?…¸?—?„œ ?‚¬?š©?•˜ê²Œë ê²?
    //string ?´?˜?Š¤ë¥? ì§??›?•˜ì§??•Š?˜ ?˜œ?‚  c?–¸?–´ ?†Œ?¬?˜ ?¼?´ë¸ŒëŸ¬ë¦¬ë??
    //?‚¬?š©?• ?•Œ str.c_str()?„ ?‚¬?š©?•˜?—¬ stringê°ì²´ë¥? char *ë¡œì¨ ë¦¬í„´?‹œ?‚¨?‹¤
    //const char *?„ ë¦¬í„´?•¨ constë¥? ?‚¬?š©?•´?„œ ?½?„?ˆœ?ˆì§?ë§? ë³?ê²½ì„ ?•˜ì§?ëª»í•˜ê²?
    //ë§Œë“œ?Š”ê²ƒì„


    return 0;
}
```

```ê²°ê³¼
Hello
c++
World
Hello
c++
World
World
```


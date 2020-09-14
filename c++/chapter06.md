# 객체배열

- 객체를 요소로 가지는 배열

  - 클래스명 배열-이름 [배열_크기];

  

![image-20200908130254955](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908130254955.png)

##### ex01_object_array.cpp

```c++
#include <iostream>
using namespace std;

class Circle{
public:
    int x, y;
    int radius;

    Circle(): x(0), y(0), radius(0){}
    Circle(int x, int y, int r): x(x), y(y), radius(r){}

    void print(){
        cout << "반지름: " << radius << "@(" << x << "," <<y<< ")" <<endl;
    }
};

int main(int argc, char const *argv[]){
    Circle objArray[10]; // 10개의 요소가 디폴트 생성자에 의해 생성

    for(Circle c : objArray){ // 초기화가 어떻게 됐는지 확인
        c.print();
    }
    for(Circle& c : objArray){
        c.x = rand()%500; // 0<=500
        c.y = rand()%300; // 0<=300
        c.radius = rand()%100; // 0<=100
    }

    for(Circle c : objArray){
        c.print();
    }
    cout << "----------------------"<< endl;
    cout << "Circle memory size : "<< sizeof(Circle) << endl;
    cout << "array length :" << sizeof(objArray) / sizeof(Circle) <<endl;

    return 0;
}
```

```결과
반지름: 0@(0,0)
반지름: 0@(0,0)
반지름: 0@(0,0)
반지름: 0@(0,0)
반지름: 0@(0,0)
반지름: 0@(0,0)
반지름: 0@(0,0)
반지름: 0@(0,0)
반지름: 0@(0,0)
반지름: 0@(0,0)
반지름: 34@(41,167)
반지름: 24@(0,269)
반지름: 62@(478,258)
반지름: 45@(464,5)
반지름: 61@(281,27)
반지름: 42@(491,295)
반지름: 91@(327,36)
반지름: 53@(104,2)
반지름: 21@(292,82)
반지름: 95@(216,218)
----------------------
Circle memory size : 12
array length :10
```

- 객체 배열의 초기화

![image-20200908131548773](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908131548773.png)

- 벡터
  - 배열의 크기가 고정되어 있는 단점이 있음
  - 백터는 동적으로 크기를 자동 조정
  - #include <vector>



![image-20200908131632658](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908131632658.png)

- 벡터의 기초

![image-20200908131653173](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908131653173.png)

##### ![image-20200908131708928](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908131708928.png)ex02_vector.cpp

```c++
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    vector<int> fibo = {0,1,2,3,4,5,6,7,8,9,89};
    //데이터의 건수가 동적으로 변할떄 배열대신 백터를 많이씀

    for(auto& number : fibo){
        cout << number<< ' ';
    }

    /*
    for (int i=0; i<fibonacci.size(); i++){
        cout << fibonacci[i] << ' ';
    }
    */

    cout << endl;


    return 0;
}
```

```결과
0 1 2 3 4 5 6 7 8 9 89 
```



- ##### push_back()과 pop_back()

![image-20200908141253250](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200908141253250.png)

##### ex03_vector_op

```c++
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for(auto& e: v){
        cout << e << ' ';
    }
    cout << endl;

    cout << "size : " << v.size() << endl;
    cout << "capacity : " <<v.capacity() << endl;
    return 0;
}
```

```결과
10 20 30 40 50 
size : 5
capacity : 8
```

##### ex04_vector_or2

```c++
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    vector<int> v;
    for(int i=0; i<10; i++){
        v.push_back(i);
    }
    for(auto& e: v){
        cout <<e << ' ';
    }
    cout << "삭제" << endl;
    while(v.empty() != true){
        cout << v.back() <<" ";
        v.pop_back();
    }
    
    cout << "size : " <<v.size()<<endl;
    cout << "capacity : " << v.capacity() << endl;

    return 0;
}
```

```결과
0 1 2 3 4 5 6 7 8 9 삭제
9 8 7 6 5 4 3 2 1 0 size : 0
capacity : 16
```





##### ex06_object_save.cpp - 객체의 저장

```c++
#include <iostream>
#include <vector>
using namespace std;

class Circle{
public:
    int x, y;
    int radius;

    Circle(): x(0), y(0), radius(0){}
    Circle(int x, int y, int r): x(x), y(y), radius(r){}

    void print(){
        cout << "반지름: " << radius << "@(" << x << "," <<y<< ")" <<endl;
    }
};

int main(int argc, char const *argv[]){
    vector<Circle> objArray;

for(int i=0; i<10; i++){
    Circle obj{rand()%300, rand()%300, rand()%100};
    objArray.push_back(obj);
}
    for(auto &c : objArray){
        c.print();
    }
    return 0;
}
```

```결과
반지름: 34@(41,167)
반지름: 24@(100,269)
반지름: 62@(78,258)
반지름: 45@(164,5)
반지름: 61@(181,27)
반지름: 42@(191,295)
반지름: 91@(27,36)
반지름: 53@(204,2)
반지름: 21@(292,82)
반지름: 95@(116,218)
```


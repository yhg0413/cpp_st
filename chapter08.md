# chapter08 복사생성자와 정적멤버

- 객체를 함수로 전달하기
  - 함수 호출시 객체를 매개변수로 전달하면 객체의 복사가 일어남

![image-20200909151650096](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200909151650096.png)

- 
  - 함수 호출시 객체의 주소를 전달하면 객체의 복사가 일어나지 않음

![image-20200909151940479](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200909151940479.png)

- 
  - 효과는 포인터를 넘기는 것과 동일하나 포인터 보다 가독성이 좋아짐

![image-20200909152009667](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200909152009667.png)



- 함수가 객체를 반환
  - 객체를 함수의 매개변수로 전달할 때와 같이 객체의 복사가 일어남

![image-20200909152042862](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200909152042862.png)

- 복사 생성자가 사용되는 시점
  - 함수의 매개변수로 객체를 전달할 때
  - 객체를 대입할 때

![image-20200909152114507](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200909152114507.png)

- 복사 생성자 

- ex 

  ```c++
  MyClass t1;
  MyClass t2 = t1;
  ```

  

  ```c++
  MyClass(const Myclass & other){//모양 고정 복사생성자는 이처럼 써야함 무조건
      // 객체 초기화
  }
  ```

  - MyClass(MyClass other)로 하면 무한 루프 발생 하므로 주의
  - 복사 생성자를 정의하지 않으면 자동으로 추가
    - 멤버 변수에 대한 얕은 복사 진행
    - 얕은복사는 멤버를 참조하는게 아니라 멤버를 복사를 함
  - 깊은 복사가 필요한 경우 복사 생성자 정의 필요

  

  - 얕은 복사와 깊은 복사
  - 깊은복사는 포인터변수를 복사했을때 그 포인터변수가 가르키는 값까지 복사함

  ![image-20200909152654166](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200909152654166.png)

### ex01_copy.cpp - 디폴트 복사 생성자

```c++
#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    int age;
    Person(int a) : age(a){}
};
int main(int argc, char const *argv[]){
    Person kim{21}; 
    Person clone{kim};  // 복사 생성자 호출
    cout << "kim의 나이: " << kim.age << " clone의 나이: " << clone.age << endl; kim.age = 23;
    cout << "kim의 나이: " << kim.age << " clone의 나이: " << clone.age << endl;
    return 0;


}
```

```결과
kim의 나이: 21 clone의 나이: 21
kim의 나이: 23 clone의 나이: 21
```

### ex02_copy.cpp - 얕은 복사의 문제점

```c++
#include <iostream>
#include <string>
using namespace std;

class MyArray{
    public :
    int size;
    int *data;
    
    MyArray(int size){
        this->size = size;
        data = new int[size];
    }
    ~MyArray(){
        if(data != NULL){
            delete []data;
        }
    }
};

int main(int argc, char const *argv[]){
    MyArray buffer(10);
    buffer.data[0] = 1;
    {
        MyArray clone = buffer; //복사 생성자 호출
    } // 블럭이 끝날때 파괴자 호출 clone 삭제
    // buffer의 data까지 삭제됌
    // 하지만 실행했을떄는 오류가 나지않음
    buffer.data[1] =2;
    cout << buffer.data[0] << endl; // data가 삭제되어서 값이 제대로 안나옴

    return 0;
}
```

- 얕은 복사의 문제점
  - MyArray clone = buffer; // 복사생성자 호출

![image-20200909162205698](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200909162205698.png)

![image-20200909162221372](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200909162221372.png)









#### ex03_deepcopy.cpp - 깊은복사

```c++
#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>
using namespace std;

class MyArray{
    public :
    int size;
    int *data;
    
    MyArray(int size){
        this->size = size;
        data = new int[size];
    }
    ~MyArray(){
        if(data != NULL){
            delete []data;
        }
    }
    MyArray(const MyArray& other){
        size = other.size;
        data = new int[other.size];
        for(int i = 0; i<size; i++){
            data[i] = other.data[i]; //복사생성자 호출
        }
    }
};

int main(int argc, char const *argv[]){
    MyArray buffer(10);
    buffer.data[0] = 1;
    {
        MyArray clone = buffer; //복사 생성자 호출
    } // 블럭이 끝날때 파괴자 호출 clone 삭제
    //깊은 복사가 일어나 buffer 객체에는 영향을 주지 않음
    buffer.data[1] =2;
    cout << buffer.data[0] << endl;
	//따라서 data[0]의 값도 잘 출력 됌
    return 0;
}
```

```r결과
1
```

- 깊은 복사

![image-20200909162014593](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200909162014593.png)

- 깊은복사

![image-20200909162301353](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200909162301353.png)

# 복사 생성자가 필요한 경우

- 포인터변수멤버가 포함된 객체를 복사할경우 필요하다.
- 클래스에 멤버변수에 포인터가 있고 그 포인터가 동적메모리에 직접 할당하고 직접 삭제하는 경우에 필요하다
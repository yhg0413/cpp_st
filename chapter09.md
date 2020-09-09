# chapter09 상속

- 상속의 필요성
  - 코드 중복

![image-20200909170934291](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200909170934291.png)

추상화 = 부모클래스를 정의하는 것

- 상속의 계층 구조도

![image-20200909171016305](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200909171016305.png)

클래스 : 접근 제한자 부모 클래스  - > :이 상속을 나타냄

접근제한자가 public = 부모클래스에 정의한걸 그대로 사용

private 경우 부모클래스에 정한것을 무시하고 전부 private형태

![image-20200909171210726](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200909171210726.png)





- 상속자에서 생성자, 소멸자

생성자는 1개이상 무조건있고 소멸자는 무조건 1개

호출은 자식클래스에서 호출되지만 초기화는 부모클래스가 먼저 초기화되고

그다음 자식을 초기화함 호출만 자식에서 하는것 먼저는 부모클래스에서함

![image-20200909172432716](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200909172432716.png)

- 부모 클래스의 생성자 지정하는 방법

자식클래스의 생성자() : 멤버 초기화 리스트, 부모클래스의 생성자()

{

}

ex class tax() : speed(10), size(2), car(){

}

![image-20200909172623408](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200909172623408.png)

#### ex01_inherit.cpp - 부모클래스의 생성자를 지정하는 방법

```c++
#include <iostream>
#include <string>
using namespace std;

class Shape{
    int x, y;
public:
    // Shape() : object() 호출문을 부름 자동
    // 모든 클래스의 부모는 object()
    Shape(){
        cout << "Shape() 생성자" << endl;
    }
    /*디폴트생성자를 없앨경우
        자식클래스에서 자동호출을 하지못함
        자동호출은 클래스명() 으로 호출하기때문에 에러남
        디폴트생성자가 꼭 있어야함
        아니면 항상 자식클래스에 상속받아야함
    */
    Shape(int xloc, int yloc) : x(xloc), y(yloc){
        cout << "Shape(xloc, yloc) 생성자" << endl;
    }
    ~Shape(){
       cout << "~Shape() 소멸자" << endl; 
    }
};

class Rectangle : public Shape{
    int width, height;

public:
    //지정을 안할시 디폴드로 
    //Rectangle() : Shape() 로 실행됌
    Rectangle(){
        cout << "Rectangle() 생성자" << endl;
    }
    Rectangle(int x, int y, int w, int h):Shape(x, y), width(w), height(h){
        cout << "Rectangle(x, y, w, h) 생성자" << endl;
    }
    ~Rectangle(){
        cout << "~Rectangle() 소멸자" <<endl;
    }
};

int main(int argc, char const *argv[]){
    Rectangle r1;
    cout << endl;
    Rectangle r2(0, 0, 100, 100);
    cout << endl;
    return 0;
}
```

```결과
Shape() 생성자
Rectangle() 생성자

Shape(xloc, yloc) 생성자
Rectangle(x, y, w, h) 생성자

~Rectangle() 소멸자
~Shape() 소멸자
~Rectangle() 소멸자
~Shape() 소멸자
```


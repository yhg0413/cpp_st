# 객체와 함수

- ##### 객체와 함수의 관계

  - 객체가 함수의 매개 변수로 전달되는 경우
  - 객체의 참조자가 함수의 매개 변수로 전달되는 경우
  - 함수가 객체를 반환하는 경우

- ##### 객체가 함수의 매개변수로 전달되는 경우

  - 함수의 인수는 기본적으로 값에 의해 매개 변수로 전달
    - 객체일 때도 마찬가지 --> 객체가 복사됨

- 객체의 참조자가 함수의 매개 변수로 전달되는 경우

  - 객체를 복사하지 않고, 원본 복사에 새로운 이름을 부여하고 그 이름으로 접근
  - int i;
  - int& j = i; // i에 대한 참조자(새로운 이름) 정의

##### ex05_param.cpp

```c++
#include <iostream>
using namespace std;

class Pizza{
public:
    int size;
    Pizza(int s) : size(s){}
};

void makeDouble(Pizza p){ //call by value
    p.size *=2;
}
/* //이거로 사용시 원본이 바뀌기떄문에 결과는 20이 나옴 
void makeDouble(Pizza& p){ //call by reference
    p.size *=2;
}
*/

int main(int argc, char const *argv[]){
    Pizza pizza(10);
    makeDouble(pizza);

    cout << pizza.size << "인치 피자" << endl;
    return 0;
}
```

```결과
10인치 피자
```

- 함수가 객체를 반환하는 경우
  - 객체의 내용이 복사될 뿐 원본이 전달되지 않음

##### ex07_objcet_return.cpp

```c++
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

class Pizza{
public:
    int size;
    Pizza(int s) : size(s){}
};

Pizza makePizza(){ //call by value
    Pizza p(10);
    return p;
}

int main(int argc, char const *argv[]){
    Pizza pizza = makePizza();//샐성자를 불러 초기화하지않고 makePizz()를 통해 초기화함

    cout << pizza.size << "인치 피자" << endl;
    return 0;
}
```

```결과
10인치 피자
```


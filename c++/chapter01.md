

## charter01

```c++
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    cout << "Hello World" << endl;
    // std::cout << "Hello World" << std ::end1;
    return 0;
}
```

#### -프로그램 구조

1. main 함수
   - 프로그램의 진입점(entry point)
2. #include
   - 외부 프로그램 소스를 포합시키는 매크로
3. iostream
   - 입출력 관련 기본 라이브러리
   - std 네임스페이스를 정의
4.  ::
   - 스코프 연산자
   - 어디에 정의되어 있는지 지정할 때 사용
5.  using namespace
   - 네임스페이스 생략을 위해 지정
   - std::cout --> cout
6.  cout 
   - print 함수 와 동일
7.  << 연산자
   - 변수 << 데이타 왼쪽에 전송할 데이터를 오른쪽에 입력하여 전송
8.  //
   - // 주석 처리 한줄을 주석 처리함

#### ex02_cout.cpp

```c++
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout <<10;
    cout << "개의 사과가 있습니다" << endl;

    cout << endl;
    
    cout << 10 << "개의 사과가 있습니다" << endl;

    return 0;
}
```

```ex02_cout.cpp
10개의 사과가 있습니다
10개의 사과가 있습니다.
```

#### 변수와 자료형

#####  - 변수

	- 변수를 사용하기 위해서즌 먼저 선언을 하고 사용 해야 함
 - 해당 변수의 데이터 타입을 지정
   	- 한 번 지정하면 다른 데이터 타입은 사용 불가
- 데이터_타입 변수명 [=초기값];

```c++
int i; //선언
i = 100; //초기값 100;(초기화)

int i = 100; //선언과 동시에 초기화

int i {100}
```

##### ex03_variable.cpp

```c++
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
    int i;
    i = 1000;
    //int i =1000;
    //int i {1000}

    cout << i << endl;

    string s { "hello" }; //string s = "hello" 와 동일
    cout << s << endl;
    return 0;
}
```

```ex03_variable.cpp
1000
hello
```







#####  - 기본자료형

###### 정수형

 	- short : 2바이트수 정수
 	- int : 4바이트수 정수
 	- long : long형 정수
 	- long long : 8바이트형 정수

###### 문자형 및 부울형

	- char 문자 및 정수 1바이트
	- bool : 참이나 거짓을 나타냄 1바이트

###### 부동소수점형(실수헝)

	- float : 단일정밀도 부동소수점(실수헝) : 4바이트 실수형
	- double : 두배정밀도 부동소수점 8바이트
	- long double : 두배정밀도 부동소수점 8바이트

###### string 기본변수가 아님 원래는 배열을 이용해만들어야 하지만 string class 가 존재 이를 이용 편하게 만듬

#### - boolean 

 - true/false 만 가질 수 있는 타입
   	- true - 0이 아닌 모든 값, 일반적으로 1로 표현
   	- false - 0(무조건 숫자 0만 false)

##### ex04_boolean.cpp

```c++
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    bool b;
    b = true;

    cout << b;
    return 0;
}
```

`<1(true) or  0 (false)>`

##### - char

	- 글자 하나를 저장하는 데이터 타입
	- 작은 따옴표로 묶어서 글자 표현

##### ex05_char.cpp

```c++
#include <iostream>

using namespace std;

int main(int argc, char const*argv[])
{
    char ch;
    ch = 'a';

    cout << ch;
    return 0;
}
```

```ex05_char.cpp
a
```

##### - string

	- 문자열을 저장하는 데이터 타입(객체)
	- `+ 연산자로 문자열 결합 가능
	- == 로 내용 비교 가능

```c++
string s1 = "Good";
string s2 = "Morning";
string s3 = s1 + " " + s2 + "1";
```

##### ex06_string.cpp

```c++
#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *argv[]){
    string s1 = "Good";
    string s2 = "Mornig";
   
    string s3 = s1 + " " + s2 + "!";
    cout << s3 << endl;

    string s4 = "Good";
    string s5 = "Bad";
    bool b = (s4 == s5);
    cout << b << endl;

    return 0;
}
```



```c++
Good Mornig!
0
```



##### - const

	- 기호 상수 정의
	- 한 번 초기화 되면 수정 불가
	- 관례상 대문자로  이름 지정

##### ex07_const.cpp

```c++
#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[]){
    const double TAX_RATE = 0.25;
    int income = 100;
    // TAX_RATE = 0.3; --에러
    income = income - TAX_RATE * income;
    cout << income << endl;
    return 0;
}
```

```ex07_const.cpp
75
```

###### 

##### - auto

	-  컴파일러가 문맥을 보고 자동으로 데이터 타입을 결정

##### ex08_auto.cpp

```c++
#include <iostream>
#include <string>
using namespace std;

auto add(int x, int y){
    return x + y;
}

int main(int argc, char const *argv[]){
    auto d = 1.0; //값을 보고 double 탕비이 됨
    auto sum = add(5,10);

    cout << d << " " <<sum << endl;
    return 0;
}
```

```ex08_auto.cpp
1, 15
```

##### - cout

	- 콘솔에 대한 출력 객체
	- << 연산자를 통해 값을 출력
	- 연속 사용 가능

```ex09_cout

```



##### - cin

	- 콘솔로 부터 값을 입력 받는 객체
	- 변수의 데이터 타입에 따라 자동 형 변환

##### ex10_cin.cpp

```c++
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
    int i;
    cin >> i;

    double f;
    cin >> f;

    cout << i << " " << f << endl;
    return 0;
}
```

출력결과

```ex10_cin.cpp
10
20.3
10 20.3
```

##### ex11_cin.cpp

```c++
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
    string name;
    cout << "이름을 입력하세요 : ";
    cin >> name;
    cout << name << "을 환영합니다.";
    return 0;
}
```

```ex11_cin.cpp
이름을 입력하세요 : 양희건
양희건을 환영합니다.
```



##### - 연산자

	- x + y 	: 	x와 y를 더한다
	- x - y      :     x와 y를 뺀다
	- x * y    :    x 와 y를 곱한다
	- x / y     :     x에 y를 나눈다 단 결과는 사용한 데이터 자료형에 따라 다름
	- x % y     :    x에 y를 나눈 나머지를 구한다



##### ex12_op.cpp

```c++
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    int x = 100;
    int y = 200;

    int result = x + y;
    cout << "x + y : "<< result << endl;
    cout << "x - y : " << x - y << endl;
    cout << "x / y : " << x / y << endl;
    cout << "x % y : " << x % y << endl;

    cout << 1/2 << endl; // 정수 /정수 --> 정수(몫)
    cout << 1/2. << endl; // 정수/실수 -> 실수
    return 0;
}
```

```ex12_op.cpp
x + y : 300
x - y : -100
x / y : 0
x % y : 100
0
0.5
```



##### - 연산자

	- ++ : 현재 값에서 1 증가
	- -- : 현재 값에서 1 감소

```c++
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
    int x = 100;
    x++; // x 는 11
    cout << x << endl;

    x--;

    cout << x << endl;

    cout << ++x<< endl;
    cout << x++ << endl;
    cout << x << endl;
    cout << --x << endl;
    cout << x-- << endl;
    cout << x << endl;
    return 0;
}
```

```ex13_incdec.cpp
101
100
101
101
102
101
101
100
```


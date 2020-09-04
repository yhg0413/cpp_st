# chapter02

설정 -> 코드조각 -> 사용할 언어

코드 새로열기할때마다 쓰기귀찮은것들 써둘수있음

#### -관계 연산자

	- x == y -> x와 y가 같은가?
	- x  != y -> x와 y가 다른가?
	- x > y -> x가 y보다 큰가?
	- x < y -> x가 y보다 작은가?
	- x >= y -> x가 y보다 크거나 같은가?
	- x <= y -> x가 y보다 작거나 같은가?
	- 결과는 boolaen 자료형으로 True or False



##### ex01_rel.cpp

```c++
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    bool b;

    b = (1 == 2);

    cout << std::boolalpha; //부울린을 true,false로 출력 스코프연산자
    //std는:: 샐략가능
    //부울린타입이 원래는 1 또는 0으로 출력되는데 boolalpha를 사용함으로써
    //true 또는 false로 출력이됌
    cout << b << endl;

    return 0;
}
```

```ex01_rel.cpp
false
```

##### ex02_rel.cpp

```c++
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    bool b;
    int x = 3;
    int y = 3;
    cout << std:: boolalpha; //부울린을 true, false로 출력

    b = (x == 3 ) && (y==3);
    cout << b << endl;

    y = 2;
    b = (x==3) && (y==3);
    cout << b << endl;

    b = (x == 3) || (y==3); cout << b << endl;

    x = 2; b = (x == 3) || (y==3); cout << b << endl;

    b = !(x==3); cout << b << endl;

    return 0;
}
```

```ex02_rel.cpp
true
false
true
false
true
```



##### - 논리 연산자

	- x && y : and 연산, x와 y가 모두 참이면 참
	- x || y :  or연산, x나 y중에서 하남나 참이면 참
	- !x : NOT연산 x가 참이면 거짓,x가 거짓이면 참



##### - if ~ else 문

![image-20200904143400516](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200904143400516.png)



##### ex03_if.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int x = 100;

    if(x == 100){
        cout << "x가 100입니다." <<endl;
    }
    if(x == 100){
        cout << "x의 값을 출력합니다." << endl;
        cout << "x가 100입니다." << endl;
    }
    return 0;
}
```

```ex03_if.cpp
x가 100입니다.
x의 값을 출력합니다.
x가 100입니다.
```

##### ex04_if_else.cpp

```c++
#include <iostream>
using namespace std;


int main(int argc, char const *argv[]){
    int x = 120;

    if (x == 100){
        cout << "x가 100입니다." << endl;
    }
    else{
        cout << "x가 100이 아닙니다" << endl;
    }
}
```

```ex04_if_else.cpp
x가 100이 아닙니다
```

##### ex05_if_else.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int x, y;

    cout << "x값을 입력하세요 ";
    cin >> x;
    cout << "y값을 입력하세요";
    cin >> y;

    if(x > y){
        cout << "x가 y보다 큽니다." <<endl;
    }
    else{
        cout << "y가 x보다 크거나 같습니다." << endl;
    }
    
    return 0;
}
```

출력결과

```ex05_if_else.cpp
x값을 입력하세요 20
y값을 입력하세요30
y가 x보다 크거나 같습니다.
```

##### - 다중 if  ~ else 문

![image-20200904150421298](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200904150421298.png)

##### ex06_multi_if.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int x, y;
    cout << "input x : ";
    cin >> x;

    cout << "inpyt y : ";
    cin >> y;

    if(x > y){
        cout << "x > y" <<endl; 
    }
    else if (x < y){
         cout << "x < y" << endl;
    }
    else
    {
        cout << "x == y" <<endl;
    }
    
    return 0;
}
```

```ex06_multi_if.cpp
input x : 100
inpyt y : 200
x < y
```



##### - switch 문

##### ex07_switch.cpp

```cpp
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int number;

    cout << "input number : ";
    cin >> number;

    switch(number){
        case 0:
        cout <<"zero\n";
        break;

        case 1:
        cout <<"one\n";
        break;
        
        case 2:
        cout <<"two\n";
        break;
        
        default:
        cout <<"many\n";
        break;
    }
    return 0;
}
```

결과

```ex07_switch.cpp
input number : 0
zero
input number : 1
one
input number : 3
many
```

##### ex08_switch.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int number;

    cout << "input number : ";
    cin >> number;

    switch(number){
        case 0:
        cout <<"zero\n";
        
        case 1:
        cout <<"one\n";

        case 2:
        cout <<"two\n";

        default:
        cout <<"many\n";
        break;
    }
    return 0;
}
```

```ex08_switch.cpp
input number : 0
zero
one
two
many
```



##### - 반복문

	- while 루프 : 조건이 참일 동안 반복



##### ex09_while.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n = 10;
    while(n>0){
        cout << n << " ";
        n--;
    }
    cout << "fire!" << endl;
    return 0;
}
```

결과

```ex09_while.cpp
10 9 8 7 6 5 4 3 2 1 fire!
```

##### ex10_while.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n;
    int i = 1;
    
    cout << "구구단 중에서 출력하고싶은 단을 입력하세요 : ";
    cin >> n;

    while( i <= 9){
        cout << n << " * " << i << " = " << n*i << endl;
        i++;
    }
    return 0;
}
```

결과

```ex10_while.cpp
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
```



##### do ~ while 루프

	- 조건이 참일 동안  반복

![image-20200904152705137](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200904152705137.png)

##### ex11_do_while.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    string str;

    do {
        cout<<"input string : ";
        getline(cin, str);

        cout << "input of user : " << str << endl;
    }while(str != "종료");
    
    return 0;
}
```

```ex11_do_while.cpp
input string : 안녕하세요
input of user : 안녕하세요
input string : 종료
input of user : 종료
```



##### - for 루프

	- 조건이 참일  동안 반복

![image-20200904154316220](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200904154316220.png)

##### ex12_for.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int sum = 0;
    for(int i =0; i<=10; i++){
        sum += i;
    }
    cout << "1부터 10까지 정수의 합 = " << sum << endl;
    return 0;
}
```

```ex10_for.cpp
1부터 10까지 정수의 합 = 55
```

##### 

##### ex13_for.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    long fact = 1;
    int n;

    cout << "정수를 입력하세요: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        fact = fact * i;
    }

    cout << n << "! = " <<fact << endl;
    return 0;
}
```

결과

```ex13_for.cpp
10! = 3628800
```

##### 

###### - break 문

	- break 문을 만난 순간 중괄호를 탈출함 

##### ex14_break.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    for(int i=1; i<10; i++){
        cout << i << " ";
        if(i==4) break;
    }
    return 0;
}
```

```ex14_break.cpp
1 2 3 4
```

######  - continue 문

	- continue를 만난 순간 반복문을 처음부터 시작

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    for(int i=1; i<5; i++){
        cout<< "continue 문장 전에 있는 문장" <<endl;
        continue;
        cout << "continue 문장 이후에 있는 문장 " << endl;
    }
    return 0;
}
```

```ex15_continue.cpp
continue 문장 전에 있는 문장
continue 문장 전에 있는 문장
continue 문장 전에 있는 문장
continue 문장 전에 있는 문장
```



#### - 배열(array)

	- 같은 종류의 데이터들이 순차적으로 메모리에 저장되는 자료 구조 (파이썬 리스트와 다른점)
	- 각각의 데이터(요소) 들은 인덱스(번호)를 사용하여 독립적으로 접근 가능
	- 대용량의 데이터를 동일한 이름으로 쉽게 저장하고 처리 가능
	- 배열의 크기는 한번 정해질시 바꾸지못함

![image-20200904161035126](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200904161035126.png)

##### ex16_array.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    const int STUDENTS = 10;

    int scores[STUDENTS];
    int sum = 0;
    int i, average;

    for(i=0; i<STUDENTS; i++){
        cout << "학생들의 성적을 입력하시요: ";
        cin >> scores[i];
    }
    for(i=0; i<STUDENTS; i++){
        sum += scores[i];
    }
    average = sum / STUDENTS;
    cout << "성적 평균 = " << average << endl;
    return 0;
}
```

결과

```ex16_array_cpp
학생들의 성적을 입력하시요: 10
학생들의 성적을 입력하시요: 20
학생들의 성적을 입력하시요: 30
학생들의 성적을 입력하시요: 40
학생들의 성적을 입력하시요: 50
학생들의 성적을 입력하시요: 60
학생들의 성적을 입력하시요: 70
학생들의 성적을 입력하시요: 80
학생들의 성적을 입력하시요: 90
학생들의 성적을 입력하시요: 10
성적 평균 = 46
```

##### - 배열의 초기화

![image-20200904161603853](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200904161603853.png)



![image-20200904161621947](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200904161621947.png)



##### ex17_array_init.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    const int STUDENTS = 5;
    int scores[STUDENTS] = {
        100,200,300,400,500
    };
    int sum = 0;
    int i, average;

    for(i=0; i<STUDENTS; i++){
        sum += scores[i];
    }
    average = sum / STUDENTS;
    cout << "성적 평균 = " <<average<<endl;
    return 0;
}
```

결과

```ex17_array_init.cpp
성적 평균 = 300
```



##### - 범위 기반 for 문

![image-20200904162004702](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200904162004702.png)

범위에는 배열 변수가 들어가야함



##### ex18_advanced_for.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int list[] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    for(int i : list){
        sum += i;
    }

    cout << sum << endl << endl;

    for(int& i : list){
        cout << i << " ";
    }

    cout << endl;
    for(auto& i : list){
        cout << i << " ";
    }

    return 0;
}
```

결과

```ex_adbanced_for.cpp
55

1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
```

int &변수 참조형 변수



##### 다차원 배열

![image-20200904163300968](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200904163300968.png)

![image-20200904163314985](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200904163314985.png)

##### ex19_muti_array.cpp

```c++
#include <iostream>
using namespace std;

#define WIDTH 9
#define HEIGHT 3

int main(int argc, char const *argv[]){
    int table[HEIGHT][WIDTH];
    int r, c;

    for(r = 0; r<HEIGHT; r++){
        for(c=0; c< WIDTH; c++){
            table[r][c] = (r+1)*(c+1);
        }
    }

    for(r = 0; r<HEIGHT; r++){
        for(c=0; c<WIDTH; c++){
            cout << table[r][c] << ", ";
        }
        cout << endl;
    }
    return 0;
}
```

결과

```ex19_muti_array.cpp
1, 2, 3, 4, 5, 6, 7, 8, 9, 
2, 4, 6, 8, 10, 12, 14, 16, 18, 
3, 6, 9, 12, 15, 18, 21, 24, 27,
```


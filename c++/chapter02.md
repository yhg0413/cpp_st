# chapter02

?��?�� -> 코드조각 -> ?��?��?�� ?��?��

코드 ?��로열기할?��마다 ?��기�??�????것들 ?��?��?��?��?��

#### -�?�? ?��?��?��

	- x == y -> x??? y�? 같�??�??
	- x  != y -> x??? y�? ?��른�???
	- x > y -> x�? y보다 ?���??
	- x < y -> x�? y보다 ?��???�??
	- x >= y -> x�? y보다 ?��거나 같�??�??
	- x <= y -> x�? y보다 ?��거나 같�??�??
	- 결과?�� boolaen ?��료형?���? True or False



##### ex01_rel.cpp

```c++
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    bool b;

    b = (1 == 2);

    cout << std::boolalpha; //�??��린을 true,false�? 출력 ?��코프?��?��?��
    //std?��:: ?��?���??��
    //�??��린�???��?�� ?��?��?�� 1 ?��?�� 0?���? 출력?��?��?�� boolalpha�? ?��?��?��?��로써
    //true ?��?�� false�? 출력?��?��
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
    cout << std:: boolalpha; //�??��린을 true, false�? 출력

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



##### - ?���? ?��?��?��

	- x && y : and ?��?��, x??? y�? 모두 참이�? �?
	- x || y :  or?��?��, x?�� y중에?�� ?��?��?�� 참이�? �?
	- !x : NOT?��?�� x�? 참이�? 거짓,x�? 거짓?���? �?



##### - if ~ else �?

![image-20200904143400516](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200904143400516.png)



##### ex03_if.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int x = 100;

    if(x == 100){
        cout << "x�? 100?��?��?��." <<endl;
    }
    if(x == 100){
        cout << "x?�� 값을 출력?��?��?��." << endl;
        cout << "x�? 100?��?��?��." << endl;
    }
    return 0;
}
```

```ex03_if.cpp
x�? 100?��?��?��.
x?�� 값을 출력?��?��?��.
x�? 100?��?��?��.
```

##### ex04_if_else.cpp

```c++
#include <iostream>
using namespace std;


int main(int argc, char const *argv[]){
    int x = 120;

    if (x == 100){
        cout << "x�? 100?��?��?��." << endl;
    }
    else{
        cout << "x�? 100?�� ?��?��?��?��" << endl;
    }
}
```

```ex04_if_else.cpp
x�? 100?�� ?��?��?��?��
```

##### ex05_if_else.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int x, y;

    cout << "x값을 ?��?��?��?��?�� ";
    cin >> x;
    cout << "y값을 ?��?��?��?��?��";
    cin >> y;

    if(x > y){
        cout << "x�? y보다 ?��?��?��." <<endl;
    }
    else{
        cout << "y�? x보다 ?��거나 같습?��?��." << endl;
    }
    
    return 0;
}
```

출력결과

```ex05_if_else.cpp
x값을 ?��?��?��?��?�� 20
y값을 ?��?��?��?��?��30
y�? x보다 ?��거나 같습?��?��.
```

##### - ?���? if  ~ else �?

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



##### - switch �?

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



##### - 반복�?

	- while 루프 : 조건?�� 참일 ?��?�� 반복



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
    
    cout << "구구?�� 중에?�� 출력?��고싶??? ?��?�� ?��?��?��?��?�� : ";
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

	- 조건?�� 참일 ?��?��  반복

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
input string : ?��?��?��?��?��
input of user : ?��?��?��?��?��
input string : 종료
input of user : 종료
```



##### - for 루프

	- 조건?�� 참일  ?��?�� 반복

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
    cout << "1�??�� 10까�?? ?��?��?�� ?�� = " << sum << endl;
    return 0;
}
```

```ex10_for.cpp
1�??�� 10까�?? ?��?��?�� ?�� = 55
```

##### 

##### ex13_for.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    long fact = 1;
    int n;

    cout << "?��?���? ?��?��?��?��?��: ";
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

###### - break �?

	- break 문을 만난 ?���? 중괄?���? ?��출함 

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

######  - continue �?

	- continue�? 만난 ?���? 반복문을 처음�??�� ?��?��

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    for(int i=1; i<5; i++){
        cout<< "continue 문장 ?��?�� ?��?�� 문장" <<endl;
        continue;
        cout << "continue 문장 ?��?��?�� ?��?�� 문장 " << endl;
    }
    return 0;
}
```

```ex15_continue.cpp
continue 문장 ?��?�� ?��?�� 문장
continue 문장 ?��?�� ?��?�� 문장
continue 문장 ?��?�� ?��?�� 문장
continue 문장 ?��?�� ?��?�� 문장
```



#### - 배열(array)

	- 같�?? 종류?�� ?��?��?��?��?�� ?��차적?���? 메모리에 ????��?��?�� ?���? 구조 (?��?��?�� 리스?��??? ?��른점)
	- 각각?�� ?��?��?��(?��?��) ?��??? ?��?��?��(번호)�? ?��?��?��?�� ?��립적?���? ?���? �??��
	- ????��?��?�� ?��?��?���? ?��?��?�� ?��름으�? ?���? ????��?���? 처리 �??��
	- 배열?�� ?��기는 ?���? ?��?��질시 바꾸�?못함

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
        cout << "?��?��?��?�� ?��?��?�� ?��?��?��?��?��: ";
        cin >> scores[i];
    }
    for(i=0; i<STUDENTS; i++){
        sum += scores[i];
    }
    average = sum / STUDENTS;
    cout << "?��?�� ?���? = " << average << endl;
    return 0;
}
```

결과

```ex16_array_cpp
?��?��?��?�� ?��?��?�� ?��?��?��?��?��: 10
?��?��?��?�� ?��?��?�� ?��?��?��?��?��: 20
?��?��?��?�� ?��?��?�� ?��?��?��?��?��: 30
?��?��?��?�� ?��?��?�� ?��?��?��?��?��: 40
?��?��?��?�� ?��?��?�� ?��?��?��?��?��: 50
?��?��?��?�� ?��?��?�� ?��?��?��?��?��: 60
?��?��?��?�� ?��?��?�� ?��?��?��?��?��: 70
?��?��?��?�� ?��?��?�� ?��?��?��?��?��: 80
?��?��?��?�� ?��?��?�� ?��?��?��?��?��: 90
?��?��?��?�� ?��?��?�� ?��?��?��?��?��: 10
?��?�� ?���? = 46
```

##### - 배열?�� 초기?��

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
    cout << "?��?�� ?���? = " <<average<<endl;
    return 0;
}
```

결과

```ex17_array_init.cpp
?��?�� ?���? = 300
```



##### - 범위 기반 for �?

![image-20200904162004702](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200904162004702.png)

범위?��?�� 배열 �??���? ?��?���??��?��



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

int &�??�� 참조?�� �??��



##### ?��차원 배열

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


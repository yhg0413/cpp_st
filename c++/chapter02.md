# chapter02

?€?  -> μ½λμ‘°κ° -> ?¬?©?  ?Έ?΄

μ½λ ?λ‘μ΄κΈ°ν ?λ§λ€ ?°κΈ°κ??μ°????κ²λ€ ?¨????

#### -κ΄?κ³? ?°?°?

	- x == y -> x??? yκ°? κ°μ??κ°??
	- x  != y -> x??? yκ°? ?€λ₯Έκ???
	- x > y -> xκ°? yλ³΄λ€ ?°κ°??
	- x < y -> xκ°? yλ³΄λ€ ????κ°??
	- x >= y -> xκ°? yλ³΄λ€ ?¬κ±°λ κ°μ??κ°??
	- x <= y -> xκ°? yλ³΄λ€ ?κ±°λ κ°μ??κ°??
	- κ²°κ³Ό? boolaen ?λ£ν?Όλ‘? True or False



##### ex01_rel.cpp

```c++
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    bool b;

    b = (1 == 2);

    cout << std::boolalpha; //λΆ??Έλ¦°μ true,falseλ‘? μΆλ ₯ ?€μ½ν?°?°?
    //std?:: ??΅κ°??₯
    //λΆ??Έλ¦°ν????΄ ??? 1 ?? 0?Όλ‘? μΆλ ₯???° boolalphaλ₯? ?¬?©?¨?Όλ‘μ¨
    //true ?? falseλ‘? μΆλ ₯?΄?
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
    cout << std:: boolalpha; //λΆ??Έλ¦°μ true, falseλ‘? μΆλ ₯

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



##### - ?Όλ¦? ?°?°?

	- x && y : and ?°?°, x??? yκ°? λͺ¨λ μ°Έμ΄λ©? μ°?
	- x || y :  or?°?°, x? yμ€μ? ??¨? μ°Έμ΄λ©? μ°?
	- !x : NOT?°?° xκ°? μ°Έμ΄λ©? κ±°μ§,xκ°? κ±°μ§?΄λ©? μ°?



##### - if ~ else λ¬?

![image-20200904143400516](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200904143400516.png)



##### ex03_if.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int x = 100;

    if(x == 100){
        cout << "xκ°? 100???€." <<endl;
    }
    if(x == 100){
        cout << "x? κ°μ μΆλ ₯?©??€." << endl;
        cout << "xκ°? 100???€." << endl;
    }
    return 0;
}
```

```ex03_if.cpp
xκ°? 100???€.
x? κ°μ μΆλ ₯?©??€.
xκ°? 100???€.
```

##### ex04_if_else.cpp

```c++
#include <iostream>
using namespace std;


int main(int argc, char const *argv[]){
    int x = 120;

    if (x == 100){
        cout << "xκ°? 100???€." << endl;
    }
    else{
        cout << "xκ°? 100?΄ ????€" << endl;
    }
}
```

```ex04_if_else.cpp
xκ°? 100?΄ ????€
```

##### ex05_if_else.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int x, y;

    cout << "xκ°μ ?? ₯??Έ? ";
    cin >> x;
    cout << "yκ°μ ?? ₯??Έ?";
    cin >> y;

    if(x > y){
        cout << "xκ°? yλ³΄λ€ ?½??€." <<endl;
    }
    else{
        cout << "yκ°? xλ³΄λ€ ?¬κ±°λ κ°μ΅??€." << endl;
    }
    
    return 0;
}
```

μΆλ ₯κ²°κ³Ό

```ex05_if_else.cpp
xκ°μ ?? ₯??Έ? 20
yκ°μ ?? ₯??Έ?30
yκ°? xλ³΄λ€ ?¬κ±°λ κ°μ΅??€.
```

##### - ?€μ€? if  ~ else λ¬?

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



##### - switch λ¬?

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

κ²°κ³Ό

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



##### - λ°λ³΅λ¬?

	- while λ£¨ν : μ‘°κ±΄?΄ μ°ΈμΌ ?? λ°λ³΅



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

κ²°κ³Ό

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
    
    cout << "κ΅¬κ΅¬?¨ μ€μ? μΆλ ₯?κ³ μΆ??? ?¨? ?? ₯??Έ? : ";
    cin >> n;

    while( i <= 9){
        cout << n << " * " << i << " = " << n*i << endl;
        i++;
    }
    return 0;
}
```

κ²°κ³Ό

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



##### do ~ while λ£¨ν

	- μ‘°κ±΄?΄ μ°ΈμΌ ??  λ°λ³΅

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
    }while(str != "μ’λ£");
    
    return 0;
}
```

```ex11_do_while.cpp
input string : ????Έ?
input of user : ????Έ?
input string : μ’λ£
input of user : μ’λ£
```



##### - for λ£¨ν

	- μ‘°κ±΄?΄ μ°ΈμΌ  ?? λ°λ³΅

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
    cout << "1λΆ??° 10κΉμ?? ? ?? ?© = " << sum << endl;
    return 0;
}
```

```ex10_for.cpp
1λΆ??° 10κΉμ?? ? ?? ?© = 55
```

##### 

##### ex13_for.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    long fact = 1;
    int n;

    cout << "? ?λ₯? ?? ₯??Έ?: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        fact = fact * i;
    }

    cout << n << "! = " <<fact << endl;
    return 0;
}
```

κ²°κ³Ό

```ex13_for.cpp
10! = 3628800
```

##### 

###### - break λ¬?

	- break λ¬Έμ λ§λ ?κ°? μ€κ΄?Έλ₯? ?μΆν¨ 

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

######  - continue λ¬?

	- continueλ₯? λ§λ ?κ°? λ°λ³΅λ¬Έμ μ²μλΆ??° ??

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    for(int i=1; i<5; i++){
        cout<< "continue λ¬Έμ₯ ? ? ?? λ¬Έμ₯" <<endl;
        continue;
        cout << "continue λ¬Έμ₯ ?΄?? ?? λ¬Έμ₯ " << endl;
    }
    return 0;
}
```

```ex15_continue.cpp
continue λ¬Έμ₯ ? ? ?? λ¬Έμ₯
continue λ¬Έμ₯ ? ? ?? λ¬Έμ₯
continue λ¬Έμ₯ ? ? ?? λ¬Έμ₯
continue λ¬Έμ₯ ? ? ?? λ¬Έμ₯
```



#### - λ°°μ΄(array)

	- κ°μ?? μ’λ₯? ?°?΄?°?€?΄ ?μ°¨μ ?Όλ‘? λ©λͺ¨λ¦¬μ ????₯?? ?λ£? κ΅¬μ‘° (??΄?¬ λ¦¬μ€?Έ??? ?€λ₯Έμ )
	- κ°κ°? ?°?΄?°(??) ?€??? ?Έ?±?€(λ²νΈ)λ₯? ?¬?©??¬ ?λ¦½μ ?Όλ‘? ? κ·? κ°??₯
	- ????©?? ?°?΄?°λ₯? ??Ό? ?΄λ¦μΌλ‘? ?½κ²? ????₯?κ³? μ²λ¦¬ κ°??₯
	- λ°°μ΄? ?¬κΈ°λ ?λ²? ? ?΄μ§μ λ°κΎΈμ§?λͺ»ν¨

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
        cout << "???€? ?±? ? ?? ₯???: ";
        cin >> scores[i];
    }
    for(i=0; i<STUDENTS; i++){
        sum += scores[i];
    }
    average = sum / STUDENTS;
    cout << "?±?  ?κ·? = " << average << endl;
    return 0;
}
```

κ²°κ³Ό

```ex16_array_cpp
???€? ?±? ? ?? ₯???: 10
???€? ?±? ? ?? ₯???: 20
???€? ?±? ? ?? ₯???: 30
???€? ?±? ? ?? ₯???: 40
???€? ?±? ? ?? ₯???: 50
???€? ?±? ? ?? ₯???: 60
???€? ?±? ? ?? ₯???: 70
???€? ?±? ? ?? ₯???: 80
???€? ?±? ? ?? ₯???: 90
???€? ?±? ? ?? ₯???: 10
?±?  ?κ·? = 46
```

##### - λ°°μ΄? μ΄κΈ°?

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
    cout << "?±?  ?κ·? = " <<average<<endl;
    return 0;
}
```

κ²°κ³Ό

```ex17_array_init.cpp
?±?  ?κ·? = 300
```



##### - λ²μ κΈ°λ° for λ¬?

![image-20200904162004702](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200904162004702.png)

λ²μ?? λ°°μ΄ λ³??κ°? ?€?΄κ°??Ό?¨



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

κ²°κ³Ό

```ex_adbanced_for.cpp
55

1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
```

int &λ³?? μ°Έμ‘°? λ³??



##### ?€μ°¨μ λ°°μ΄

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

κ²°κ³Ό

```ex19_muti_array.cpp
1, 2, 3, 4, 5, 6, 7, 8, 9, 
2, 4, 6, 8, 10, 12, 14, 16, 18, 
3, 6, 9, 12, 15, 18, 21, 24, 27,
```


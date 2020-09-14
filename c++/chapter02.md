# chapter02

?„¤? • -> ì½”ë“œì¡°ê° -> ?‚¬?š©?•  ?–¸?–´

ì½”ë“œ ?ƒˆë¡œì—´ê¸°í• ?•Œë§ˆë‹¤ ?“°ê¸°ê??ì°????ê²ƒë“¤ ?¨?‘˜?ˆ˜?ˆ?Œ

#### -ê´?ê³? ?—°?‚°?

	- x == y -> x??? yê°? ê°™ì??ê°??
	- x  != y -> x??? yê°? ?‹¤ë¥¸ê???
	- x > y -> xê°? yë³´ë‹¤ ?°ê°??
	- x < y -> xê°? yë³´ë‹¤ ?‘???ê°??
	- x >= y -> xê°? yë³´ë‹¤ ?¬ê±°ë‚˜ ê°™ì??ê°??
	- x <= y -> xê°? yë³´ë‹¤ ?‘ê±°ë‚˜ ê°™ì??ê°??
	- ê²°ê³¼?Š” boolaen ?ë£Œí˜•?œ¼ë¡? True or False



##### ex01_rel.cpp

```c++
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    bool b;

    b = (1 == 2);

    cout << std::boolalpha; //ë¶??š¸ë¦°ì„ true,falseë¡? ì¶œë ¥ ?Š¤ì½”í”„?—°?‚°?
    //std?Š”:: ?ƒ?µê°??Š¥
    //ë¶??š¸ë¦°í???…?´ ?›?˜?Š” 1 ?˜?Š” 0?œ¼ë¡? ì¶œë ¥?˜?Š”?° boolalphaë¥? ?‚¬?š©?•¨?œ¼ë¡œì¨
    //true ?˜?Š” falseë¡? ì¶œë ¥?´?Œ
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
    cout << std:: boolalpha; //ë¶??š¸ë¦°ì„ true, falseë¡? ì¶œë ¥

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



##### - ?…¼ë¦? ?—°?‚°?

	- x && y : and ?—°?‚°, x??? yê°? ëª¨ë‘ ì°¸ì´ë©? ì°?
	- x || y :  or?—°?‚°, x?‚˜ yì¤‘ì—?„œ ?•˜?‚¨?‚˜ ì°¸ì´ë©? ì°?
	- !x : NOT?—°?‚° xê°? ì°¸ì´ë©? ê±°ì§“,xê°? ê±°ì§“?´ë©? ì°?



##### - if ~ else ë¬?

![image-20200904143400516](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200904143400516.png)



##### ex03_if.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int x = 100;

    if(x == 100){
        cout << "xê°? 100?…?‹ˆ?‹¤." <<endl;
    }
    if(x == 100){
        cout << "x?˜ ê°’ì„ ì¶œë ¥?•©?‹ˆ?‹¤." << endl;
        cout << "xê°? 100?…?‹ˆ?‹¤." << endl;
    }
    return 0;
}
```

```ex03_if.cpp
xê°? 100?…?‹ˆ?‹¤.
x?˜ ê°’ì„ ì¶œë ¥?•©?‹ˆ?‹¤.
xê°? 100?…?‹ˆ?‹¤.
```

##### ex04_if_else.cpp

```c++
#include <iostream>
using namespace std;


int main(int argc, char const *argv[]){
    int x = 120;

    if (x == 100){
        cout << "xê°? 100?…?‹ˆ?‹¤." << endl;
    }
    else{
        cout << "xê°? 100?´ ?•„?‹™?‹ˆ?‹¤" << endl;
    }
}
```

```ex04_if_else.cpp
xê°? 100?´ ?•„?‹™?‹ˆ?‹¤
```

##### ex05_if_else.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int x, y;

    cout << "xê°’ì„ ?…? ¥?•˜?„¸?š” ";
    cin >> x;
    cout << "yê°’ì„ ?…? ¥?•˜?„¸?š”";
    cin >> y;

    if(x > y){
        cout << "xê°? yë³´ë‹¤ ?½?‹ˆ?‹¤." <<endl;
    }
    else{
        cout << "yê°? xë³´ë‹¤ ?¬ê±°ë‚˜ ê°™ìŠµ?‹ˆ?‹¤." << endl;
    }
    
    return 0;
}
```

ì¶œë ¥ê²°ê³¼

```ex05_if_else.cpp
xê°’ì„ ?…? ¥?•˜?„¸?š” 20
yê°’ì„ ?…? ¥?•˜?„¸?š”30
yê°? xë³´ë‹¤ ?¬ê±°ë‚˜ ê°™ìŠµ?‹ˆ?‹¤.
```

##### - ?‹¤ì¤? if  ~ else ë¬?

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



##### - switch ë¬?

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

ê²°ê³¼

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



##### - ë°˜ë³µë¬?

	- while ë£¨í”„ : ì¡°ê±´?´ ì°¸ì¼ ?™?•ˆ ë°˜ë³µ



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

ê²°ê³¼

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
    
    cout << "êµ¬êµ¬?‹¨ ì¤‘ì—?„œ ì¶œë ¥?•˜ê³ ì‹¶??? ?‹¨?„ ?…? ¥?•˜?„¸?š” : ";
    cin >> n;

    while( i <= 9){
        cout << n << " * " << i << " = " << n*i << endl;
        i++;
    }
    return 0;
}
```

ê²°ê³¼

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



##### do ~ while ë£¨í”„

	- ì¡°ê±´?´ ì°¸ì¼ ?™?•ˆ  ë°˜ë³µ

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
    }while(str != "ì¢…ë£Œ");
    
    return 0;
}
```

```ex11_do_while.cpp
input string : ?•ˆ?…•?•˜?„¸?š”
input of user : ?•ˆ?…•?•˜?„¸?š”
input string : ì¢…ë£Œ
input of user : ì¢…ë£Œ
```



##### - for ë£¨í”„

	- ì¡°ê±´?´ ì°¸ì¼  ?™?•ˆ ë°˜ë³µ

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
    cout << "1ë¶??„° 10ê¹Œì?? ? •?ˆ˜?˜ ?•© = " << sum << endl;
    return 0;
}
```

```ex10_for.cpp
1ë¶??„° 10ê¹Œì?? ? •?ˆ˜?˜ ?•© = 55
```

##### 

##### ex13_for.cpp

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    long fact = 1;
    int n;

    cout << "? •?ˆ˜ë¥? ?…? ¥?•˜?„¸?š”: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        fact = fact * i;
    }

    cout << n << "! = " <<fact << endl;
    return 0;
}
```

ê²°ê³¼

```ex13_for.cpp
10! = 3628800
```

##### 

###### - break ë¬?

	- break ë¬¸ì„ ë§Œë‚œ ?ˆœê°? ì¤‘ê´„?˜¸ë¥? ?ƒˆì¶œí•¨ 

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

######  - continue ë¬?

	- continueë¥? ë§Œë‚œ ?ˆœê°? ë°˜ë³µë¬¸ì„ ì²˜ìŒë¶??„° ?‹œ?‘

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    for(int i=1; i<5; i++){
        cout<< "continue ë¬¸ì¥ ? „?— ?ˆ?Š” ë¬¸ì¥" <<endl;
        continue;
        cout << "continue ë¬¸ì¥ ?´?›„?— ?ˆ?Š” ë¬¸ì¥ " << endl;
    }
    return 0;
}
```

```ex15_continue.cpp
continue ë¬¸ì¥ ? „?— ?ˆ?Š” ë¬¸ì¥
continue ë¬¸ì¥ ? „?— ?ˆ?Š” ë¬¸ì¥
continue ë¬¸ì¥ ? „?— ?ˆ?Š” ë¬¸ì¥
continue ë¬¸ì¥ ? „?— ?ˆ?Š” ë¬¸ì¥
```



#### - ë°°ì—´(array)

	- ê°™ì?? ì¢…ë¥˜?˜ ?°?´?„°?“¤?´ ?ˆœì°¨ì ?œ¼ë¡? ë©”ëª¨ë¦¬ì— ????¥?˜?Š” ?ë£? êµ¬ì¡° (?ŒŒ?´?¬ ë¦¬ìŠ¤?Š¸??? ?‹¤ë¥¸ì )
	- ê°ê°?˜ ?°?´?„°(?š”?†Œ) ?“¤??? ?¸?±?Š¤(ë²ˆí˜¸)ë¥? ?‚¬?š©?•˜?—¬ ?…ë¦½ì ?œ¼ë¡? ? ‘ê·? ê°??Š¥
	- ????š©?Ÿ‰?˜ ?°?´?„°ë¥? ?™?¼?•œ ?´ë¦„ìœ¼ë¡? ?‰½ê²? ????¥?•˜ê³? ì²˜ë¦¬ ê°??Š¥
	- ë°°ì—´?˜ ?¬ê¸°ëŠ” ?•œë²? ? •?•´ì§ˆì‹œ ë°”ê¾¸ì§?ëª»í•¨

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
        cout << "?•™?ƒ?“¤?˜ ?„±? ?„ ?…? ¥?•˜?‹œ?š”: ";
        cin >> scores[i];
    }
    for(i=0; i<STUDENTS; i++){
        sum += scores[i];
    }
    average = sum / STUDENTS;
    cout << "?„±?  ?‰ê·? = " << average << endl;
    return 0;
}
```

ê²°ê³¼

```ex16_array_cpp
?•™?ƒ?“¤?˜ ?„±? ?„ ?…? ¥?•˜?‹œ?š”: 10
?•™?ƒ?“¤?˜ ?„±? ?„ ?…? ¥?•˜?‹œ?š”: 20
?•™?ƒ?“¤?˜ ?„±? ?„ ?…? ¥?•˜?‹œ?š”: 30
?•™?ƒ?“¤?˜ ?„±? ?„ ?…? ¥?•˜?‹œ?š”: 40
?•™?ƒ?“¤?˜ ?„±? ?„ ?…? ¥?•˜?‹œ?š”: 50
?•™?ƒ?“¤?˜ ?„±? ?„ ?…? ¥?•˜?‹œ?š”: 60
?•™?ƒ?“¤?˜ ?„±? ?„ ?…? ¥?•˜?‹œ?š”: 70
?•™?ƒ?“¤?˜ ?„±? ?„ ?…? ¥?•˜?‹œ?š”: 80
?•™?ƒ?“¤?˜ ?„±? ?„ ?…? ¥?•˜?‹œ?š”: 90
?•™?ƒ?“¤?˜ ?„±? ?„ ?…? ¥?•˜?‹œ?š”: 10
?„±?  ?‰ê·? = 46
```

##### - ë°°ì—´?˜ ì´ˆê¸°?™”

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
    cout << "?„±?  ?‰ê·? = " <<average<<endl;
    return 0;
}
```

ê²°ê³¼

```ex17_array_init.cpp
?„±?  ?‰ê·? = 300
```



##### - ë²”ìœ„ ê¸°ë°˜ for ë¬?

![image-20200904162004702](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200904162004702.png)

ë²”ìœ„?—?Š” ë°°ì—´ ë³??ˆ˜ê°? ?“¤?–´ê°??•¼?•¨



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

ê²°ê³¼

```ex_adbanced_for.cpp
55

1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
```

int &ë³??ˆ˜ ì°¸ì¡°?˜• ë³??ˆ˜



##### ?‹¤ì°¨ì› ë°°ì—´

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

ê²°ê³¼

```ex19_muti_array.cpp
1, 2, 3, 4, 5, 6, 7, 8, 9, 
2, 4, 6, 8, 10, 12, 14, 16, 18, 
3, 6, 9, 12, 15, 18, 21, 24, 27,
```


# chapter03 ?¨???? λ¬Έμ?΄

#### -?¨?

	- ?¨?? κ΅¬μ‘°

![image-20200907094837434](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907094837434.png)

	- ?¨?? ?ΈμΆ?

![image-20200907094904792](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907094904792.png)

##### ex01_func.cpp

```c++
#include <iostream>
using namespace std;

int max(int x, int y);// ? μ²λ¦¬?΄? max?¨?κ°? ??? ?λ¦? ?¨? ??

int main(int argc, char const *argv[]){
    int n;
    n=max(2,3);
    cout<<"result : " << n << endl;
    return 0;

}

int max(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
```

```ex01_func.cpp
result : 3
```

	- ?¨???

![image-20200907095104158](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907095104158.png)

![image-20200907095127046](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907095127046.png)

 - ##### ?¨? ?Έ? ? ?¬λ°©λ²

   - call by ralue
   - call by reference
   - call by address(pointer)



- ###### call by value

![image-20200907100307320](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907100307320.png)

##### ex02_call_by_value.cpp

```c++
#include <iostream>
using namespace std;

void swap(int x, int y){
    int t;
    t=x;
    x=y;
    y=t;
}

int main(int argc, char const *argv[]){
    int a= 100, b = 200;

    printf("a=%d, b=%d\n", a, b);
    swap(a,b);// μ§??­λ³?? x??? y? κ°λ§ λ°λ?κΈ° ?λ¬Έμ main? a??? b? λ°λ?μ????
    printf("a=%d, b=%d\n", a, b);
    
    return 0;
}
```

```ex02_call_by_value.cpp
a=100, b=200
a=100, b=200
```

 - call by reference

![image-20200907101025360](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907101025360.png)

##### 	- μ°Έμ‘°λ³?? 

 - κΈ°μ‘΄ λ³??? ?λ‘μ΄ ?΄λ¦μ μΆκ???? κ²? (λ°λ? μ΄κΈ°? κ΅¬λ¬Έκ³? κ°μ΄ ?¨?Ό?¨)

   ![image-20200907101122285](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907101122285.png)

μ°Έμ‘°λ³??? ??¬ ??

![image-20200907101246847](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907101246847.png)

##### ex03_call_by_reference.cpp

```c++
#include <iostream>
using namespace std;

void swap(int& x, int &y){
    int t;
    t = x;
    x = y;
    y = t;
}

int main(int argc, char const *argv[]){
    int a =100, b = 200;

    printf("a=%d, b=%d\n", a, b);
    swap(a, b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
```

```κ²°κ³Ό
a=100, b=200
a=200, b=100
```



![image-20200907101615754](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907101615754.png)

<img src="C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907101751649.png" alt="image-20200907101751649" style="zoom:50%;" />

![image-20200907101853839](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907101853839.png)

![image-20200907101911033](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907101911033.png)

![image-20200907101927748](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907101927748.png)

![image-20200907101941342](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907101941342.png)

 - ##### μ€μ‘± ?¨?(overload)

   	-  ?¨?? ?Όλ―???? ??Ό?μ§?λ§? ?¨?? ?Έ?κ°? ?€λ₯΄λ©΄ ?€λ₯? ?¨?λ‘? ?Έ?
   	-  λ¦¬ν΄ ??????? ?κ΄???.

![image-20200907102149653](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907102149653.png)

![image-20200907102207071](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907102207071.png)

##### ex04_overload.cpp

```c++
#include <iostream>
using namespace std;

int square(int i){
    cout << "square(int) ?ΈμΆ?" << endl;
    return i*i;
}

double square(double i){
    cout << "square(double) ?ΈμΆ?" << endl;
    return i*i;
}


int main(int argc, char const *argv[]){
    cout << square(10) << endl;
    cout << square(2.0) << endl;
    return 0;
}
```

```κ²°κ³Ό
square(int) ?ΈμΆ?
100
square(double) ?ΈμΆ?
4
```



 - ##### ?Έ?? ??΄?Έ κ°?

   	-  ?¨? ?ΈμΆμ ?Έ? κ°μ μ§?? ?μ§? ??? ? κ°?μ§?? κ°?

##### ex05_default_param.cpp

```c++
#include <iostream>
using namespace std;
/*
void display(char c = '*'){
    for(int i=0; i <20; i++){
        cout << c;
    }
    cout << endl;
}
*/


void display(char c='*', int n = 10){
    for(int i=0; i<n; i++){
        cout << c;
    }
    cout << endl;
}


int main(int argc, char const *argv[]){
    display();//?€λ²λ‘?λ₯? ???° ?΄?€?¨?λ₯? ?°?μ§? ??Έλͺ»ν¨
    display('#');//
    display('#', 5);
    return 0;
}
```

```κ²°κ³Ό
**********
##########
#####
```

 - ?Έ?? ??΄?Έ κ°? μ§?? ? μ£Όμ ?¬?­
   	- ?€?? λΆ??° λ°°μ 
   	- ??? λΆ??° λ°°μ ?? κ²½μ° ??¬

##### ex05_2_array_func.cpp

```c++
#include <iostream>
using namespace std;
/*
void initArray(int array[], int value=0){
    int size = sizeof(array) / sizeof(int);
    for(int i=0; i<size; i++){
        array[i] = value;
    }
}
*///?¬?Έ?° ???Ό ??κ°??₯ κ·Έλ ?΄μ©μ?? ?΄????Ό
void initArray(int array[], int size, int value=0){
    
    for(int i=0; i<size; i++){
        array[i] = value;
    }
}

void  printArray(int array[],int size){
    
    for (int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    cout << endl;
}

int main(int argc, char const *argv[]){
    const int ARRAY_SIZE = 10;
    int intList[ARRAY_SIZE];
    initArray(intList, ARRAY_SIZE,100); // 100?Όλ‘? μ΄κΈ°?
    printArray(intList,ARRAY_SIZE);
    initArray(intList,ARRAY_SIZE);
    printArray(intList,ARRAY_SIZE);
    return 0;
}


```

```κ²°κ³Ό
100 100 100 100 100 100 100 100 100 100 
0 0 0 0 0 0 0 0 0 0
```



![image-20200907103030204](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907103030204.png)

#####  - string ?΄??€

	-  λ¬Έμ?΄ ?°?΄?° ????₯ λ°? λ¬Έμ?΄ μ²λ¦¬ ?¨?(λ©μ?) ? κ³?
	-  #include <string>? λ¨Όμ?? μ§??  ? ?¬?©
	-  .empty()
	-  .insert(pos. sw)
	-  .remove(pds, len)
	-  .find(s2)
	-  .find(pos, s2)
	-  .reverse()

![image-20200907103703974](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907103703974.png)

##### ex06_string.cpp

```c++
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    string s1 = "Slow", s2 = "steady";
    string s3 = "the race.";
    string s4;

    s4 = s1 + " and " + s2 + " wins " + s3;

    cout << s4 << endl;
    return 0;
}
```

```κ²°κ³Ό
Slow and steady wins the race.
```

##### ex07_string.cpp

```c++
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    string s1, addr;

    cout << "?΄λ¦μ ?? ₯??Έ?: ";
    cin >> s1;
    cin.ignore();

    cout << "μ£Όμλ₯? ?? ₯??Έ?: ";
    getline(cin,addr);

    cout << addr << "? " << s1 << "?¨ ????Έ??" << endl;
    return 0;
}
```

```κ²°κ³Ό
?΄λ¦μ ?? ₯??Έ?: ??¬κ±?
μ£Όμλ₯? ?? ₯??Έ?: κ²½κΈ°? κΉ??¬? κ°μ ?
κ²½κΈ°? κΉ??¬? κ°μ ????¬κ±΄μ¨ ????Έ??
```

![image-20200907114118888](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907114118888.png)

##### ex08_string.cpp

```c++
int main(int argc, char const *argv[]){
    string s = "When in Rome, do as the Romans.";

    int size = s.size();
    int index = s.find("Rome");
    
    s.insert(0, "Hello !! "); //λ¬Έμ?΄ λ§? ?? μΆκ??
    cout << s << endl;
    s += "end of Worlad"; //λ§¨λ€? λ¬Έμ?΄μΆκ??
    cout << s << endl;
    s.append("\n------\n");//λ§¨λ€? λ¬Έμ?΄ μΆκ??
    cout << s << endl;
    cout << size << endl;
    cout << index << endl;

    return 0;
}
```

```κ²°κ³Ό
Hello !! When in Rome, do as the Romans.
Hello !! When in Rome, do as the Romans.end of Worlad
Hello !! When in Rome, do as the Romans.end of Worlad
------

31
8
```

##### ex09_string.cpp

```c++
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    string s = "Wehn in Rome, do as the Romans.";


    //?½κΈ?
    for(auto& ch : s){
        cout << ch << ' ';
    }
    cout << endl;
    for(auto ch : s){
        cout << ch << ' ';
    }
    cout << endl;

    //?°κΈ?
    for(auto& ch : s){
        ch = 'T';
    }
    cout << s << endl;
    for(auto ch : s){
        ch = 'W';
    }
    cout << s << endl;

    return 0;
}
```

```κ²°κ³Ό
W e h n   i n   R o m e ,   d o   a s   t h e   R o m a n s . 
W e h n   i n   R o m e ,   d o   a s   t h e   R o m a n s .
TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT
TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT

```

##### ex10_string.cpp

```c++
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    string list[] = {"?κΈΈλ","κ³ κΈΈ?","?λ¦?"};

    for(auto& name : list){
        cout << name << endl;
    }
    return 0;
}
```

```κ²°κ³Ό
?κΈΈλ
κ³ κΈΈ?
?λ¦?
```


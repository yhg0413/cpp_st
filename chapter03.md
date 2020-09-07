# chapter03 함수와 문자열

#### -함수

	- 함수의 구조

![image-20200907094837434](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907094837434.png)

	- 함수의 호출

![image-20200907094904792](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907094904792.png)

##### ex01_func.cpp

```c++
#include <iostream>
using namespace std;

int max(int x, int y);// 전처리해서 max함수가 있음을 알림 함수 원형

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

	- 함수원형

![image-20200907095104158](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907095104158.png)

![image-20200907095127046](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200907095127046.png)

	- ##### 함수 인자 전달방법


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
    swap(a,b);// 지역변수 x와 y의 값만 바뀌기 때문에 main의 a와 b는 바뀌지않음
    printf("a=%d, b=%d\n", a, b);
    
    return 0;
}
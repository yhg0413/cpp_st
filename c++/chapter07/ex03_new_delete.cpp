#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[]){
    int *ptr;

    srand(time(NULL));
    /*
    ptr은 할당된 동적 메모리의 시작주소,
    따라서 ptr은 첫 번째 엘리먼트(ptr[0])에 대한 포인터
    *ptr은 ptr[0]과 같음
    */
    ptr = new int[10];
    for(int i=0; i<10; i++){
        ptr[i] = rand();
        //*(ptr+i) = rand();
    }

    for(int i=0; i<10; i++){
        cout << ptr[i] << " ";
        //cout << *(ptr+i) << " ";
    }
    cout << endl;
    delete []ptr;
    return 0;
}
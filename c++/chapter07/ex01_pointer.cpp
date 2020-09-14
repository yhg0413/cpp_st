#include <iostream>
using namespace std;


int main(int argc, char const *argv[]){
    //f(NULL); -- int, char * 둘 다 가능함으로 에러
    int number = 0;
    int *p = &number;//포인터변수 p를 선언한것이지
    //현제 연산자 *를 사용한것임


    cout << p << endl; // p는 number의 주소값을 가지게 됌
    cout << *p << endl; // 따라서 * number의 주소값 이랑 같은 뜻이됌
    //포인터연산자는 주소값을 따라가 그 주소값에 저장된 값을 불러옴
    //그래서 *p는 number에 저장된 0을 가져옴

    return 0;
}
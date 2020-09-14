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
    //cout << "x / y : " << x / (double)y << endl; 타입캐스트로 y를 실수형으로 만듬
    
    cout << "x % y : " << x % y << endl;

    cout << 1/2 << endl; // 정수 /정수 --> 정수(몫)
    cout << 1/2. << endl; // 정수/실수 -> 실수
    return 0;
}
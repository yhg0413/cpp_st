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
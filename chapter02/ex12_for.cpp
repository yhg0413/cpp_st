#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int sum = 0;
    for(int i =0; i<=10; i++){
        sum += i;
    }
    cout << "1부터 10까지 정수의 합 = " << sum << endl;
    // cout <<i;  --에러 -> 반복문안에서 선언한 i는 반복문을 나오면 사라짐
    return 0;
}
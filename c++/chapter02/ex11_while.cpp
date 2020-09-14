#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    string str;

    do {
        cout<<"input string : ";
        getline(cin, str);
        //getline은 엔터를 칠때까지 데이터를 받아오게해줌
        //cin >> str (입력시 공백을 기준으로 끈어서 데이터를 받아옴)
        cout << "input of user : " << str << endl;
    }while(str != "종료");

    return 0;
}
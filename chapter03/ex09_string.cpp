#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    string s = "Wehn in Rome, do as the Romans.";


    //읽기
    for(auto& ch : s){
        cout << ch << ' ';
    }
    cout << endl;
    for(auto ch : s){
        cout << ch << ' ';
    }
    cout << endl;

    //쓰기
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
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    string s = "When in Rome, do as the Romans.";

    int size = s.size();//문자열의 길이
    int index = s.find("Rome");
    
    cout << sizeof(s) << endl;// string 객체의 크기는 32바이트라 항상 32를 반환
    //글자수와 상관없음
    s.insert(0, "Hello !! "); //문자열 맨 앞에 추가
    cout << s << endl;
    s += "end of Worlad"; //맨뒤에 문자열추가
    cout << s << endl;
    s.append("\n------\n");//맨뒤에 문자열 추가
    cout << s << endl;
    cout << size << endl;
    cout << index << endl;

    return 0;
}
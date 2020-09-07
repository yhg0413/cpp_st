#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    string s = "When in Rome, do as the Romans.";

    int size = s.size();
    int index = s.find("Rome");
    
    cout << sizeof(s) << endl;
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
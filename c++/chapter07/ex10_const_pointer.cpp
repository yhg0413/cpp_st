#include <iostream>
#include <string>
using namespace std;

void print(string t){
    cout << t << endl;
}

void print(const char t[]){
    cout << t << endl;
}
//이경우 test와 pstr은 받을수있다
//하지만 str은 받지못한다

int main(int argc, char const *argv[]){
    char test[] = "Hello"; //문자열배열
    char *pstr = "c++"; //문자열 보인터
    string str = "World"; //string 객체

 

    print(test);
    print(pstr);
    print(str);
    print(str.c_str());

    //print(str.c_str()); 아두이노에서 사용하게될것
    //string 클래스를 지원하지않던 옜날 c언어 소재의 라이브러리를
    //사용할때 str.c_str()을 사용하여 string객체를 char *로써 리턴시킨다
    //const char *을 리턴함 const를 사용해서 읽을순있지만 변경을 하지못하게
    //만드는것임


    return 0;
}
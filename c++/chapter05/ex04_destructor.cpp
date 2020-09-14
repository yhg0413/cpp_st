#include <iostream>
#include <string.h>
#include <string> //string 클래스 헤더 파일
using namespace std;

class MyString{
    private:
    char *s;
    int size;

    public:
    MyString(char *c){
        size = strlen(c) + 1;
        s = new char[size];//동적할당 new 데이터타입[크기] 
        //new 는 heap에 데이터를 할당받고 확보된 메모리의 시작주소값을 리턴함
        strcpy(s,c);
    }

    ~MyString(){
        cout << "~MyString ... delete s" <<endl;
        delete[]s;// 배열이면 배열이라는걸 알려주기위해 []를 써줘야함
    }//가바지컬렉터가 c++은 없기때문에 이렇게 일일이 지워줘야함
};

int main(int argc, char const *argv[]){
    
    MyString str("abcedfgijk");
    
    return 0;
}
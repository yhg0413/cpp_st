#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>
using namespace std;

class MyArray{
    public :
    int size;
    int *data;
    
    MyArray(int size){
        this->size = size;
        data = new int[size];
    }
    ~MyArray(){
        if(data != NULL){
            delete []data;
        }
    }
    MyArray(const MyArray& other){
        size = other.size;
        data = new int[other.size];
        for(int i = 0; i<size; i++){
            data[i] = other.data[i]; //복사생성자 호출
        }
    }
};

int main(int argc, char const *argv[]){
    MyArray buffer(10);
    buffer.data[0] = 1;
    {
        MyArray clone = buffer; //복사 생성자 호출
    } // 블럭이 끝날때 파괴자 호출 clone 삭제
    // buffer의 data까지 삭제됌
    // 하지만 실행했을떄는 오류가 나지않음
    buffer.data[1] =2;
    cout << buffer.data[0] << endl; // data가 삭제되어서 값이 제대로 안나옴

    return 0;
}
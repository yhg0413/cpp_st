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
            data[i] = other.data[i]; //��������� ȣ��
        }
    }
};

int main(int argc, char const *argv[]){
    MyArray buffer(10);
    buffer.data[0] = 1;
    {
        MyArray clone = buffer; //���� ������ ȣ��
    } // ���� ������ �ı��� ȣ�� clone ����
    // buffer�� data���� ������
    // ������ ������������ ������ ��������
    buffer.data[1] =2;
    cout << buffer.data[0] << endl; // data�� �����Ǿ ���� ����� �ȳ���

    return 0;
}
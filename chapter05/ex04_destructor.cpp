#include <iostream>
#include <string.h>
#include <string> //string Ŭ���� ��� ����
using namespace std;

class MyString{
    private:
    char *s;
    int size;

    public:
    MyString(char *c){
        size = strlen(c) + 1;
        s = new char[size];//�����Ҵ� new ������Ÿ��[ũ��] 
        //new �� heap�� �����͸� �Ҵ�ް� Ȯ���� �޸��� �����ּҰ��� ������
        strcpy(s,c);
    }

    ~MyString(){
        cout << "~MyString ... delete s" <<endl;
        delete[]s;// �迭�̸� �迭�̶�°� �˷��ֱ����� []�� �������
    }//�������÷��Ͱ� c++�� ���⶧���� �̷��� ������ ���������
};

int main(int argc, char const *argv[]){
    
    MyString str("abcedfgijk");
    
    return 0;
}
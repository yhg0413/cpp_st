#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[]){
    int *ptr;

    srand(time(NULL));
    /*
    ptr�� �Ҵ�� ���� �޸��� �����ּ�,
    ���� ptr�� ù ��° ������Ʈ(ptr[0])�� ���� ������
    *ptr�� ptr[0]�� ����
    */
    ptr = new int[10];
    for(int i=0; i<10; i++){
        ptr[i] = rand();
        //*(ptr+i) = rand();
    }

    for(int i=0; i<10; i++){
        cout << ptr[i] << " ";
        //cout << *(ptr+i) << " ";
    }
    cout << endl;
    delete []ptr;
    return 0;
}
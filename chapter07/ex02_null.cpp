#include <iostream>
using namespace std;


void f(int i){
    cout << "f(int)" << endl;
}

void f(char *p){
    cout << "f(char *)" <<endl;
}

int main(int argc, char const *argv[]){
    int *pNumber = NULL ; //�ʱ�ȭ����
    int *pNumber2; //����� ������ �ʱⰪ������

    //f(NULL); --int, char * �� �� �����ϹǷ� ����
    f(nullptr);//�����ͺ����� �ν��ϴ� nullptr�� ����Ͽ� �����ε忡��
    //���������ʰ� �ʱ�ȭ�� �����ߴ� nullptr : ������ NULL�� �ǹ��ϴ� Ű����


    if(pNumber != NULL){
        cout << *pNumber << endl;
    }

    if(pNumber2 != NULL){//����� ������� ����
        cout << *pNumber2 << endl;
    }

    return 0;
}


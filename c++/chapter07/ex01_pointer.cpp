#include <iostream>
using namespace std;


int main(int argc, char const *argv[]){
    //f(NULL); -- int, char * �� �� ���������� ����
    int number = 0;
    int *p = &number;//�����ͺ��� p�� �����Ѱ�����
    //���� ������ *�� ����Ѱ���


    cout << p << endl; // p�� number�� �ּҰ��� ������ ��
    cout << *p << endl; // ���� * number�� �ּҰ� �̶� ���� ���̉�
    //�����Ϳ����ڴ� �ּҰ��� ���� �� �ּҰ��� ����� ���� �ҷ���
    //�׷��� *p�� number�� ����� 0�� ������

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

void print(string t){
    cout << t << endl;
}

void print(const char t[]){
    cout << t << endl;
}
//�̰�� test�� pstr�� �������ִ�
//������ str�� �������Ѵ�

int main(int argc, char const *argv[]){
    char test[] = "Hello"; //���ڿ��迭
    char *pstr = "c++"; //���ڿ� ������
    string str = "World"; //string ��ü

 

    print(test);
    print(pstr);
    print(str);
    print(str.c_str());

    //print(str.c_str()); �Ƶ��̳뿡�� ����ϰԵɰ�
    //string Ŭ������ ���������ʴ� ���� c��� ������ ���̺귯����
    //����Ҷ� str.c_str()�� ����Ͽ� string��ü�� char *�ν� ���Ͻ�Ų��
    //const char *�� ������ const�� ����ؼ� ������������ ������ �������ϰ�
    //����°���


    return 0;
}
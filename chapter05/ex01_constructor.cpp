#include <iostream>
using namespace std;

class Time{
    public:
    int hour;
    int minute;

    //������

    //Time(){} �긦 ����ϸ� Time a�� �����ȳ�
    Time(int h, int m){
        hour = h;
        minute = m;
    }//�⺻������ ������ ���������� int�� �ڵ���ȯ������ �����ڴ¿��ܷ�
    //����Ÿ���� �����ʰ� Ŭ������� ���� �Լ��� ������ �����ڶ����

    //�����ڸ� �������� ������� time(){} �̷��� ����Ʈ�����ڰ� �������

    void print(){
        cout << hour << ":" << minute << endl;
    }
    
};

void print(Time t){//�Ű����� t�� �Էµ� ���� t�� ����(�ν��Ͻ�����) �Ͽ� ������
        cout << t.hour << ":" << t.minute << endl;
    }
int main(int argc, char const *argv[]){
    //Time a; ���� ������ ���ǰ� int���� �ΰ��� ���⶧����
    //����Ʈ �����ڰ� ��� ������
    Time b(10, 25);
    Time c{12, 25};
    Time d = {10,25};
    Time f = c;
    c.hour = 10;
    b.print();
    c.print();
    d.print();
    f.print();

    print(b);// b���� ���� �Ͽ� t���� ��� �����ƴ� ������ ���̽��� ����
    return 0;
}
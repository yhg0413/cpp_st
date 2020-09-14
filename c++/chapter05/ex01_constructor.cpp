#include <iostream>
using namespace std;


class Second{
    public:
    int sec;

    Second(){
        sec=0;
    }
    Second(int s){
        sec = s;
    }
};


class Time{
    public:
    int hour;
    int minute;
    Second sec;
    //������

    Time(){
        hour = 0;
        minute =0;
        sec.sec = 20;
    }
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

void printTime(Time t){//�Ű����� t�� �Էµ� ���� t�� ����(�ν��Ͻ�����) �Ͽ� ������
        cout << t.hour << ":" << t.minute << endl;
    }
    /*
void printTime(Time &t){//�Ű����� t�� �Էµ� ���� t�� ���� �޸� �Ҵ��� �����ʰ� ������ ������ ������
    cout << t.hour << ":" << t.minute << endl;
}*/
int main(int argc, char const *argv[]){
    //Time a; ���� ������ ���ǰ� int���� �ΰ��� ���⶧����
    //����Ʈ �����ڰ� ��� ������
    Time a;
    Time b(10, 25);
    Time c{12, 25};
    Time d = {10,25};
    Time f = c;
    a.print();
    c.hour = 10;
    b.print();
    c.print();
    d.print();
    f.print();

    printTime(b);// b���� ���� �Ͽ� t���� ��� �����ƴ� ������ ���̽��� ����
    return 0;
}
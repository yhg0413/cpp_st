#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    string s = "When in Rome, do as the Romans.";

    int size = s.size();//���ڿ��� ����
    int index = s.find("Rome");
    
    cout << sizeof(s) << endl;// string ��ü�� ũ��� 32����Ʈ�� �׻� 32�� ��ȯ
    //���ڼ��� �������
    s.insert(0, "Hello !! "); //���ڿ� �� �տ� �߰�
    cout << s << endl;
    s += "end of Worlad"; //�ǵڿ� ���ڿ��߰�
    cout << s << endl;
    s.append("\n------\n");//�ǵڿ� ���ڿ� �߰�
    cout << s << endl;
    cout << size << endl;
    cout << index << endl;

    return 0;
}
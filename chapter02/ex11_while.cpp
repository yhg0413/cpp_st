#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    string str;

    do {
        cout<<"input string : ";
        getline(cin, str);
        //getline�� ���͸� ĥ������ �����͸� �޾ƿ�������
        //cin >> str (�Է½� ������ �������� ��� �����͸� �޾ƿ�)
        cout << "input of user : " << str << endl;
    }while(str != "����");

    return 0;
}
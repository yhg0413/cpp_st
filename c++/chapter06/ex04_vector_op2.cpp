#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    vector<int> v;
    for(int i=0; i<10; i++){
        v.push_back(i);
    }
    for(auto& e: v){
        cout <<e << ' ';
    }
    cout << "����" << endl;
    while(v.empty() != true){
        cout << v.back() <<" ";
        v.pop_back();
    }
    
    cout << "size : " <<v.size()<<endl;
    cout << "capacity : " << v.capacity() << endl;
    //capacity �� ���� �����ϰ��ִ� ���� �뷮�ε�
    //���������� �ʴ��̻� ������ �����ϰ��ְ� 2�� ����� �����ϰԉ�
    //���� size�� 10�� ������ ������ؼ� 16�� �������־���
    return 0;
}
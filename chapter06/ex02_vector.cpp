#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    vector<int> fibo = {0,1,2,3,4,5,6,7,8,9,89};
    //�������� �Ǽ��� �������� ���ҋ� �迭��� ���͸� ���̾�

    for(auto& number : fibo){
        cout << number<< ' ';
    }

    /*
    for (int i=0; i<fibonacci.size(); i++){
        cout << fibonacci[i] << ' ';
    }
    */

    cout << endl;


    return 0;
}
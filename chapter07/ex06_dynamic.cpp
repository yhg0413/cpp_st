#include <iostream>
#include <string>
using namespace std;

class Dog{
    public :
    int age;
    string name;

    Dog() {
        cout << "Dog ������ ȣ��" << endl;
        age = 1;
        name = "�ٵ���";
    }
    ~Dog(){
        cout << "Dog �Ҹ��� ȣ��" << endl;
    }
};

int main(int argc, char const *argv[]){
    Dog *pDog = new Dog;
    delete pDog;
    
    return 0;
}
#include <iostream>
#include <string>
#include <memory>
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
    //Dog *pDog = new Dog;
    //delete pDog;
    unique_ptr<Dog> dog(new Dog);
    
    
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Dog{
    public:

    int age;
    string name;

    Dog(){
        age = 1;
        name = "�ٵ���";
    }
    ~Dog(){}

    int getAge() {return age;}
    void setAge(int a){ age = a; }
};

int main(int argc, char const *argv[]){
    Dog *pDog = new Dog;
    
    cout << "�������� ����: " << pDog->getAge() << endl;
    
    pDog->setAge(3);
    cout << "�������� ���� : " << pDog->getAge() << endl;

    delete pDog;
    
    return 0;
}
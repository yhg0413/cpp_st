#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Dog{
    public :
    int age;
    string name;

    Dog() {
        cout << "Dog 생성자 호출" << endl;
        age = 1;
        name = "바둑이";
    }
    ~Dog(){
        cout << "Dog 소멸자 호출" << endl;
    }
};

int main(int argc, char const *argv[]){
    //Dog *pDog = new Dog;
    //delete pDog;
    unique_ptr<Dog> dog(new Dog);
    
    
    return 0;
}
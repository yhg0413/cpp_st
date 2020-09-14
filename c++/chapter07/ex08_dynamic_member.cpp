#include <iostream>
#include <string>
using namespace std;

class Dog{
    private:

    int *pAge;
    int *pWeight;

    public:

    Dog(){
        pAge = new int{1};
        pWeight = new int{10};
    }
    ~Dog(){
        delete pAge;
        delete pWeight;
    }
    int getAge() { return *pAge; }
    void setAge(int a) { *pAge = a; }
    int getWeight() { return *pWeight; }
    void setWeight(int w) { *pWeight = w; }
};

int main(int argc, char const *argv[]){
    Dog *pDog = new Dog;
    cout << sizeof(pDog) << endl;// pDog 포인터 변수의 크기 = 8 (포인터변수는 8의 크기를 가진다)
    cout << sizeof(*pDog) << endl;// pDog가 포인트하는 인스턴스의 크기
    // 포인터변수가 두개라서 16
    cout << "강아지의 나이 : " <<pDog->getAge() << endl;
    
    pDog->setAge(3);
    cout << "강아지의 나이 : " << pDog->getAge() <<endl;

    delete pDog;
    return 0;
}
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
    cout << sizeof(pDog) << endl;// pDog ������ ������ ũ�� = 8 (�����ͺ����� 8�� ũ�⸦ ������)
    cout << sizeof(*pDog) << endl;// pDog�� ����Ʈ�ϴ� �ν��Ͻ��� ũ��
    // �����ͺ����� �ΰ��� 16
    cout << "�������� ���� : " <<pDog->getAge() << endl;
    
    pDog->setAge(3);
    cout << "�������� ���� : " << pDog->getAge() <<endl;

    delete pDog;
    return 0;
}
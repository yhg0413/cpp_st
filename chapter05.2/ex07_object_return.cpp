#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

class Pizza{
public:
    int size;
    Pizza(int s) : size(s){}
};

Pizza makePizza(){ //call by value
    Pizza p(10);
    return p;
}
/*
Pizza& makePizza(){ //call by value
    Pizza p(10);
    return p;
}
*/


int main(int argc, char const *argv[]){
    Pizza pizza = makePizza();
    //Pizza& pizza = makePizza();
    //���� ������ �ֳ� �� �Լ��� ������ ���ÿ� p�� ������⶧����
    //������ �Ұ��������� ���������ԉ�

    cout << pizza.size << "��ġ ����" << endl;
    return 0;
}
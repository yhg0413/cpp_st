#include <iostream>
using namespace std;

class Pizza{
public:
    int size;
    Pizza(int s) : size(s){}
};

void makeDouble(Pizza p){ //call by value
    p.size *=2;
}
/* //�̰ŷ� ���� ������ �ٲ�⋚���� ����� 20�� ���� 
void makeDouble(Pizza& p){ //call by reference
    p.size *=2;
}
*/

int main(int argc, char const *argv[]){
    Pizza pizza(10);
    makeDouble(pizza);

    cout << pizza.size << "��ġ ����" << endl;
    return 0;
}
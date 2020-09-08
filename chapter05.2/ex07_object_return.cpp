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
    //위는 에러임 왜냐 위 함수를 나오는 동시에 p가 사라지기때문에
    //참조가 불가능해져서 에러가나게됌

    cout << pizza.size << "인치 피자" << endl;
    return 0;
}
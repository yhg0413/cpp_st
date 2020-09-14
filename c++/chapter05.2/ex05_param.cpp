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
/* //이거로 사용시 원본이 바뀌기떄문에 결과는 20이 나옴 
void makeDouble(Pizza& p){ //call by reference
    p.size *=2;
}
*/

int main(int argc, char const *argv[]){
    Pizza pizza(10);
    makeDouble(pizza);

    cout << pizza.size << "인치 피자" << endl;
    return 0;
}
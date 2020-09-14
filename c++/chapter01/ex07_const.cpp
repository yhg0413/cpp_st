#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[]){
    const double TAX_RATE = 0.25;
    int income = 100;
    // TAX_RATE = 0.3; --에러
    income = income - TAX_RATE * income;
    cout << income << endl;
    return 0;
}
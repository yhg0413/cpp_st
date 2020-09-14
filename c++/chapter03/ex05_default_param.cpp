#include <iostream>
using namespace std;
/*
void display(char c = '*'){
    for(int i=0; i <20; i++){
        cout << c;
    }
    cout << endl;
}
*/


void display(char c='*', int n = 10){
    for(int i=0; i<n; i++){
        cout << c;
    }
    cout << endl;
}


int main(int argc, char const *argv[]){
    display();//오버로드를 했는데 어떤함수를 쓰는지 확인못함
    display('#');//
    display('#', 5);
    return 0;
}
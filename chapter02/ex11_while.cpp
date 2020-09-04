#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    string str;

    do {
        cout<<"input string : ";
        getline(cin, str);

        cout << "input of user : " << str << endl;
    }while(str != "Á¾·á");
    
    return 0;
}
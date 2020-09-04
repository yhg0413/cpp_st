#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    const int STUDENTS = 5;
    int scores[STUDENTS] = {
        110,203,300,400,500
    };
    int sum = 0;
    int i;
    double average;

    for(i=0; i<STUDENTS; i++){
        sum += scores[i];
    }
    average = (double)sum / STUDENTS;
    cout << "¼ºÀû Æò±Õ = " <<average<<endl;
    return 0;
}
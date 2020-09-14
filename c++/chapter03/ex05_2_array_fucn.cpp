#include <iostream>
using namespace std;
/*
void initArray(int array[], int value=0){
    int size = sizeof(array) / sizeof(int);
    for(int i=0; i<size; i++){
        array[i] = value;
    }
}
*///포인터 알아야 작동가능 그래 어쩐지 이상하더라
void initArray(int array[], int size, int value=0){
    
    for(int i=0; i<size; i++){
        array[i] = value;
    }
}

void  printArray(int array[],int size){
    
    for (int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    cout << endl;
}

int main(int argc, char const *argv[]){
    const int ARRAY_SIZE = 10;
    int intList[ARRAY_SIZE];
    initArray(intList, ARRAY_SIZE,100); // 100으로 초기화
    printArray(intList,ARRAY_SIZE);
    initArray(intList,ARRAY_SIZE);
    printArray(intList,ARRAY_SIZE);
    return 0;
}


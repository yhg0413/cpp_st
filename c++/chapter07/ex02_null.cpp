#include <iostream>
using namespace std;


void f(int i){
    cout << "f(int)" << endl;
}

void f(char *p){
    cout << "f(char *)" <<endl;
}

int main(int argc, char const *argv[]){
    int *pNumber = NULL ; //초기화권장
    int *pNumber2; //비권장 임의의 초기값을가짐

    //f(NULL); --int, char * 둘 다 가능하므로 에러
    f(nullptr);//포인터변수로 인식하는 nullptr를 사용하여 오버로드에서
    //오류나지않고 초기화가 가능했다 nullptr : 포인터 NULL를 의미하는 키워드


    if(pNumber != NULL){
        cout << *pNumber << endl;
    }

    if(pNumber2 != NULL){//결과를 장담하지 못함
        cout << *pNumber2 << endl;
    }

    return 0;
}


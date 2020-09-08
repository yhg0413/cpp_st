#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    vector<int> v;
    for(int i=0; i<10; i++){
        v.push_back(i);
    }
    for(auto& e: v){
        cout <<e << ' ';
    }
    cout << "삭제" << endl;
    while(v.empty() != true){
        cout << v.back() <<" ";
        v.pop_back();
    }
    
    cout << "size : " <<v.size()<<endl;
    cout << "capacity : " << v.capacity() << endl;
    //capacity 는 지금 차지하고있는 저장 용량인데
    //삭제해주지 않는이상 공간은 차지하고있고 2의 배수로 차지하게됌
    //현재 size가 10기 때문에 담기위해서 16을 가지고있었음
    return 0;
}
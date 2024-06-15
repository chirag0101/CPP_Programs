#include<iostream>
using namespace std;

void func(int* ref){
   *ref=20;
}

int main(){
    int a=10;
    int *ref=&a;
    // int b=func(ref);
    func(ref);
    cout<<*ref;
    return 0;
}
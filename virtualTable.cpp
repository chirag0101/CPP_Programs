#include<iostream>
using namespace std;

void add(int a,int b){
    cout<<a+b;
}

void sub(int a,int b){
    cout<<a-b;
}

void mul(int a,int b){
    cout<<a*b;
}

void divd(int a,int b){
    cout<<a/b;
}

void (*funcPtr[3])(int,int)={add,sub,mul};          //this is an array of function pointer of size 3
//this is how virtual table works

int main(){
    for(int i=0;i<3;i++){
        funcPtr[i](10,20);
    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int a=10;

    // const int *p=&a;
    // cout<<"Value of variable 'a' is: "<<a<<endl;
    // *p=10;

    int b=20;

    const int *ptr=&a;
    ptr=&b;
    // cout<<*ptr;

    // ptr=&b;

    cout<<*ptr;
    
}
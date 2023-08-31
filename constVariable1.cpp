#include<iostream>
using namespace std;

int main(){

    int y;
    cin>>y;
    
    const int x=y;                      //allowed
    cout<<x<<endl;

    int a=10,b=20;

    const int *ptr =&a;
    a=30;                                   //variable data a becomes constant
    cout<<*ptr<<endl;
    ptr=&b;
    cout<<*ptr<<endl;

    int *const ptr2=&a;             //making a pointer constant
    cout<<*ptr2<<endl;
    ptr2=&b;
    cout<<*ptr2<<endl;

    return 0;
}
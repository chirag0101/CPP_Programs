#include<iostream>
using namespace std;

int main(){

    int y;
    cin>>y;
    
    const int x=y;                      //allowed
    cout<<x<<endl;

    int a=10,b=20;

    const int *ptr =&a;
    a=30;                                   //data of value at ptr becomes constant means we can't do *ptr=30, value at ptr is const but actual a isn't constant
    cout<<*ptr<<endl;
    *ptr=40;                               //not allowed as *ptr is consant
    ptr=&b;                               //allowed as ptr isn't consant      

    cout<<*ptr<<endl;

    int *const ptr2=&a;             //making a pointer constant
    cout<<*ptr2<<endl;
    ptr2=&b;
    cout<<*ptr2<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int y;
    cin>>y;
    
    const int x=y;                      //allowed
    cout<<x<<endl;
    x=20;                                  //not allowed

    int a=10,b=20;

    const int *ptr =&a;
    a=30;                                   //data of value at ptr becomes constant means we can't do *ptr=30 but can do ptr=&xyz, value at ptr is const but actual a isn't constant
    cout<<*ptr<<endl;
    *ptr=40;                               //not allowed as *ptr is constant
    ptr=&b;                               //allowed as ptr isn't consant      

    cout<<*ptr<<endl;

    int *const ptr2=&a;             //making a pointer constant
    *ptr2=20;
    cout<<*ptr2<<endl;
    ptr2=&b;
    cout<<*ptr2<<endl;

    const int *const ptr3=&a;             //making a pointer & pointer data constant
    *ptr3=20;
    cout<<*ptr3<<endl;
    ptr3=&b;
    cout<<*ptr3<<endl;


    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int a=10,b=20;

    // auto add=[=] (int x,int y) -> int{
    //     a=20;
    //     return x+y;
    // };

    //this gives error as a is read only

    cout<<a<<"\n";

    auto add=[=] (int x,int y)mutable -> int{                               //writing mutable allows us to change values of a outside the function
        a=20;
        cout<<a<<"\n";
        return x+y;
    };    

    add(10,20);

    cout<<a;
    
    return 0;
}
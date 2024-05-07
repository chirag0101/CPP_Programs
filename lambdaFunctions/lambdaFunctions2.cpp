//it is used because no stack frame is pushed & so improves the performance & can be called as a parameter in a function also it can be used to
// call a function only once

#include<iostream>
using namespace std;

int main(){

    //way-1
    [](int x,int y){
        cout<<x<<" "<<y<<" ";
    }(10,20);

    //way-2
    auto obj=[](int x,int y){               //obj is the object to the body which is called as a class
        cout<<x<<" "<<y;
    };

    obj(10,20);                                  //obj has ( ) which is overloaded

    return 0;
}
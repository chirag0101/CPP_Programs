//it is used because no stack frame is pushed & so improves the performance & can be called as a parameter in a function also it can be used to
// call a function only once

#include<iostream>
using namespace std;

int main(){

    auto obj=[](int x,int y){               //obj is the object to the body which is called as a class
        cout<<x<<" "<<y;
    };

    obj(10,20);

    return 0;
}
//actual use

#include<iostream>
using namespace std;

int main(){

    int a=01;
    string str="chirag";

    auto obj = [&](int x,int y){            //if we want to use a & str in the expression we need to capture them to capture all variables we use '='
                                                        // i.e call by value or we can use '&' i.e call by reference we write them in [ ] of the function or we can actually 
                                                        //specify the variable name we want to access 
        cout<<a<<" : "<<str<<"\n";
        return x+y;
    };

    cout<<obj(10,20)<<"\n";

    return 0;
}
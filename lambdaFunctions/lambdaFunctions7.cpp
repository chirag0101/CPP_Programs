#include<iostream>
using namespace std;

int main(){
    int a=10;

    auto add=[&](int x)mutable->auto{
        a=20;
        return x*x;
    };

    cout<<add(10)<<"\n";

    return 0;
}
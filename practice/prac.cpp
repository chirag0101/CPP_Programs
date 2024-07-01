#include<iostream>
using namespace std;

void fun(int a){
    static int b=1;
    cout<<"A: "<<a<<" B: "<<b<<endl;
    b++;
}

int main(){
    int a=1;
    fun(a);
    fun(a);
    return 0;
}
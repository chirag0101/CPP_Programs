//early binding : compile time binding or static binding , late binding : run time binding or dynamic binding

//early binding:    here compiler knows which function to call when some input is taken from user

#include<iostream>
using namespace std;

void add(int a, int b){
    cout<<a+b;
}

void sub(int a, int b){
    cout<<a-b;
}

void mul(int a, int b){
    cout<<a*b;
}

void divd(int a, int b){
    cout<<a/b;
}

int main(){
    
    cout<<"add,sub,mul,div";

    int ch;
    cout<<"\nchoice:";
    cin>>ch;

    switch(ch){
        case 1: add(10,20);
                    break;
        case 2: sub(10,20);
                    break;
        case 3: mul(10,20);
                    break;
        case 4: divd(10,20);
                    break;
        default:
                    cout<<"invalid";
                    break;
    }

    return 0;
}
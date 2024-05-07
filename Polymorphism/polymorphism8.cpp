//early binding:    here compiler doesn't knows which function to call when some input is taken from user

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

void (*funPtr)(int,int)=NULL;   //function pointer

int main(){
    
    cout<<"add,sub,mul,div";

    int ch;
    cout<<"\nchoice:";
    cin>>ch;

    switch(ch){
        case 1: funPtr=add;
                    break;
        case 2: funPtr=sub;
                    break;
        case 3: funPtr=mul;
                    break;
        case 4: funPtr=divd;
                    break;
        default:
                    cout<<"invalid";
                    break;
    }
    funPtr(10,20);          //here the address funPtr holds of a function will get called
    return 0;
}
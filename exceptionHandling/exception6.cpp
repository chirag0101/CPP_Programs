//as throw() is depricated in c++ 11 so we need to run this file as g++ -std=c++03 exception6.cpp

#include<iostream>
using namespace std;

void fun(int x) throw (int,double){
    if(x==1){
        try{
            throw -1;
        }catch(int){
            cout<<"int";
        }
    }else if(x==2){
        try{
            throw 'A';
        }catch(char){
            cout<<"char";
        }
    }else if(x==3){
        try{
            throw 2.5;
        }catch(double){
            cout<<"double";
        }
    }
} 

int main(){
    int x;
    cout<<"x:";
    cin>>x;

    try{
        fun(x);
    }catch(int){
        cout<<"Int\n";
    }catch(double){
        cout<<"Double\n";
    }

    return 0;
}
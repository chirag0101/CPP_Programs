#include<iostream>
using namespace std;

int main(){

    cout<<"Start Main"<<endl;

    try{
        //contains risky code we want to check if it throws an error

        throw -1;           //this value & the parameter to catch must be of same type

    }catch(int x){
        cout<<"Exception Handling"<<endl;
    }

    cout<<"End Main"<<endl;

    return 0;
}
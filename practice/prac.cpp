#include<iostream>
using namespace std;

int main(){
    int year;
    cin>>year;
    bool isLeap=true;

    for(int i=2;i<year;i++){
        if(year%i==0){
            isLeap=false;
            break;
        }
    }

    if(isLeap){
        cout<<"Prime";
    }else{
        cout<<"Not";
    }
    return 0;
}
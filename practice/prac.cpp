#include<iostream>
using namespace std;

int main(){
    int year;
    cin>>year;
    bool isLeap=false;

    if(year%400==0){
        isLeap=true;
    }else if(year%100!=0 && year%4==0){
                isLeap=true;
            }else{
                isLeap=false;
            }


    if(isLeap){
        cout<<"LEAP";
    }else{
        cout<<"NOT LEAP";
    }

    return 0;
}
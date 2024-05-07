#include<iostream>
using namespace std;

int main(){
    int num,num2=0;
    cout<<"Num:";
    cin>>num;

    if(num==0){
        num2=1;
    }

    while(num!=0){
        int rem=num%10;
        if(rem==0){
            rem=1;
        }
        num=num/10;
        num2=num2*10+rem;
    }

    while(num2!=0){
        int rem=num2%10;
        num=num*10+rem;
        num2=num2/10;
    }

    cout<<num;

    return 0;
}
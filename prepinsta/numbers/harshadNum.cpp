#include<iostream>
using namespace std;

int main(){
    int num,sum=0,rem=0;
    cout<<"Enter a number: ";
    cin>>num;
    
    int temp=num;

    while(num!=0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }

    if(temp%sum==0){
        cout<<"True\n";
    }else{
        cout<<"False\n";
    }

    return 0;
}
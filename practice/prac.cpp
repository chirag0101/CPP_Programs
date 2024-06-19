#include<iostream>
using namespace std;

int main(){
    int num=123;
    int sum=0;
    cout<<"Enter Num:";
    cin>>num;
    cout<<num<<endl;

    while(num>0){
        int rem=(num%10);
        sum=sum+rem;
        num=(num/10);
    }

    cout<<sum<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int num=123;
    int rev=0;
    cout<<"Enter Num:";
    cin>>num;
    cout<<num<<endl;

    int store=num;

    while(num>0){
        int rem=(num%10);
        rev=(rem*rem*rem)+rev;
        num=(num/10);
    }

    if(rev==store){
        cout<<"Armstrong";
    }else{
        cout<<"Not Armstrong";
    }

    // cout<<rev<<endl;
    return 0;
}
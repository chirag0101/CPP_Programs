#include<iostream>
using namespace std;

int main(){
    int num,countNum,count;
    cout<<"Enter Num:";
    cin>>num;

    cout<<"Enter Num to count:";
    cin>>countNum;

    while(num!=0){
        int rem=num%10;
        if(rem==countNum){
            count++;
        }
        num=num/10;
    }
    cout<<"Count is:"<<count;

}
#include<iostream>
using namespace std;

int main(){
    int num,sum=0;
    cout<<"Enter Num:";
    cin>>num;

    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }

    if(sum==num){
        cout<<"Perfect Num\n";
    }else{
        cout<<"Not PerfectNum\n";
    }
    
    return 0;
}
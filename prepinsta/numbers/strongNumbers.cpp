#include<iostream>
using namespace std;

int main(){
    int num,rem=0,sum;
    cout<<"Enter num:";
    cin>>num;

    int fact=1;

    int temp=num;
    
    while(temp!=0){
        rem=temp%10;

        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        
        sum=sum+fact;
        temp=temp/10;
        fact=1;
    }

    if(sum==num){
        cout<<"Strong Num\n";
    }else{
        cout<<"Not a Strong Num\n";
    }

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num;
    cin>>num;

    int num2=num;
    int sum;

    while(num!=0){
        int rem=num%10;
        sum=sum+rem;
        num=num/10;
    }

    if(num2%sum==0){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
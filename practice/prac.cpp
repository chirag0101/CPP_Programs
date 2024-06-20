#include<iostream>
#include<vector>
using namespace std;

int facto(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int num;
    cin>>num;
    int power;
    cin>>power;

    int ans=num;
    for(int i=1;i<power;i++){
        ans=ans*num;
    }

    if((ans%10)==num){
        cout<<"yes";
    }else{
        cout<<"No";
    }

    return 0;
}
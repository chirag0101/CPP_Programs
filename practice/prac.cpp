#include<iostream>
using namespace std;

int ans(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }else if(b>a && b>c){
        return b;
    }else{
        return c;
    }
}

int main(){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    int sum=ans(num1,num2,num3);
 
    cout<<sum;

    return 0;
}
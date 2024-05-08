#include<iostream>
using namespace std;

void fibo(int a,int b,int n,int count){
    cout<<a<<" ";

    if(count==n){
        return;
    }

    count++;
    // int c=a+b;

    fibo(b,a+b,n,count);
}

int main(){
    int n=10;
    fibo(0,1,10,0);
    return 0;
}
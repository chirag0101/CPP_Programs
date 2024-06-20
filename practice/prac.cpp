#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"NUM:";
    cin>>num;

    int a=0;
    int b=1;
    for(int i=0;i<=num;i++){
        cout<<a<<" ";
        int c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
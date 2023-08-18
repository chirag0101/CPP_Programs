#include<iostream>
using namespace std;

int main(){
    int num,rems=0;
    cout<<"Enter num:";
    cin>>num;

    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            rems=rems+i;
        }
    }

    if(rems>num){
        cout<<"True\n";
    }else{
        cout<<"False\n";
    }

    return 0;
}
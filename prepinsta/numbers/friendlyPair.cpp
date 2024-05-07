#include<iostream>
using namespace std;

int main(){
    int num1,sum1=0,num2,sum2=0;
    cout<<"Num1:";
    cin>>num1;
    cout<<"Num2:";
    cin>>num2;

    for(int i=1;i<=num1/2;i++){
        if(num1%i==0){
            sum1=sum1+i;
        }
    }

    for(int i=1;i<=num2/2;i++){
        if(num2%i==0){
            sum2=sum2+i;
        }
    }

    if((sum1%num1)==(sum2%num2)){
        cout<<"Friendly Pair\n";
    }else{
        cout<<"Not\n";
    }

    return 0;
}
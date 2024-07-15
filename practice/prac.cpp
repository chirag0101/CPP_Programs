#include<iostream>
#include<cmath>
using namespace std;

int differenceOfSum(int n,int upTo){
    int divisible=0;
    int notDivisible=0;

    for(int i=1;i<=upTo;i++){
        if(i%n==0){
            divisible+=i;
        }else{
            notDivisible+=i;
        }
    }

    return round(notDivisible-divisible);
}

int main(){
    
    int n;
    cout<<"Enter N:";
    cin>>n;
    
    int upTo;
    cin>>upTo;

    cout<<differenceOfSum(n,upTo)<<endl;
    return 0;
}
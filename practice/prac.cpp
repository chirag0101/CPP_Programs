#include<iostream>
using namespace std;

int main(){
    int numInput;
    cout<<"Enter Num:";
    cin>>numInput;
    
    int numInputCopy=numInput;
    int rev=0;

    while(numInputCopy!=0){
        int rem=numInputCopy%10;
        if(rem==0){
            rem=1;    
        }
        rev=rev*10+rem;
        numInputCopy=numInputCopy/10;
    }

    numInputCopy=rev;
    rev=0;

    while(numInputCopy!=0){
        int rem=numInputCopy%10;
        rev=rev*10+rem;
        numInputCopy=numInputCopy/10;
    }

    cout<<rev<<endl;

    return 0;
}
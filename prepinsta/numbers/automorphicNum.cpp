#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    
    int square=num*num;

    if(square%10==num){
        cout<<"Auto\n";
    }else{
        cout<<"Not auto\n";
    }

    return 0;
}
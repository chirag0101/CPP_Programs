#include<iostream>
using namespace std;

char *str[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void displayNums(int n){
   if(n==0){
    return;
   } 

    int rem=n%10;
   displayNums(n/10);
   cout<<str[rem]<<" ";
}

int main(){
    int n=0;
    
    cout<<"Enter Num:";
    cin>>n;

    displayNums(n);

    return 0;
}
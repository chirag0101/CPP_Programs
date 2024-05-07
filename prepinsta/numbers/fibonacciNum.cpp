#include<iostream>

int main(){

    int n,first=1,second=1,temp;

    std::cout<<"Enter rangeEnd:";
    std::cin>>n;

    std::cout<<"Fibonacci Series: 0 ";

    for(int i=1;i<n-1;i++){
    
        std::cout<<first<<" ";

        temp=second;
        second=first+second;
        first=temp;
    
    }

    std::cout<<"\n";

    return 0;
}
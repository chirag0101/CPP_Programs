#include<iostream>

int main(){

    int num,fact=1;
    std::cout<<"Enter Num to find Factorial of:";
    std::cin>>num;

    for(int i=1;i<=num;i++){
        fact=fact*i;
    }

    std::cout<<"Fact: "<<fact<<std::endl;

    return 0;
}
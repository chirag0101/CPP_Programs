#include<iostream>

int main(){
    std::cout<<"Num:";
    int num;
    std::cin>>num;

    if(num<0){
        std::cout<<"Wrong ip";
    }else(num%2==0?std::cout<<"Even":std::cout<<"Odd");

    return 0;
}
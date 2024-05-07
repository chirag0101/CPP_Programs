#include<iostream>

int main(){
    std::cout<<"1st Num:";
    int firstNum,secondNum;
    std::cin>>firstNum;

    std::cout<<"2nd Num:";
    std::cin>>secondNum;

    firstNum>secondNum?std::cout<<"1st is greater.":std::cout<<"2nd is greater";

    return 0;
}
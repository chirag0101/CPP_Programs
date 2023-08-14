#include<iostream>

int main(){

    int num,power,result=1;

    std::cout<<"Enter Num:";
    std::cin>>num;

    std::cout<<"Enter Power:";
    std::cin>>power;

    for(int i=1;i<=power;i++){
        result=result*num;
    }

    std::cout<<result<<std::endl;

    return 0;
}
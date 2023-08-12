#include<iostream>

int main(){

    int num,rem,reverse=0;

    std::cout<<"Enter Num:";
    std::cin>>num;

    while(num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }

    std::cout<<"Rev:"<<reverse<<std::endl;

    return 0;
}
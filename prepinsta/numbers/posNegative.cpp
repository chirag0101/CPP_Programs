#include<iostream>

int main(){
    std::cout<<"Num:";
    
    int num;

    std::cin>>num;
    
    // if(num==0){
    //     std::cout<<"Zero";
    // }else(num>0?std::cout<<"pos":std::cout<<"neg");

    if(num>0){
        std::cout<<"Positive";
    }else if(num<0){
        std::cout<<"Negative";
    }else{
        std::cout<<"Zero";
    }

    return 0;
}
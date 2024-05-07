#include<iostream>

int main(){
    
    int firstNum,secondNum,thirdNum;
    std::cout<<"First:";
    std::cin>>firstNum;

    std::cout<<"Second:";
    std::cin>>secondNum;
    
    std::cout<<"Third:";
    std::cin>>thirdNum;

    if(firstNum>secondNum && firstNum>thirdNum){
        std::cout<<"First";
    }else if((secondNum>firstNum && secondNum>thirdNum)?std::cout<<"Second":std::cout<<"Third");
    

    return 0;
}
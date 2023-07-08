#include<iostream>
int main(){
    int a=10;               //copy initialization
    int b(20);               //direct initialization
    int c{30};               //list/uniform initialization->2011 version

    std::cout<<a<<" "<<b <<" "<<std::endl;
    return 0;
}
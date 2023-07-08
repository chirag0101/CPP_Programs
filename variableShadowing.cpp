#include<iostream>
int x=100;
int main(){
    int x=10;
    std::cout<<x<<std::endl;
    {
        int x=20;
        std::cout<<x<<std::endl;
 
        std::cout<< ::x<<std::endl;         //due to local level shadowing we can't access global variable as scope hasn't been declared (local variable shadowing)

        x=30;
        std::cout<<x<<std::endl;
    }
    std::cout<<x<<std::endl;    
    return 0;
}
#include<iostream>

class Demo{
    int x=10;
    int y=20;

public:
    void fun(){
        std::cout<<x<<std::endl;
        std::cout<<y<<std::endl;

    }
}; 

int main(){
    Demo obj;
    return 0;
}
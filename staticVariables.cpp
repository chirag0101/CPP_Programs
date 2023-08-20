#include<iostream>

class Demo{
    int x=10;
    //static int y=20;                      //initialization of static variable is not allowed in c++
    static int y;

public:
    void fun(){
        std::cout<<x<<std::endl;
        std::cout<<y<<std::endl;    //undefined reference to undefined Demo::y
    }
}; 

int main(){
    Demo obj;
    return 0;
}
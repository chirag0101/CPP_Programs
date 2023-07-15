#include<iostream>

class Demo{
    int x=10;
    int y=20;

public:

    Demo(){                                                                            //constructor with no arguments
        std::cout<<x<<std::endl;
    }

    void fun(){
        std::cout<<x<<std::endl;
        std::cout<<y<<std::endl;

    }
}; 

int main(){
    Demo obj;
    obj.fun();
    return 0;
}
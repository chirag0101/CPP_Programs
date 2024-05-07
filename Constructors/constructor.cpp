#include<iostream>

class Demo{
    int x=10;
    int y=20;

public:

    Demo(){                                                                            //Demo(*this) by default -> constructor with no arguments
        std::cout<<x<<std::endl;
    }

    void fun(){
        std::cout<<x<<std::endl;
        std::cout<<y<<std::endl;

    }
}; 

int main(){
    Demo obj;                   //Demo(&obj)    obj is reference
    obj.fun();
    return 0;
}
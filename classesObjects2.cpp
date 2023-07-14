#include<iostream>

class Demo{
    int x=10;
    void fun(){
        std::cout<<x<<std::endl;
    }
};

int main(){
    Demo obj;
    //obj.fun();                                                          //error: void Demo::fun() is private within this context-> private method can't be accessed
    obj.fun();
    return 0;
}
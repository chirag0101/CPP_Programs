#include<iostream>

class Demo{
    int x=10;

    public:
        friend void Fun(const Demo& obj){
            int z=20;
            std::cout<<obj.x;
        }

};


int main(){

    Demo obj;
    std::cout<<sizeof(obj);
    // Fun(obj);
    return 0;
}
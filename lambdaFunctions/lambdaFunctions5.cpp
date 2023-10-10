#include<iostream>
#include<functional>

int main(){
    
    int a=10,b=10;

    std::function<int(int,int)> obj = [=](int x,int y)->int{                //function class can be used to replace auto
        std::cout<<a<<" "<<b<<"\n";
        return x+y;
    };

    std::cout<<obj(10,20)<<"\n";

    return 0;
}
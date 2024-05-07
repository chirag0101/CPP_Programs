//Overloading arithmetic operators using friend function.

#include<iostream>

class Demo{
    
    int x=10;
    
    public:
    
        Demo(int x){
            this->x=x;
        }

        friend int operator+(const Demo &obj1,const Demo &obj2){
            return obj1.x+obj2.x;                                                             //it calls the predefined function having parameter (int,int)
        }

};

int main(){

    Demo obj1(30);
    Demo obj2(40);

    std::cout<<obj1+obj2<<"\n";

    return 0;
}
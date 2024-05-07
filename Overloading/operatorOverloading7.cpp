//Overloading arithmetic operators using member function.

#include<iostream>

class Demo{
    int x=10;
    
    public:

        Demo(int x){
            this->x=x;
        }

        //int operator+(this,const Demo &obj2)
        int operator+(const Demo &obj2){     //member function has by default 1st parameter as hidden 'this' so requires only 1 parameter from us 

            return this->x + obj2.x;

        }

};


int main(){

    Demo obj1(30);

    Demo obj2(40);

    std::cout<<obj1+obj2<<std::endl;
    //internally goes as obj1.operator+(obj2)

    return 0;

}

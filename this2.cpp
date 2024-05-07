#include<iostream>

class Demo{
    int x=10;
    int y=20;

    public:

        Demo(){
            std::cout<<"No-args/Default Constructor!"<<std::endl;
        }

        Demo(int x,int y){
            this->x=x;
            this->y=y;
            std::cout<<"Parameterized Constructor!"<<std::endl;
        }

        Demo(Demo &xyz){
            std::cout<<"Copy Constructor!"<<std::endl;
        }

};

int main(){

    Demo obj1;

    Demo obj2(1000,2000);

    Demo obj3=obj1;                //copy constructor cz it's done at initialization

    Demo obj4;

    obj4=obj1;                          //gives no output cz copy constructor get's called only at the time of intialization & not while assigning

    return 0;

}
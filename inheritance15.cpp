//multiple inheritance

#include<iostream>

class Parent1{
    int x=10;
    public:
        Parent1(){
            std::cout<<"Constructor Parent1 "<<std::endl;
        }

        void getData(){
            std::cout<<"P1 getData ";
        }

};

class Parent2{
    int x=20;
    public:
        Parent2(){
            std::cout<<"Constructor Parent2 "<<std::endl;
        }
        void getData(){
            std::cout<<"P2 getData ";
        }

};

class Child : public Parent1,public Parent2{                                    //as Parent1 comes 1st in this line it follows thmb rule (Left to Right) Parent1 get Called 1st 
    public:
        Child(){
            std::cout<<"Constructor Child "<<std::endl;
        }
        void getData(){
            std::cout<<"Child getData ";
            Parent1::getData();
            Parent2::getData();
        }

};

int main(){

    Child c;               

    c.getData();
    
    c.Parent1::getData();

    return 0;
}
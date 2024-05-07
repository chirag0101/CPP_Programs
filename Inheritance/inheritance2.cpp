//types of inheritance: public, private & protected
//forms: single, multiple, multi-level, hierarchical, hybrid

//parent/base class
//child/derived class

//syntax-> class Child : Parent 

//bydefault it is private inheritance

//starting from inheritance5.cpp

#include<iostream>

class Parent{

    int x=10;

    protected:
        int y=20;
    
    public:
        int z=30;
        void getData(){
            std::cout<<x<<y<<z<<std::endl;
        }
};

class Child : Parent{
    public:
        void getInfo(){
            Parent.getInfo();
            std::cout<<y<<" "<<z<<std::endl;
        }
};

int main(){
    // Parent p;
    Child c;
    c.getInfo();
    c.getData();                        //this gives error as the inheritance is private & all members of parent class become private & can't be accessed outside the class

    return 0;
}
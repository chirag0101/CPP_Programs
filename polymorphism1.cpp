#include<iostream>

class Parent{

    public:
        Parent(){
            std::cout << "Parent constructor called" << '\n';
        }

        virtual void getData(){
            std::cout<<"Parent GetData\n";
        }

};

class Child : public Parent{

    public:
        Child(){
            std::cout << "Child constructor called" << '\n';
        }

        void getData(){
            std::cout<<"Child GetData\n";
        }

};

int main(){

    Parent *p=new Child();

    p->getData();

    return 0;
}
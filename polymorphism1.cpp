#include<iostream>

class Parent{

    public:
        Parent(){
            std::cout << "Parent constructor called" << '\n';
        }

        virtual void getData(){                        //by using virtual keyword compiler gets to know that if there is any derived class of this class which has method of same namee then ignore this method nd go to the derived one
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
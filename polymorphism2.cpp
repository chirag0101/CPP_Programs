//method signature in overriding-> means 2 methods of a parent child relation having same name,return type & parameters

#include<iostream>

class Parent{

    public:
        Parent(){
            std::cout << "Parent constructor called" << '\n';
        }

        virtual void getData(int x){                //getData(int)
            std::cout<<"Parent GetData\n";
        }

        virtual void printData(int x){              //printData(int)
            std::cout<<"Parent printData\n";
        }

};

class Child : public Parent{

    public:
        Child(){
            std::cout << "Child constructor called" << '\n';
        }

        void getData(float f){                  //getData(float)
            std::cout<<"Child GetData\n";
        }

        void printData(int x){                   //printData(int)
            std::cout<<"Child printData\n";
        }

};

int main(){

    Parent *p=new Child();          //reference of Parent but obj of child

    p->getData(5);      //this call calls the getData of parent class as the method signature doesn't match

    p->printData(5);    //this call calls the printData of the child class as the method signature matches & the parent class method is virtual

    return 0;
}
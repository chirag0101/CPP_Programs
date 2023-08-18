//final & override identifiers in c++

//final is used when we does'nt want the parent class mamber function to be used in the child class i.e parent class member function can't be overloaded when used final

//a class, function can be final 

#include<iostream>
using namespace std;

class Parent{
    public:
        virtual void getData() final{
            cout<<"Parent getData\n";
        }
};

class Child : public Parent{
    public:
        void getData() {                    //we can't do this as getData function is final in parent class
            cout<<"Child getData\n";
        }
};

class Parent2 final{
    public:
        void printData(){
            cout<<"Parent2 printData\n";
        }
};

class Child2 : public Parent2{                      //we can't do this as Parent2 is final & can't be inherited
    public:
        void printData(){
            cout<<"Child2 printData\n";
        }
};

int main(){
    Parent *p=new Child();
    p->getData();

    return 0;
}
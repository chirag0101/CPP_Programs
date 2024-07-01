//pure virtual function(abstract classes & interfaces)

//class is an interface in c++

//giving no body to the function in base class & just declaring it , works only on function with virtual keyword

#include<iostream>
using namespace std;

class Parent{
    public:
        virtual void fun()=0;               //a class has abstract function so the class is abstract, =0 means it is a null pointer
        // void fun()=0;                       this can't be done as it's not virtual

        virtual void gun(){
            cout<<"Gun";
        }

        //if class has more than 1 pure function/all functions are pure virtual than it is an Interface

        //to understand it is an Interface we have a protocol i.e classIParent where I tells that class is an interface

};

void Parent::fun(){
    cout<<"Parent";
}

class Child:public Parent{
    public:
        void fun(){
            cout<<"child";
        }
};

int main(){
    Parent *obj=new Child();
    obj->fun();
    return 0;
}
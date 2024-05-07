//If derived class defines same function as defined in its base class, it is known as function overriding in C++.

#include<iostream>
using namespace std;

class Parent{
    public:
        void getData(){
            cout<<"Parent\n";
        }
};

class Child : public Parent{
    public:
        void getData(){
            cout<<"Child\n";
        }
};

int main(){
    Parent *p1=new Child();
    p1->getData();      //calls getData of Parent as it is the last derived version of getData

    Parent p;
    p.getData();            //calls getData of Parent
    
    Child c;
    c.getData();            //calls getData of Child

    return 0;
}
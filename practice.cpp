#include<iostream>
using namespace std;

class Parent{
    public:
        void getData(){
            cout<<"Parent";
        }
};

class Child1 : public Parent{
    public:
        virtual void getData(){
            cout<<"Child1";
        }
};

class Child2 : public Parent{
    public:
        void getData(){
            cout<<"Child2";
        }
};

class Child3 : public Child1,public Child2{
    public:
        void getData(){
            cout<<"Child3";
        }
};

int main(){
    Child1 *obj=new Child3();
    obj->getData();
    return 0;
}
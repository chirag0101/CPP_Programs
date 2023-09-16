#include<iostream>
using namespace std;

class Demo{
    public:
        virtual void fun()=0;
        virtual void gun()=0;
};

//adapter class ->  creating just the placeholders of function that are virtual in base class cz when we override 2 virtual functions in derived classes than we can't create object of any of them
class Adapter:public Demo{
    void fun(){

    }

    void gun(){

    }
};

class DemoChild:public Adapter{
    public:
        void fun(){
            cout<<"Child1";
        }
};

class DemoChild2:public Adapter{
    public:
        void gun(){
            cout<<"Child2";
        }
};

int main(){
    Demo *obj=new DemoChild();
    obj->fun();
    return 0;
}
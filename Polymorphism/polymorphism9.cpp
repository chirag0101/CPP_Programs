#include<iostream>
using namespace std;

class Parent{
    public:
        virtual void getData(){       //while using virtual keyword a _vptr pointer comes which stores address of virtual table which is a array of function pointer
            cout<<"parent";
        }
};

class Child : public Parent{        //sizeof this class is also 8 bytes as virtual of parent also comes in child
    public:
        void getData(){
            cout<<"child";
        }
};

int main(){

    Parent *obj=new Child;
    obj->getData();             //this goes as obj->vptr->getData()
    
    return 0;
}
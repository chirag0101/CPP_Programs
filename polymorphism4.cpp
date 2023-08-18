//primitive return types & co-variant return types in overriding

#include<iostream>
using namespace std;

class Parent{
    public:
        virtual int getData(){              //virtual brings a pointer with itself named as __vptr so sizeof this class will by default have 8 bytes
            cout<<"Parent getData\n";
            return 10;
        }

        virtual Parent* parentData(){
            cout<<"Parent Data\n";
            return this; //covariant variable
        }
};

class Child : public Parent{
    public:
        int getData(){
            cout<<"Child getData\n";
            return 10;
        }

        Child* parentData(){                    //compiler gives 'this' of parentData of Parent & of child as same as Parent is called from child which carries this of the child class 
            cout<<"Child parentData\n";
            return this;
        }
};

int main(){
    Parent *p=new Child();
    p->getData();
    p->parentData();
    return 0;
}
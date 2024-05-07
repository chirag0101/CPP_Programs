//primitive return types & co-variant return types in overriding

#include<iostream>
using namespace std;

class Parent{
    public:
        virtual int getData(){              //virtual brings a pointer with itself named as __vptr
            cout<<"Parent getData\n";
            return 10;
        }
};

class Child : public Parent{
    public:
        int getData(){
            cout<<"Child getData\n";
            return 10;
        }
};

int main(){
    Parent *p=new Child();
    p->getData();
    cout<<sizeof(Parent);
    return 0;
}
//override is used where method signatures are different but they want to get overrided, notifies if the function has different signatures

#include<iostream>
using namespace std;

class Parent{
    public:
        virtual void getData(int x){
            cout<<"Parent getData\n";
        }
};

class Child : public Parent{
    public:
        void getData(int x) override{
            cout<<"Child getData\n";
        }
};

int main(){
    Parent *p=new Child();
    p->getData(5);

    return 0;
}
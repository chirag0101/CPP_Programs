//object reference & pointers in overriding

#include<iostream>
using namespace std;

class Parent{
    public:
        Parent(){
            cout<<"Parent Constructor\n";
        }

        void getData(int x){
            cout<<"Parent getData\n";
        }

        virtual void printData(int x){
            cout<<"Parent printData\n";
        }
};

class Child : public Parent{
    public: 
        Child(){
            cout<<"Child Constructor\n";
        }

        void getData(float x){
            cout<<"Child getData\n";
        }

        void printData(int x){
            cout<<"Child printData\n";
        }
};


int main(){
    // Parent *p=new Child();
    // p->getData(5);
    // p->printData(5);

    // Child c;
    // Parent *p=&c;
    // p->getData(5);
    // p->printData(5);

    Child c;
    Parent& p=c;
    p.getData(5);
    p.printData(5);

    //above all do the same work but they work internally different

    return 0;
}
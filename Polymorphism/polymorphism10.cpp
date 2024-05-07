//static overriding

#include<iostream>
using namespace std;

class Parent{
    public:
        // virtual static void getData(){
        //     cout<<"Parent Virtual getData\n";
        // }

        //gives error as virtual and static can't be used together as virtual forces static functions to wait for runtime binding whereas static 
        //needs compile time binding

        static void getData(){
            cout<<"Parent getData\n";
        } 
};

class Child:public Parent{
    public:
        void getData(){
            cout<<"Child getData\n";
        }
};

int main(){
    Parent *obj=new Child();
    obj->getData();              //calls parent getData as that function is binded at compile time

    return 0;
}
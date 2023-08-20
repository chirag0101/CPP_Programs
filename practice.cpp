#include<iostream>
using namespace std;

class Parent{
    public:
        virtual void getData(int x){
            std::cout<<"Parent"<<x;
        }
};

class Child : public Parent{
    public:
        void getData(int y){
            std::cout<<"Child"<<y;
        }
};

int main(){
    // Parent *obj=new Child();
    // obj->getData(5);
    Child c;
    c.getData(5);
    return 0;
}
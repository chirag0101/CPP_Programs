#include<iostream>
using namespace std;

class Parent{
    public:
        void getData(){
            cout<<"parent getData";
        }
};

class Child1:public Parent{

};

class Child2:public Parent{

};

class Baccha:public Child1,Child2{

};

int main(){
    Baccha obj;
    obj.getData();
    return 0;
}
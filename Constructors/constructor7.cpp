#include<iostream>
using namespace std;

class Demo{
    public:
        Demo(int x){
            cout<<x;
        }
};

class Demo1:public Demo{
    public:
        Demo1(int x,int y) : Demo{x}{               //to pass values to parent constructor from child class using  : Demo{ x }
            cout<<" "<<y; 
        }
};

int main(){
    Demo1 obj(10,20);

    return 0;
}
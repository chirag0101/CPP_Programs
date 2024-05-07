#include<iostream>
using namespace std;

class Parent{
    public:
        Parent(){
            cout<<"parent\n";
        }
};

class Child1:public Parent{
        public:    
            Child1(){
                cout<<"parent child1\n";
            }
};

class Child2:public Parent{
        public:    
            Child2(){
                cout<<"parent child2\n";
            }
};

class Baccha:public Child1,Child2{      //here virtual keyword delays the calls of both classes & here class Parent is called first
        public:    
            Baccha(){
                cout<<"baccha\n";
            }
};

int main(){
    Baccha obj;
    return 0;
}

//to avoid getting parent() called again we use virtual function so only 1 copy is made of the parent class

/*
    use of virtual keyword
                        demo
                    /       ^      \
                 child1   |     child2
                    \        |       /
                     grandchild                 grandchild directly goes to demo
*/                  

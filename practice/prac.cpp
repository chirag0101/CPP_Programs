#include<iostream>
using namespace std;

class A{
    public:
     void fun(){
        cout<<"A::fun()"<< endl;
     }
};

 class B : virtual public A{
   
};

 class C : virtual public A{
      
};

class D : virtual public B, virtual public C{
    public:
};


int main(){
    D* d=new D{};
    d->fun();
    return 0;
}
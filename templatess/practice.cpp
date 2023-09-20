#include<iostream>
using namespace std;

class P{
    public:
        ~P(){
            cout<<"p";
        }
};

class C:public P{
    public:
        ~C(){
            cout<<"c";
        }
};

void f1(){
    P *p=new C();
    delete p;
}
int main(){
    void f1();
    return 0;
}
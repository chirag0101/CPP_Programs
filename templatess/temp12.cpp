#include<iostream>
using namespace std;

template<typename T>

class Demo{
    T data;
    public:
        Demo(){
            cout<<"Demo Template Class\n";
        }
};

//example of how template for int is created by compiler
template<>
class Demo<int>{
    int data;
    public:
        Demo(){
            cout<<"Int Template Class\n";
        }
};

int main(){
    Demo<int> obj;
    Demo<double> obj2;
    return 0;
}
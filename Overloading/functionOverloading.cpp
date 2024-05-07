//when in same scope if 2 or more functions have same name but different parameters than it is called as function overloading 
//it is early binding which means at the time of compiling the compiler knows which method to call
//when in parent child relation if both class have function with same name & different parameters than it is called as function hiding & not function overloading

#include<iostream>
using namespace std;

class Parent{
    public:
        void getData(int x){
            cout<<"Int"<<x;
        }
        void getData(float x){
            cout<<"Float"<<x;
        }
};

int main(){
    
    Parent p;

    p.getData(5);
    p.getData(5.5f);

    return 0;
}

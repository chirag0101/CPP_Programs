#include<iostream>
using namespace std;

class Parent{
    public:
        void getData(){
            cout<<"In Parent";
        }
};

class Child1 : virtual public Parent{};

class Child2 : virtual public Parent{};

class grandChild : public Child2,public Child1{};   //here 2 copies of the parent class are created

int main(){
    grandChild gc;

    gc.getData();   //by doing this compiler doesn't knows which getData to be called from the 2 copies so we use virtual keyword to get the latest use of the getData()
    
    return 0;
}
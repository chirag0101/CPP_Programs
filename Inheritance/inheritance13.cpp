//note: friend function can't be inherited as it is not a member of any class , but compiler outcasts some functions of parent if there isn't perfect match for function in child class

#include<iostream>

class Parent{
    int x=10;

    public:
        friend std::ostream& operator<<(std::ostream& cout,const Parent& object){
            std::cout<<"In Parent! "<<object.x;
            return cout;
        }
};

class Child : public Parent{
    int x=20;

    public:
        // friend std::ostream& operator<<(std::ostream& cout,const Child& object){
        //     std::cout<<"In Child! "<<object.x;
        //     return cout;
        // }
};

int main(){
    Child c;

    std::cout<<c<<std::endl;            //this goes to child class but if we cmt out opr<<() of child class than compiler outcasts the parameter & goes to parent class
    
    return 0;
}
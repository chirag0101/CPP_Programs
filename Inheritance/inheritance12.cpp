//accessing a method of a parent class without creating it's object

#include<iostream>

class Parent{
    int x=10;
    
    public:

        Parent(){
            std::cout<<"P Constructor"<<std::endl;
        }

        void getData(){
            std::cout<<"Parent"<<x<<std::endl;
        }
};

class Child1 : public Parent{                    //public inheritance
    int x=20;

    public:
        Child1(){
            std::cout<<"C1 Constructor"<<std::endl;
        }

        void getData(){
            std::cout<<"C1 "<<x<<std::endl;
            Parent::getData();                  //1st:  using this method we can access getData from the parent class
        }

};

int main(){

    Child1 p;
    
    p.getData();

    (Parent(p)).getData();                     //2nd method to access getData of parent class without it's object creation
    
    p.Parent::getData();                       //3rd method to access getData of parent class without it's object creation

    return 0;
}
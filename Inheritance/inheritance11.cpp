#include<iostream>

class Parent{
    int x=10;
    
    public:

        Parent(){
            std::cout<<"P Constructor"<<std::endl;
        }

         virtual void getData(){
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
            std::cout<<"C1"<<x<<std::endl;
        }

};

class Child2 : public Parent{                    //public inheritance
    int x=30;
    
    public:
        Child2(){
            std::cout<<"C2 Constructor"<<std::endl;
        }

        void getData(){
            std::cout<<"C2"<<x<<std::endl;
        }

};

int main(){

    Parent *p1=new Child1();

    p1->getData();                                       //this calls getData of Parent as it's referenced gets passed 

    Parent *p2=new Child2();

    p2->getData();                                       //this calls getData of C2 class as now the getData function is virtual

    return 0;
}
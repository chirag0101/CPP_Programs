//public inheritance

#include<iostream>

class Parent{
    int x=10;

    protected:
        int y=20;
    
    public:
        int z=30;

        Parent(){
            std::cout<<"P Constructor"<<std::endl;
        }
};

class Child1 : public Parent{                    //public inheritance
    public:
        Child1(){
            std::cout<<"C Constructor"<<std::endl;
        }
};

class Child2 : private Parent{                    //private inheritance -> now all the data members are private within the child class
    public:
        Child2(){
            std::cout<<"C2 Constructor"<<std::endl;
        }
};


class Child3 : protected Parent{                    //private inheritance -> now all the data members are private within the child class
    public:
        Child3(){
            std::cout<<"C3 Constructor"<<std::endl;
        }
};

int main(){

    Child1 c1;
    
    std::cout<<c1.x<<c1.y<<c1.z;               //can't access private & protected data members of a class outside child class & z can be accessed
    
    Child2 c2;
    
    std::cout<<c2.x<<c2.y<<c2.z;               //can't access x,y,z as all become private in child class
    
    Child3 c3;
    
    std::cout<<c3.x<<c3.y<<c3.z;               //can't access x,y,z as all become protected in child class
    
    return 0;
}
//actual start to inheritance

#include<iostream>

class Parent{
    int x=10,y=20;
    public:
        int a=50;
        Parent(){
            std::cout<<"Parent constructor called"<<std::endl;
        }
    
        ~Parent(){
            std::cout<<"Parent destructor called"<<std::endl;
        }

        void getData(){
            std::cout<<x<<" "<<y<<" "<<a;
        }

};

class Child : public Parent{
    int z=30;
    public:
        Child(){
            std::cout<<"Child constructor called"<<std::endl;
        }

        ~Child(){
            std::cout<<"Child destructor called"<<std::endl;
        }

        void getInfo(){
            getData();
            std::cout<<" "<<z<<std::endl;
        }
};

int main(){

    Child c; 
    c.getInfo();
    return 0;                                  
}

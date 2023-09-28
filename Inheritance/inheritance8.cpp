#include<iostream>

class Parent{
    int x=10,y=20;
    public:
        void getData(){
            std::cout<<x<<" "<<y<<std::endl;
        }
};

class Child : public Parent{
    int z=30;
    public:
        void getInfo(){
            getData();
        }
};

int main(){
    Parent p;
    Child c; 
    
    std::cout<<sizeof(p)<<std::endl;                                  //gives 8 as x & y both get memory            
    std::cout<<sizeof(c)<<std::endl;                               //gives 12 as x & y get reinitilialized for the child class due to it's object

    return 0;                                  
}

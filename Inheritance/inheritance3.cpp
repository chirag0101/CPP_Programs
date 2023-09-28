#include<iostream>

class Parent{

    int x=10;

    protected:
        int y=20;
    
    public:
        int z=30;
        void getData(){
            std::cout<<"Parent: "<<x<<" "<<y<<" "<<z<<std::endl;
        }
};

class Child : public Parent{
   
    public:
        void getInfo(){
            std::cout<<"Child: "<<y<<" "<<z<<std::endl;
        }

};

int main(){

    Child c;
    c.getInfo();
    c.getData();                 //is accessible cz now it is publically inherited       
    return 0;

}
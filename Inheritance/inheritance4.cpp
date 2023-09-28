//serious program

#include<iostream>

class Parent{

    int x=10;

    protected:
        int y=20;
    
    public:

    Parent(){
        
    }

        Parent(int x,int y,int z){
            this->x=x;
            this->y=y;
            this->z=z;
        }

        int z=30;
        void getData(){
            std::cout<<"Parent: "<<x<<" "<<y<<" "<<z<<std::endl;
        }
};

class Child : public Parent{
   
    public:
        Child(int x,int y,int z){
            Parent(x,y,z);
        }
        void getInfo(){
            getData();
        }

};

int main(){

    Child c(40,50,60);
    c.getInfo();
    return 0;

}
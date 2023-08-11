//actual start to inheritance

#include<iostream>

class Parent{
    int x=10,y=20;

    public:
        Parent(){
            std::cout<<"Parent constructor:"<<this<<std::endl;
        }

        Parent(int x,int y){
            std::cout<<"Parent constructor called:"<<this<<std::endl;
            this->x=x;
            this->y=y;
        }

        void getData(){
            std::cout<<x<<" "<<y<<std::endl;
        }

};

class Child : public Parent{
    int z=30;

    public:

        Child(int x,int y,int z) : Parent(x,y){                                         //this does'nt create a new object

            //Parent(x,y)                       //this creates a new object & values don't change above
        
            std::cout<<"Child constructor called:"<<this<<std::endl;
        }

        void getInfo(){
            getData();
            std::cout<<" "<<z<<std::endl;
        }
};

int main(){

    Child c(40,50,60); 
    c.getData();
    return 0;                                  
}

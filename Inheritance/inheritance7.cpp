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

    Child c; 
    Child *c2=new Child();
    
    std::cout<<sizeof(c)<<std::endl;                                  //gives 12 as gives the sizeof whole class            
    std::cout<<sizeof(c2)<<std::endl;                               //gives 8 as gives the sizeof pointer *c2 which is 8

    delete(c2);
    
    return 0;                                  
}

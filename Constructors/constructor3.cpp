//copy constructor main use

#include<iostream>

class Demo{
    public:
        int x=10;

        Demo(){
            std::cout<<"No-args Constructor"<<std::endl;
        }

        Demo(int x){
            std::cout<<"Para Constructor"<<std::endl;
        }

        Demo(const Demo &xyz){
            std::cout<<"Copy Constructor"<<std::endl;
        }

        void fun(){
            std::cout<<this->x<<std::endl;
        }
        
};

int main(){

    Demo obj1;
    
    Demo obj2=obj1;
    
    obj1.x=20;
    
    obj1.fun();
    obj2.fun();
    
    return 0;
}
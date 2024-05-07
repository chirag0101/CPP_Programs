//calling constructors from different constructors

#include<iostream>

class Demo{
    public:
        
        int x;

        Demo(){
            Demo(this);                                                                        //this gives error cz it passes 'this' as a parameter to the parameterized constructor where the parameter required is 'int'
            std::cout<<"No-args/Constructor"<<std::endl;
        }

        Demo(int x){
            Demo();
            std::cout<<"Para Constructor"<<std::endl;
        }

        Demo(Demo &xyz){
            std::cout<<"Copy Constructor"<<std::endl;
        }

};

int main(){

    Demo obj1(10);

    return 0;

}
//copy constructor

#include<iostream>

class Demo{
    public:
        
        int x;

        Demo(){
            Demo obj3(10);
            Demo obj4(obj3);
            std::cout<<"No-args/Constructor"<<std::endl;
        }

        Demo(int x){
            std::cout<<"Para Constructor"<<std::endl;
        }

        Demo(Demo &xyz){
            std::cout<<"No-args/Constructor"<<std::endl;
        }

};

int main(){

    Demo obj1(10);

    return 0;

}
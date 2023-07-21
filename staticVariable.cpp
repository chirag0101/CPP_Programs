#include<iostream>

class Demo{
    
    public:
        int x=10;
        static int y;

        void fun(){
            std::cout<<x<<std::endl;
            std::cout<<y<<std::endl;
        }

};

int Demo::y=20;

int main(){
    
    Demo obj1;
    Demo obj2;
    obj1.fun();
    obj2.fun();
    
    obj2.y=50;                                                                                  //changing the value of y which is static changes the value in the global namespace
 
    obj1.fun();
    obj2.fun();

    return 0;
}
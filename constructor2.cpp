#include<iostream>

class Demo{
    
    public:

        Demo(){
            std::cout<<"No-Args/Default Constructor!"<<std::endl;
        }
    
        Demo(int x){
            std::cout<<"Parameterized Constructor!"<<std::endl;
            std::cout<<x<<std::endl;
        }

};

int main(){
    
    Demo obj1;                                              //calls No-args constructor
    
    Demo obj2();                                            //warning! 
    
    Demo obj3{10};                                        //calls No-args constructor

    Demo obj4(10);                                        //calls parameterized constructor

    Demo *obj5=new Demo();                      //calls No-args constructor

    Demo *obj6=new Demo(10);                  //calls parameterized constructor

    return 0;
}
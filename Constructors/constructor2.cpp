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

        Demo(Demo &xyz){
            std::cout<<"Copy Constructor!"<<std::endl;
        }

};

int main(){
    
    Demo obj1;                                              //calls No-args constructor
    
    Demo obj2();                                            //warning! & no output cz it's the declaration of a function
    
    Demo obj3{10};                                        //calls No-args constructor

    Demo obj4(10);                                        //calls parameterized constructor

    Demo *obj5=new Demo();                      //calls No-args constructor

    Demo *obj6=new Demo(10);                  //calls parameterized constructor

    Demo obj7(obj4);                                    //copy constructor for object on stack frame

    Demo obj8=obj4;                                    //copy constructor, same as obj7

    return 0;
}
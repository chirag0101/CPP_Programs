#include<iostream>

class Demo{
    int x=80;
    public:

        Demo(){
            // this->x=90;
            std::cout<<"No-args Constructor"<<std::endl;
        }

        Demo(int x){
            this->x=x;
            std::cout<<"Para Constructor: "<<x<<std::endl;
            Demo();                                                             //this creates a new object & so values are fresh again
        }

        void getData(){
            std::cout<<x<<std::endl;
        }

        ~Demo(){                                                           //Destructor is denoted by ~classname
            std::cout<<"Object Destroyed!"<<std::endl;
        }

};

int main(){
    
    Demo obj1(100);
    
    obj1.getData();
    
    //Destructor gets automatically called before the return 0 statement of the main function & overall at the end of all statements in main
    
    return 0;
}
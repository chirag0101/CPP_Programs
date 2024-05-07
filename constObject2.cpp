#include<iostream>

class Demo{
    int x=10;
    public:
    
        Demo(int x){
            this->x=x;
            std::cout<<x<<std::endl;
        }

};

int main(){
    const Demo obj(30);                 //we can change values of a class by using the parameterized constructor but not by using obj.memberFunctions
    return 0;
}
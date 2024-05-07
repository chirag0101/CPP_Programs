#include<iostream>

class Demo{
    int x=10;
    int y=20;

    public:
        Demo(int x,int y){
            this->x=x;
            this->y=y;
        }

        friend int operator*(const Demo &obj1,const Demo &obj2){
            return obj1.x*obj2.y;
        }
};

int main(){
    Demo obj1(10,5);
    Demo obj2(10,10);

    std::cout<<obj2*obj1<<"\n";
    
    return 0;
}
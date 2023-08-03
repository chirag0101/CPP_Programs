#include<iostream>

class Demo{
    int x=10;
    int y=20;
    
    public:
    
    Demo(int x){
        this->x=x;
    }

    friend int operator+(const Demo& obj1,const Demo& obj){
        return obj.x+obj1.x;
    }
    
    public:
    void getData() const{
        std::cout<<x<<y;
    }
};

std::ostream& operator<<(std::ostream& cout,const Demo& obj){
    obj.getData();
    return cout;
}


int main(){

    Demo obj(10);
    Demo obj1(20);
    
    std::cout<<obj+obj1<<std::endl;

    return 0;

}
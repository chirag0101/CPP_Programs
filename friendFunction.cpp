#include<iostream>

class Demo{
    int x=10;

    protected:
        int y=20;
    
    public:
        void getData(){
            std::cout<<"x="<<x<<std::endl;
            std::cout<<"y="<<y<<std::endl;
        }

        friend void accessData(Demo &obj);
    
};

void accessData(Demo &obj){
    std::cout<<"In Friend: "<<std::endl;

    int temp=obj.x;
    obj.x=obj.y;
    obj.y=temp;
    
    std::cout<<"x="<<obj.x<<std::endl;
    std::cout<<"y="<<obj.y<<std::endl;
}

int main(){
    Demo obj1;
    obj1.getData();
    accessData(obj1);
    return 0;
}


//friend Function can be friend of multiple class at same time

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

        friend void accessData(const Demo &obj);                    
    
};

void accessData(const Demo &obj){

    std::cout<<"In Friend: "<<std::endl;

    std::cout<<"x="<<obj.x<<std::endl;
    std::cout<<"y="<<obj.y<<std::endl;

}

int main(){

    Demo obj1;
    
    obj1.getData();
    
    accessData(obj1);
    
    return 0;
}


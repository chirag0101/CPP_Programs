//friend Function can be friend of multiple class at same time

#include<iostream>

class Demo2;

class Demo{

    int x=10;

    protected:
    
        int y=20;
    
    public:
    
        void getData() const{
            std::cout<<"In One: "<<std::endl;
            std::cout<<"x="<<x<<std::endl;
            std::cout<<"y="<<y<<std::endl;
        }

        friend void accessData(const Demo &obj,const Demo2 &obj2);        //Demo2 should be declared so we declared Demo             
    
};

class Demo2{
    int a=30;

    protected:
    
        int b=40;
    
    public:
    
        void getData() const{
            std::cout<<"In Two: "<<std::endl;
            std::cout<<"a="<<a<<std::endl;
            std::cout<<"b="<<b<<std::endl;
        }
         friend void accessData(const Demo &obj,const Demo2 &obj2);                    
};

void accessData(const Demo &obj,const Demo2 &obj2){

    std::cout<<"In Friend: "<<std::endl;

    obj.getData();              //inorder to use this we need to make this functions const as const object can access only const member functions
    
    obj2.getData();

    // std::cout<<"x="<<obj.x<<std::endl;
    // std::cout<<"y="<<obj.y<<std::endl;

}

int main(){

    Demo obj1;
    Demo2 obj2;
    
    //obj1.getData();
    
    accessData(obj1,obj2);
    
    return 0;
}


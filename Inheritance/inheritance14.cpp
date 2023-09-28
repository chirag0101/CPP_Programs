//changing scope of access specifier

#include<iostream>

class Parent{

    int x=10;

    protected:
        int y=20;
    
    public:
        int z=30;

        void getData(){
            std::cout<<x<<std::endl;
        }

};

class Child : public Parent{
    using Parent::getData;                      //making getData function private (not using () after function name) 

    void getData()=delete;                     //this method is deleted for Child class but is alive in Parent class

    public:
       using Parent::y;                             //using is required to change the access as we need to specify as there are may be classes named after Parent in various namespace

};

int main(){
    Child c;

    std::cout<<c.y<<" "<<c.z<<std::endl;

    c.getData();                                    //can't access a private function

    Parent p;

    p.getData();

    return 0;
}
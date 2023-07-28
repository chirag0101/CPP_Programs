//overload io operators << >>
#include<iostream>

class Demo{
    int x=10;

    friend std::ostream& operator<<(std::ostream &xyz,const Demo &obj){
        xyz<<obj.x;                 //again goes as: ostream& operator<<(ostream &xyz,int obj.x);
        return xyz;
    }
};

int  main(){

    Demo obj1;

    std::cout<<obj1<<std::endl;

    return 0;
}
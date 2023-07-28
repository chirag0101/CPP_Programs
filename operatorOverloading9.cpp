//overload io operators << >>
//io operators can't be overloaded using member functions
#include<iostream>

class Demo{
    int x=10;
    public:
        // std::ostream& operator<<(std::ostream& cout,const Demo &obj){
        //     cout<<obj.x;
        //     return cout;
        // }
        //this gives error cz 'this' is the 1st parameter for operator<< in ostream class & here we pass 2 parameters & this as default 

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
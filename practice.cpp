#include<iostream>

class Company{
    int empCount=5000;
    // const char nam[]="IM";
    std::string name="IBM";

public:
    Company(){
        std::cout<<"inside constructor"<<std::endl;
    }

    void compInfo(){
        std::cout<<"Company Info"<<std::endl;
        std::cout<<"Name:"<<name<<std::endl;
        std::cout<<"Emp Count:"<<empCount<<std::endl;

    }

};

class Employee{
    int empId=10;
    float empSal=95.00f;
};

int main(){
    Company obj;                                               
    obj.compInfo();

    return 0;
}
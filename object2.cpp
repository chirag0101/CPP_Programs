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
        std::cout<<"---Company Info---"<<std::endl;
        std::cout<<"Name:"<<name<<std::endl;
        std::cout<<"Emp Count:"<<empCount<<std::endl;
    }

};

class Employee{
    int empId=10;
    float empSal=95.00f;

    public:
        Employee(){
            std::cout<<"Inside employee Constructor"<<std::endl;
        }

        void empInfo(){
            Company obj;

            std::cout<<"---Emp Info---"<<std::endl;
            std::cout<<"EmpId:"<<empId<<std::endl;
            std::cout<<"Emp Salary:"<<empSal<<std::endl;
            
            obj.compInfo();
            
            //the following lines give error as we can't access private data from the given class
            // std::cout<<"---Company Info---"<<std::endl;
            // std::cout<<"Name:"<<name<<std::endl;
            // std::cout<<"Emp Count:"<<empCount<<std::endl;
        }
};

int main(){
    // Company obj;                                               
    // obj.compInfo();
    Employee *emp=new Employee();
    emp->empInfo();

    return 0;
}

//composition - aggregation ->one class isn't totally dependent on other class means creating object of one class in another, before inheritance without dependencies

#include<iostream>

class Emp{
    std::string empName="chirag";
    int empId=20;

    public:
        Emp(){
            std::cout<<"Emp Constructor\n";
        }

        void getInfo(){
            std::cout<<empName<<" "<<empId<<std::endl;
        }

        ~Emp(){
            std::cout<<"Emp Destructor\n";
        }

};

class Company{
    std::string compName="jio";
    int compEmp=500;

    Emp obj;
    
    public:

    Company(std::string compName,int compEmp=0){
        std::cout<<"Comp Constructor\n";
        this->compName=compName;
        this->compEmp=compEmp;
    }

    void getInfo(){
        std::cout<<compName<<" "<<compEmp<<std::endl;
        obj.getInfo();
    }

    ~Company(){
            std::cout<<"Comp Destructor\n";
    }
};

int main(){
    Company obj1("rel",200);

    return 0;
}

/*op: comp const
rel 200
chirag 20
emp des
comp des
*/
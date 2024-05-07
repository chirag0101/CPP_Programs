//creating our namespace: namespaces should be named in lowercase as standard namespace is in lower case , it isn't mandotary

#include<iostream>

namespace amazon{
    int empCount=1000;

    void compInfo(){
        std::cout<<"Amazon EmpCount:"<<empCount<<"\n";
    }

}

namespace microsoft{
    int empCount=2000;

    void compInfo(){
        std::cout<<"Microsoft EmpCount:"<<empCount<<"\n";
    }

}

int main(){

    amazon::compInfo();
    microsoft::compInfo();
    
    return 0;
}
//creating our namespace: namespaces should be named in lowercase as standard namespace is in lower case , it isn't mandotary

#include<iostream>

namespace company{
    int empCount=1000;

    void compInfo(){
        std::cout<<"Amazon EmpCount:"<<empCount<<"\n";
    }

}


int main(){
    
    return 0;
}
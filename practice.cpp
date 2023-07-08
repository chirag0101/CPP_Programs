#include<iostream>

class Student{

    int rollNo;
    char name[15];
    std::string name1;
    public:                                                                        
    
    void setData(){
        std::cout<<"Enter RollNo:";
        std::cin>>rollNo;
        // std::cout<<"Enter Name:"<<std::endl;
        // std::cin>>name;
    }

    void getData(){
        std::cout<<std::endl<<"Roll No:"<<rollNo<<std::endl;
        std::cout<<"Name:"<<name1<<std::endl;
    }

};

int main(){

    Student stud;

    stud.setData();
    stud.getData();

}
#include<iostream>

class Student{

    int rollNo;
    
    public:                                                                        //after this rest of the part becomes public to users as it is private by default
    
    void display(){
        std::cout<<"Enter RollNo:";
        std::cin>>rollNo;
        std::cout<<"Roll No:"<<rollNo<<std::endl;
    }

};

int main(){

    Student stud;
    // std::cin>>stud.rollNo;                                           //we can't directly access the rollno from the class as it is private by default
    stud.display();                                                           //as display() is set to be public so it can acces the variables inside the class

}
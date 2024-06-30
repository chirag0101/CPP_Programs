#include<iostream>

class Student{
    public:
        int rollNo;
        std::string name;
        int *ptr;

        Student(){
            ptr=new int();
        }

        Student(Student &obj){
            this->rollNo=obj.rollNo;
            this->name=obj.name;
            this->ptr=new int();
        }
};

int main(){
    Student s1;
    s1.rollNo=10;
    
    Student s2(s1);
    *(s2.ptr)=20;

    std::cout<<s1.rollNo;
    return 0;
}
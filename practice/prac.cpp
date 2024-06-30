#include<iostream>
using namespace std;

class Student{
    public:
        int rollNo;
        int *ptr=&rollNo;

        Student(){
            ptr=new int();
            *ptr=rollNo;
        }

        Student(Student &obj){
            this->rollNo=obj.rollNo;
            this->ptr=new int();
            *ptr=obj.rollNo;
        }

        // Student(Student &obj){
        //     this->rollNo=obj.rollNo;
        // }

};

int main(){
    Student s1;
    s1.rollNo=10;

    Student s2(s1);

    *(s2.ptr)=20;

    // cout<<*(s1.ptr);
    cout<<s1.ptr<<endl;
    cout<<s2.ptr<<endl;

    cout<<*(s1.ptr)<<endl;
    cout<<*(s2.ptr);

    return 0;
}
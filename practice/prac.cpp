#include<iostream>
using namespace std;

class Student{
    public:
        int rollNo;
        int *ptr=&rollNo;

        Student(){

        }

        Student(Student &obj){
            this->rollNo=obj.rollNo;
        }

};

int main(){
    Student s1;
    s1.rollNo=10;

    Student s2(s1);

    cout<<s2.rollNo;

    s2.rollNo=20;

    cout<<s1.rollNo<<endl;

    cout<<s2.rollNo;

    return 0;
}
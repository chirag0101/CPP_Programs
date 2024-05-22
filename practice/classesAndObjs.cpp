#include<iostream>
using namespace std;

typedef class Student{
    public:
        int rollNo;
        string name;
}stud;

int main(){
    Student s1;
    // Student *s1=new Student;
    s1.name="Chirag";
    cout<<s1.name<<endl;
    return 0;
}
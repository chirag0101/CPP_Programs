#include<iostream>
using namespace std;

class Student{
    public:
        int rollNO;
        static int count;

    Student(){
        cout<<"COnst"<<endl;
    }

    ~Student(){
        cout<<"Destruct"<<endl;
    }
};

int Student::count=0;

int main(){
    Student s1;

    Student *obj=new Student;

    delete(obj);

    return 0;
}
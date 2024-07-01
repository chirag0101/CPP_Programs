#include<iostream>
using namespace std;

class Student{
    public:
        int rollNO;
        static int count;

    Student(int rollNO){
        this->rollNO=rollNO;
        count++;
        cout<<count<<endl;
    }
};

int Student::count=0;

int main(){
    Student s1(1);
    Student s2(1);

    return 0;
}
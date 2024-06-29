#include<iostream>
using namespace std;

class student{
    public: 
    string name;
    int data;

    student(){
        cout<<"Object Created"<<endl;
    }
};

int main(){
    student s1;
    cout<<(s1.name)<<endl;
    cout<<float(s1.data)<<endl;

}
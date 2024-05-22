#include<iostream>
using namespace std;

class Student{
    public:
        int id;
};

class Sanjay : protected Student{

};

class Chirag : protected Sanjay{
    // public:
    // Chirag(){
    //     cout<<Sanjay::id;
    // }
};

class Rupali : protected Chirag{
    public: 
        Rupali(){
            cout<<id;
        }
};

int main(){
    Rupali cs;


    return 0;
}
#include<iostream>
using namespace std;

class Demo{
    public:
        friend ostream& operator[](){
            
        }
};

int main(){

    Demo obj[5];



    return 0;
}
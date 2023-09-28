//copy constructor using array

#include<iostream>

using namespace std;

class Demo{

    public:
        Demo(){
            cout<<"No-args Constructor"<<endl;
        }

        Demo(int x){
            cout<<"Para Constructor"<<endl;
        }

        Demo(Demo &xyz){
            cout<<"Copy Constructor"<<endl;
        }
};

int main(){
    Demo obj1;
    Demo obj2;
    Demo obj3;

    Demo arr[]={obj1,obj2,obj3};
    //this goes as Demo arr[0]=obj1; which goes to copy constructor

    return 0;
}
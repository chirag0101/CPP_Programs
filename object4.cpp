#include<iostream>

using namespace std;

class Demo{
    
    int x=10;
    int y=20;

    public:
        
        Demo(){
            cout<<"NO-Args"<<endl;
        }

        // Demo(int x=50,int y){
        //     this->x=x;
        //     this->y=y;
        //     cout<<"Para"<<endl;
        //     cout<<x<<y<<endl;
        // }
        //this gives error cz we need to give default values from left to right but we are giving them right to left

        Demo(int x=50,int y=30){
            this->x=x;
            this->y=y;
            cout<<"Para"<<endl;
            cout<<x<<y<<endl;
        }

};

int main(){
    
    //Demo obj1;          //ambiguity as can't decide which constructor to call when default constructor is mentioned by us

    Demo obj2(90,100);
    
    Demo obj3(200);

    return 0;
}
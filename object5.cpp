#include<iostream>

using namespace std;

class Demo{
    
    int x=10;
    int y=20;

    public:
        
        Demo(){
            cout<<"NO-Args"<<endl;
        }

        Demo(int x,int y){
            this->x=x;
            this->y=y;
            cout<<"Para"<<endl;
        }

        Demo(Demo &xyz){
            cout<<"Copy"<<endl;
        }

        Demo info(Demo obj){                               //when an member function has it's own class as a paramater then copy constructor takes place & this gives copy constructor
            cout<<x<<" "<<y<<endl;
            cout<<obj.x<<" "<<obj.y<<endl;
        }

};

int main(){
    
    Demo obj1;

    Demo obj2(90,100);
    
    obj2.info(obj1);

    return 0;
}
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

        void access(){
            cout<<x<<" "<<y<<endl;
        }

        Demo& info(Demo obj){                               //one more way of creating a copy constructor
            cout<<x<<" "<<y<<endl;
            cout<<obj.x<<" "<<obj.y<<endl;
            return obj;
        }

};

int main(){
    
    Demo obj1;

    Demo obj2(90,100);
    
    Demo obj3=obj2.info(obj1);

    obj3.access();

    return 0;
}
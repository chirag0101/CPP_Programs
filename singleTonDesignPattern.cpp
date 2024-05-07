//program to just create one object of the class as singleton design pattern states that only one object can be created of a class

#include<iostream>
using namespace std;

class Demo{
    private:
        Demo(){
            cout<<"in constructor\n";
        }
    
    public:
        static Demo *obj;                   //we don't use Demo obj; to create an object as we need the obj as static but here obj gets assigned to a address which shouldn't happen to a static variable within a class
        static Demo* createObj(){      
            return obj;
        }

        void getData(){
            cout<<this<<endl;           //when we print this for more than 1 object than they hold same addresses so the answer is same
        }

};

Demo* Demo::obj=new Demo();     //using this the object of this class is only created once

int main(){
    Demo *obj1=Demo::createObj();   
    
    Demo::createObj()->getData();    //method chaining return value of one function is used as a value to perform next function
    
    Demo *obj2=Demo::createObj();
   
    obj1->getData();
    obj2->getData();
    
    return 0;
}
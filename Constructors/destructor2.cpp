//destructor is called implicitly when the scope of an object is over

#include<iostream>

using namespace std;

class Demo{

    public:

        Demo(){
            cout<<"Constructor"<<endl;
        }
    
        ~Demo(){
            cout<<"Destructor"<<endl;
        }

};

int main(){

	Demo obj1;
    
    Demo *obj2=new Demo();

    {                                                                       //  {   This is called as a scope   }
        Demo obj3;
    }
    
    delete(obj2); 
	
    return 0;
}

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
    
    delete(obj2); 
	
    return 0;
}

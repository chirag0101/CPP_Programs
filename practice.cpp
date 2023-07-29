#include<iostream>
using namespace std;
class Demo{
    public:

    Demo(){
        cout<<"Constructor."<<endl;
    }

    ~Demo(){
        cout<<"Destructor."<<endl;        
    }

    friend void* operator new(size_t size){
        void *ptr=malloc(size);
        cout<<"new"<<endl;
        return ptr;
    }

    friend void operator delete(void* ptr){
        cout<<"delete"<<endl;
        free(ptr);
    }
};

int main(){
    Demo *obj=new Demo();
    delete(obj);
}
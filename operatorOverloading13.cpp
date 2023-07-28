//Overloading new & delete operators
//new

#include<iostream>
#include<stdlib.h>

class Demo{
    int x;
    
    public:
        
        Demo(int x){
            this->x=x;
        }

        void getData(){
            std::cout<<x<<std::endl;
    }

        ~Demo(){
            std::cout<<"des"<<std::endl;
        }

        friend void* operator new(size_t size){
            void *ptr=malloc(size);
            //internally: void *ptr=::operator new(size)                :: goes to global namespace
            return ptr;
        }

        void operator delete(void *ptr){
            free(ptr);
        }
};

int main(){
 
    Demo *obj=new Demo(50);

    //this goes as->    new(sizeof(Demo))
    //then                  obj(50)

    obj->getData();
 
    delete(obj);
 
    return 0;
}
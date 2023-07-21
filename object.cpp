#include<iostream>

class Demo{
    int x=10;
    int y=20;

    public:
        Demo(){
            std::cout<<x<<std::endl;
        }

        void fun(){
            std::cout<<y<<std::endl;
        }
};

int main(){
    Demo obj;                                               //this object creation gets memory inside stack
    obj.fun();

    Demo *obj1=new Demo();                     //this object creation gets memory inside heap     
    
    //*obj cz on heap section the name of the memory isn't returned hence address is returned so *obj

    obj1->fun();                                            //-> (*obj1).fun();

    //obj1 gets memory on the heap so it needs to be freed once it's work is done

    delete obj1;                                            //this is similar to free(obj1); in c

    obj1->fun();                                            //the object is deleted and after dereferencing it the values of x & y become 0 & does'nt give a segmentation fault

    return 0;
}
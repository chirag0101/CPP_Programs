//actual start to inheritance

#include<iostream>

class Parent{
    
    public:
        Parent(){
            std::cout<<"Parent constructor called"<<std::endl;
        }
    
        ~Parent(){
            std::cout<<"Parent destructor called"<<std::endl;
        }

};

class Child : public Parent{
    
    public:
        Child(){
            std::cout<<"Child constructor called"<<std::endl;
        }

        ~Child(){
            std::cout<<"Child destructor called"<<std::endl;
        }
        friend void* operator new(size_t size){
            std::cout<<"C new"<<std::endl;                  //this gets called before constructor
            return malloc(size);
        }

};

int main(){

    Child c; 
    Child *c2=new Child();
    delete(c2);
    
    return 0;                                  
}

/*op: parent const
        child const
*/
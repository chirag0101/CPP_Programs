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
};

int main(){

    Child c;                                    //1st parent constructor gets called then child as parent is initialized as instance data member 
    Child *c2=new Child();
    delete(c2);
    
    return 0;                                  //at last parent destructor gets called as we need to free the child class 1st as it can access parent class data which ain't even present 
}

/*op: parent const
        child const
*/
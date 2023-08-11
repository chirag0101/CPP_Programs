//actual start to inheritance

#include<iostream>

class Parent{
    int x=10,y=20;
    public:
        void getData(){
            std::cout<<x<<" "<<y<<std::endl;
        }
};

class Child : public Parent{
    int z=30;
    public:
        void getInfo(){
            getData();
        }
};

int main(){

    Child c; 
    Child *c2=new Child();
    
    std::cout<<sizeof(c)<<std::endl;
    std::cout<<sizeof(c2)<<std::endl;

    delete(c2);
    
    return 0;                                  
}

/*op: parent const
        child const
*/
//overloading operator '+' for objects

#include<iostream>

class Demo{
  
    public:
  
        int x=10;
  
        friend std::ostream& operator<<(const Demo &obj1,const Demo &obj2);
};

std::ostream& operator+(const Demo &obj1,Demo &obj2){                           //overloading operator '+'

    std::cout<<obj1.x+obj2.x<<std::endl;

    return std::cout;
}

int main(){

    Demo obj1;
    
    Demo obj2;
    
    obj1+obj2;         //we can't do this but after operator overloading we can do this, it actually adds the value of x of that class
    
    return 0;
}
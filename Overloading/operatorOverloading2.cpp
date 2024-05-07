//overloading the operator<< function

#include<iostream>

class Demo{
    
    public:
        int x=10;
        void getData(){
            std::cout<<x<<std::endl;
        }

        friend std::ostream& operator<<(const std::ostream& cout,const int x);      
        //to overload a function we need to make a friend of a class

};

//using std:: as ostream is a class from the global namespace

std::ostream& operator<<(const std::ostream& cout,const Demo obj){
    
    std::cout<<obj.x;                           //printing x of the friend class
    
    return std::cout;                           //returning cout as for printing next coming thing
}

int main(){

    Demo obj;

    std::cout<<obj<<std::endl;
    
    return 0;

}
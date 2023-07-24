//constant object

//to create abstraction

#include<iostream>

class Demo{
    
    public:
        
        int x=10;
        
        //changes can be made only within the constructor

        Demo(){
            this->x=80;
            std::cout<<"In constructor"<<std::endl;
        }

        // void getData(){
        //     std::cout<<x<<std::endl;
        // }
        //writing simple member function for a const object will give error so we need to write a constant function for a const object

        void getData() const{                          //const keyword for member function doesn't allow to change values of the class cz through member function we can change the values of instance variables using member functions
            
            //x=100;                                        //can't do this as x within the member function can't be changed   
            
            //this->x=100;                              //error as inside a const member function we can't change anything

            std::cout<<x<<std::endl;
        
        }
        
};

int main(){
    
    const Demo obj1;

    std::cout<<obj1.x<<std::endl;

    //obj1.x=90;                //error cz we can't do changes with a const object outside the class

    obj1.getData();

    return 0;
}
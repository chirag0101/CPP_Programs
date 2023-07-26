/*the functions outside the class can't access the private as well as the protected data of the class so to access this from an 
outside function we use friend function, we can change the values of the variables from this function but the best practice is to 
not change the values so we use const object as a parameter*/

//friendships can break the encapsulation thing so we need to use it only when required 

#include<iostream>

class Demo{
    int x=10;

    protected:
        int y=20;
    
    public:
        void getData(){
            std::cout<<"x="<<x<<std::endl;
            std::cout<<"y="<<y<<std::endl;
        }

        friend void accessData(Demo &obj);                      //friend keyword is used 
    
};

void accessData(Demo &obj){
    std::cout<<"In Friend: "<<std::endl;

    int temp=obj.x;
    obj.x=obj.y;
    obj.y=temp;
    //swapping x&y of the class
    
    std::cout<<"x="<<obj.x<<std::endl;
    std::cout<<"y="<<obj.y<<std::endl;
}

int main(){
    Demo obj1;

    
    obj1.getData();
    
    accessData(obj1);
    
    return 0;
}


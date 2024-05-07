//friend function can be written anywhere i.e: private/protected/public as it's not the member of that class 

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

        friend void accessData(const Demo &obj);                    //const makes the data read-only
    
};

void accessData(const Demo &obj){

    std::cout<<"In Friend: "<<std::endl;

    /*
        int temp=obj.x;
        obj.x=obj.y;
        obj.y=temp;             gives error as swapping x & y of the class is not allowed as they are read only cz the obj passed is const
    */
    
    std::cout<<"x="<<obj.x<<std::endl;
    std::cout<<"y="<<obj.y<<std::endl;

}

int main(){

    Demo obj1;
    
    obj1.getData();
    
    accessData(obj1);
    
    return 0;
}


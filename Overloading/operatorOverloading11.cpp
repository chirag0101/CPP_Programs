//overloading relational operators <,>,<=,>=,==,!=

//overlading '<' here

#include<iostream>

class Demo{

    int x=10;

    public:
        Demo(int x){
            this->x=x;
        }

    friend int operator<(const Demo &obj1,const Demo &obj2){
        
        return obj1.x<obj2.x;

        // if(obj1.x<obj2.x){
        //     return 1;
        // }else{
        //     return 0;
        // }
        
    }

};

int main(){
    Demo obj1(30);
    Demo obj2(20);

    std::cout<<(obj1<obj2)<<std::endl;

    return 0;
}
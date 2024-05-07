//overloading relational operators <,>,<=,>=,==,!=

//overlading '<' here using normal function
 
#include<iostream>

class Demo{

    int x,y;

    public:
        Demo(int x,int y){
            this->x=x;
            this->y=y;
        }

        int getX() const{
            return x;
        }

        int getY() const{
            return y;
        }

};

int operator<(const Demo &obj1,const Demo &obj2){
   return (obj1.getX() < obj2.getX()) && (obj1.getY() < obj2.getY());
}

int main(){
    Demo obj1(20,10);
    Demo obj2(30,30);

    std::cout<<(obj1<obj2)<<std::endl;

    return 0;
}
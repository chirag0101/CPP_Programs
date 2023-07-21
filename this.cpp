#include<iostream>

class Demo{
    int x=10;
    int y=20;

    public:
        /*Demo(int x,int y){
            x=x;
            y=y;
        }*/
        
        //above the values of local variable x,y will be initialized nd no change will occur for the instance variables  

        Demo(int x,int y){
            this->x=x;
            this->y=y;
        }

        //here the value of instance variables x,y will change

        void disp(){
            std::cout<<"X = "<<x<<"\n";
            std::cout<<"Y = "<<y<<"\n";
        }
};

int main(){
    Demo obj(500,1000);
    obj.disp();
    return 0;
}
#include<iostream>

class Demo{
    
        public:
            int x=10;
            // Demo(int x){
            //     this->x=x;
            // }

            void getData(){
                std::cout<<x<<std::endl;
            }

        friend std::istream& operator>>(std::istream& cin,Demo& obj){                   //should'nt make obj const as we can't change const object's data
            cin>>obj.x;
            return cin;
        }

};

int main(){
    Demo obj1;

    std::cout<<"Enter:"<<std::endl;
    std::cin>>obj1;

    obj1.getData();
    return 0;
}
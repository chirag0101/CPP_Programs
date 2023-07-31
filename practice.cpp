#include<iostream>

class Demo{
    int x=10;
    int y=20;
    // friend std::ostream& operator<<(std::ostream& cout,const Demo& obj){
    //     std::cout<<obj.x<<" "<<obj.y;
    //     return cout;
    // }
    public:
    void getData() const{
        std::cout<<x<<y;
    }
};
std::ostream& operator<<(std::ostream& cout,const Demo& obj){
    obj.getData();
    return cout;
}

int main(){
    Demo obj;
    std::cout<<obj<<std::endl;
    return 0;
}
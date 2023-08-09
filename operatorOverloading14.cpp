//unary oprs prefix increment/decrement & postfix increment/decrement

#include<iostream>

class Demo{
    int x=5;
    
    public:
        int operator++(){
            return ++x;
        }

        int operator++(int){
            return x++;
        }
        
        int operator--(){
            return --x;
        }

        int operator--(int){                                //for obj-- we need to give int as parameter so that compiler knows that this is postfix
            return x--;
        }

    friend std::ostream& operator<<(std::ostream& cout,const Demo& obj){
        std::cout<<obj.x<<std::endl;
        return cout;
    }

        // friend int operator++(Demo& obj){
        //     return ++obj.x;
        // }

};

int main(){
    Demo obj;
    // Demo *obj=new Demo();

    // int x=10;
    // std::cout<<++x<<std::endl;
    // std::cout<<x++<<std::endl;
    // std::cout<<x<<std::endl;

    std::cout<<++obj<<std::endl;
    std::cout<<obj++<<std::endl;
    std::cout<<--obj<<std::endl;
    std::cout<<obj--<<std::endl;
    std::cout<<obj<<std::endl;

    return 0;
}
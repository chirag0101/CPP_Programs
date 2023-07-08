#include<iostream>
void fun(int *ptr){
    *ptr=30;
    std::cout<<*ptr<<std::endl;
}

//call by value

// int main(){
//     int x=10;
//     std::cout<<x<<std::endl;
//     //fun(x);                                                         //invalid conversion from int to int*, function paramater is integer but address is required
//     std::cout<<x<<std::endl;
//     return 0;
// }

//call by address

int main(){
    int x=10;
    std::cout<<x<<std::endl;
    fun(&x);
    std::cout<<x<<std::endl;
    return 0;
}
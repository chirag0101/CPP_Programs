#include<iostream>
void fun(int x,int y){
    std::cout<<x<<y<<std::endl;
}

void fun(int x,float y){
    std::cout<<x<<y<<std::endl;
}

void fun(float x,float y){
    std::cout<<x<<y<<std::endl;
}

int main(){
    fun(10,20);         
    fun(10,20.5f);      
    fun(10.5f,20.5f);   
//  fun(10.5,20.5);             //gives error as double has 8 byte memory and can't be adjusted by any function         

    return 0;
}

//needs exact match or 50% match or parameters be of same data
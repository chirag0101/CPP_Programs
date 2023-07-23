#include<iostream>

// void fun(int x,int y){
//     int temp=x;
//     x=y;
//     y=temp;
// }

//there occurs no nameMangling here because compiler treats both function same so this causes ambiguous problem

void fun(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}

int main(){

    int x=10;
    int y=20;
    
    int &a=x;
    int &b=y;
    
    std::cout<<x<<" "<<y<<std::endl;
    
    fun(x,y);                                              //here we pass x,y as parameters but the argumements for the function are reference variables so compiler makes this call as : fun(&x,&y) which goes as fun(&a,&b) , compiler does this work
    //fun(a,b);                                           //works  perfect 
    
    std::cout<<x<<" "<<y<<std::endl;

}
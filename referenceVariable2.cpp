#include<iostream>

//there occurs no nameMangling here because compiler treats both the functions same so this causes ambiguous problem

int& fun(int x){
    int y=x;
    return y;
}

// internally this function goes as:

// int* fun(int x){
//     int y=x;
//     return &y;
// }

//this gives warning as we can't return the address of local variable & if passed it may cause segmentation fault if de-referenced

int main(){
    int x=10;
    int ret=fun(x); 
}
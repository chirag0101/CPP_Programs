#include<iostream>
int main(){
    int cout=10;
    std::cout<<cout<<std::endl;             //when we use std specically for printing then it refers to the standard namespace and prints the variable cout error free
}

#include<iostream>
using namespace std;
int main(){
    int cout=10;
    cout<<cout<<endl;                           //when we use global namespace it can't determine which cout to use and considers both the cout to be from the global namespace & gives an error
    return 0;
}
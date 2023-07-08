#include<iostream>
int main(){

       const int x;                           //this will throw an error as const variable needs to be assigned some value at it's declaration    

       const int x=10;

        x=20;                                  //this will throw an error as const variable can't be assigned a value after it's first assignment

        int const *const px=&x;     //to make a pointer constant of a constant variable

        int y=10;
        int *const py=&y;               //to make a pointer constant of a normal variable
        *py=20;

        int z=30;
        int const *const pz=&z;      //to make a pointer constant of a normal variable
        *pz=40;                               //this will give error cz we can't change the value through a pointer 
        z=40;                                   //this is allowed 

}
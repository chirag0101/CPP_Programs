//creating our header file in our own nameSpaces.h header file

#include<iostream>
#include "nameSpaces.h"                         //writing in " " means to search in the current directory

int main(){

    microsoft::compInfo();
    
    amazon::empCount=4;
    
    amazon::compInfo();

    return 0;
}
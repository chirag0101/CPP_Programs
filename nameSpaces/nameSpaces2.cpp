//creating our header file in our own nameSpaces.h header file

#include<iostream>
#include "myNameSpaces.h"                         //writing in " " means to search in the current directory

using namespace amazon;

int main(){

    microsoft::compInfo();
    
    amazon::empCount=4;
    
    compInfo();

    return 0;
}
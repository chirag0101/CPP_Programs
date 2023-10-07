//creating our header file in our own nameSpaces.h header file

#include<iostream>
#include "myNameSpaces.h"                         //writing in " " means to search in the current directory

using namespace amazon;                           //this can be done because we have included the header file that includes the namespace amazon

int main(){

    microsoft::compInfo();
    
    empCount=4;                         //here it goes as -> amazon :: empCount = 4
    
    compInfo();

    return 0;
}
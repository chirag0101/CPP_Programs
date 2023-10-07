//giving different name to a namespace

#include<iostream>
#include "myNameSpaces.h"

int main(){
    namespace ms=microsoft;                            //we use aliases(diff name for same thing) when the name of the namespace is too large

    ms::compInfo();

    return 0;
}


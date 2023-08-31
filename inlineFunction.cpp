//function like macros stops pushing up the stack frame as it is a heavy operation

#include<iostream>
#define x 500                                                                //object like macros
#define fun(x,y)  x+y                                                    //function like macros

using namespace std;

int main(){

    cout<<x<<"\n";                                                        //while pre-processing 500 gets replaced in place of x

    cout<<fun(10,20);                                                     //while pre-processing function body i.e 10+20 gets replaced in place of fun(10,20)

    return 0;
}

/*to see what gets replaced at x
g++ -E inlineFunction.cpp > inlineFunction.txt*/
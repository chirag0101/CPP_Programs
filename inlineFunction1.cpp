//in inline function the code is directly dumped where the function is called

//inline functions are same like function like macros but here compiler decides whether the function should be inline or not

//function can't be inline if it contains: recursion, more lines of code, static variables, for loops,etc

//no one can predict if a function can be inline or not 

#include<iostream>
using namespace std;

inline int fun(int a,int b){
    return a+b;
}

int main(){
    cout<<fun(10,20)<<endl;
    return 0;
}
//the program in temp1 & this file are same as compiler creates new function for each type of argument & pushes a new stack frame

#include<iostream>
using namespace std;

template <typename T>       //to declare a template placeholder variable/type as T
//template <class T>            //also be written as

T min2(T x,T y){
    return (x<y)?x:y;
}

int main(){
    cout<<min2('A','B')<<endl;                          //this goes as min<char>('A','B');
    cout<<min2<char>('C','D')<<endl;             //can also be written as
    
    cout<<min2(10,20)<<endl;
    
    cout<<min2(10.5f,20.5f)<<endl;
    
    cout<<min2(10.5,20.5)<<endl;

    return 0;
}
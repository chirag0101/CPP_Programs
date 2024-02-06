//reference variable is an another name(alias) given to a variable

#include<iostream>
using namespace std;

void fun(int& num){                                 //pass by reference : it can change the original value of num 
    num=20;
}

int main(){
    int num1=10;
    int& num2=num1;

    fun(num2);
    cout<<num1<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int num1=10;
    int num2=5;

    cout<<num1<<" "<<num2<<endl;

    // num1=num1^num2;
    // num2=num1^num2;
    // num1=num1^num2;

    // num1=num1+num2;
    // num2=num1-num2;
    // num1=num1-num2;

    // swap(num1,num2);

    num1=(num1>num2)?num2:num1;
    num2=(num1>num2)?num1:num2;

    cout<<num1<<" "<<num2;

    return 0;
}
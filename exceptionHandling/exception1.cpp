//exception stops/breaks the flow of the program

#include<iostream>
using namespace std;

int main(){
    int x,y;

    cout<<"Enter two numbers: ";
    cin>>x>>y;

    cout<<x/y;                                  //here when we give 2nd number as 0 then it throws floating point exception

    return 0;
}
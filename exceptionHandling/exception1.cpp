//exception stops/breaks the flow of the program, when an exception is triggerred the rest of the code doesn't gets executed so we need to
//handle them

#include<iostream>
using namespace std;

int main(){
    int x,y;

    cout<<"Enter two numbers: ";
    cin>>x>>y;

    cout<<x/y;                                  //here when we give 2nd number as 0 then it throws floating point exception

    return 0;
}
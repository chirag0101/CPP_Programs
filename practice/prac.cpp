#include<iostream>
using namespace std;

int main(){
    int a=10;
    int &r=a;
    int var=20;
    r=20;
    cout<<a;
    return 0;
}
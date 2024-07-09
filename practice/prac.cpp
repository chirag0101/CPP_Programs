#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[2];
    *(arr+3)=10;
    cout<<*(arr+3);
    return 0;
}

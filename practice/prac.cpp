#include<stdio.h>
#include<iostream>
using namespace std;

int fun(int *ptr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+*(ptr+i);
    }
    return sum;
}
int main()
{
    int arr[]={5,2,7};
    int sum=fun(arr,3);
    cout<<sum<<endl;
    return 0;
}
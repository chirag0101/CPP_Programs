#include<stdio.h>
#include<iostream>
using namespace std;

// int fun(int *ptr,int size){
//     int sum=0;
//     for(int i=0;i<size;i++){
//         cout<<(*(ptr+1))<<" ";
//     }
//     return sum;
// }
int main()
{
    // int arr[]={1,2,3};
    // int sum=fun(arr,3);
    // cout<<sum<<endl;
    // int arr1[3]={1,2,3,4};
    int arr2[2][2]={{1,2},{5,6}};
    int size=sizeof(arr2)/sizeof(arr2[0]);
    // cout<<arr1[3]<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int k=3;
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=size-k-1;
    
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    i=size-k;
    j=size-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    i=0;
    j=size-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int a=0;a<size;a++){
        cout<<arr[a]<<" ";
    }
    cout<<endl;

    return 0;
}
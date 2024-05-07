//moving 1st 3 array elements from left to right

#include<iostream>
using namespace std;

int main(){
    int arr[7],size=7;
    
    cout<<"Ele: ";
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int temp[3],k=3;

    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }

    int x=0;

    for(int i=k;i<size;i++){
        arr[x++]=arr[i];
    }

    x=0;

    for(int i=k+1;i<size;i++){
        arr[i]=temp[x++];
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
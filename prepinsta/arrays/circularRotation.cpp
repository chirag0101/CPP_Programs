//moving 1st 3 array elements from left to right

#include<iostream>
using namespace std;

int main(){
    int arr[5],size=5;
    
    cout<<"Ele: ";
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<4;i++){
        int temp=arr[0];
        for(int j=0;j<4;j++){
            arr[j]=arr[j+1];
        }
        arr[4]=temp;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
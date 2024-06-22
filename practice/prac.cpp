#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cout<<"Enter number of elements to input:";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Before Swap: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    int start=0;
    int end=size-1;
    int mid=(start+end)/2;



    cout<<endl<<"After Swap: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
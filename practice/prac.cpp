#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter Size:";
    cin>>size;

    int arr[size];
    cout<<"Enter Elements:";
    for(int i=0;i<size;i++){  
        cin>>arr[i];
    }

    cout<<"Before Swap:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=1;i<size;i++){
        int j=i-1;
        int store=arr[i];
        while(j>=0 && store<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=store;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    cout<<"After Swap:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
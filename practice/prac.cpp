#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];

    cout<<"Enter Array Elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Before Sorting: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<size-1;i++){          
    int small=i;

        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[small]){
                small=j;
            }
        }
        swap(arr[i],arr[small]);
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    cout<<"After Sorting:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
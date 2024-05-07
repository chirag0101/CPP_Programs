#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"size:";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int arr2[size],count;

    for(int i=0;i<size;i++){
        if(arr[i]<0){
            arr2[count++]=arr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>=0){
            arr2[count++]=arr[i];
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr2[i];
    }

    return 0;
}
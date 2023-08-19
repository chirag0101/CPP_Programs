#include<iostream>
using namespace std;

int main(){
    int arr[10];
    
    int size=(sizeof(arr)/sizeof(arr[0]));

    cout<<"Enter elements:";
    
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    int large=arr[0];

    for(int i=0;i<10;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    cout<<"Largest:"<<large<<"\n";
    return 0;
}
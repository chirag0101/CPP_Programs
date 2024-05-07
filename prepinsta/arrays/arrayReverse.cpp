#include<iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int i=0,j=4;
    while(i<j){
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
        // int temp=arr[i];
        // arr[i]=arr[j];
        // arr[j]=temp;
        i++;
        j--;
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
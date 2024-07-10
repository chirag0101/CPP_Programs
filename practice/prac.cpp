#include<iostream>
using namespace std;

int main(){
    int arr[]={0,0,1,1,2};
    int size=sizeof(arr)/sizeof(arr[0]);

    int arr2[size]={0};

    int i=0;
    int j=0;

    while(j<size){
        if(arr[j]!=0){
            arr2[i]=arr[j];
            j++;
            i++;
        }else{
            j++;
        }
    }

    for(int a=0;a<size;a++){
        cout<<arr2[a]<<" ";
    }
    return 0;
}
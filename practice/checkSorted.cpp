#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    bool isSorted=true;

    for(int i=0;i<size-1;i++){
        if(arr[i+1]<arr[i]){
            isSorted=false;
            break;
        }
    }

    if(isSorted){
        cout<<"Sorted"<<endl;
    }else{
        cout<<"Not Sorted"<<endl;
    }

    return 0;

}
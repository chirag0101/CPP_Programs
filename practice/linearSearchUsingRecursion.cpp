#include<iostream>
using namespace std;

bool linSearch(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    bool found=linSearch(arr+1,size-1,key);
    return found;
}

int main(){
    int arr[]={1,3,5,7,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=10;

    bool found=linSearch(arr,size,key);
    if(found){
        cout<<"Found";
    }else{
        cout<<"Not Found";
    }

    return 0;
}
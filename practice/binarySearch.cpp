#include<iostream>
using namespace std;

bool search(int arr[],int start,int end,int key){
    if(start>end){
        return false;
    }
    int mid=(start+end)/2;
    if(arr[mid]==key){
        return true;
    }else if(arr[mid]<key){
        search(arr,mid+1,end,key);
    }else if(arr[mid]>key){
        search(arr,start,mid-1,key);
    }else{
        return false;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int start=0;
    int end=(sizeof(arr)/sizeof(arr[0]))-1;
    
    int key=0;
    
    bool find=search(arr,start,end,key);

    if(find){
        cout<<"Found "<<endl;
    }else{
        cout<<"Not Found "<<endl;
    }
    return 0;
}
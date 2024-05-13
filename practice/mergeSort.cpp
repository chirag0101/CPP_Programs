#include<iostream>
using namespace std;

void merge(int *arr,int start,int end){

    int mid=(end+start)/2;

    int len1=mid-start+1;
    int len2=end-mid;

    int *arr1=new int[len1];
    int *arr2=new int[len2];

    int arrptr=start;

    for(int i=0;i<len1;i++){
        arr1[i]=arr[arrptr++];
    }

    arrptr=mid+1;

    for(int i=0;i<len2;i++){
        arr2[i]=arr[arrptr++];
    }

    int ptr1=0;
    int ptr2=0;
    arrptr=start;

    while(ptr1<len1 && ptr2<len2){
        if(arr1[ptr1]<arr2[ptr2]){
            arr[arrptr++]=arr1[ptr1++];
        }else{
            arr[arrptr++]=arr2[ptr2++];
        }
    }

    while(ptr1<len1){
        arr[arrptr++]=arr1[ptr1++];
    }
    while(ptr2<len2){
        arr[arrptr++]=arr2[ptr2++];
    }

    delete(arr1);
    delete(arr2);
}

void mergeSort(int *arr,int start,int end){
    
    if(start>=end){
        return ;
    }


    int mid=(end+start)/2;

    mergeSort(arr,start,mid);

    mergeSort(arr,mid+1,end);

    merge(arr,start,end);


}

int main(){
    int arr[]={5,4,3,2,1};
    int start=0;
    int end=sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,start,end-1);

    cout<<endl;
    for(int i=0;i<end;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;

    return 0;
}
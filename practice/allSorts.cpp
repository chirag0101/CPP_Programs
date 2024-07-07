#include<iostream>
using namespace std;

void selection_sort(int *arr,int size){
    int small;

    for(int i=0;i<size-1;i++){
        small=i;
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
}

void bubble_sort(int *arr,int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        for(int k=0;k<size;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}

void insertion_sort(int *arr,int size){
    int store=arr[0];
    for(int i=1;i<size;i++){
        store=arr[i];                                       
        int j=i-1;                                             
        while(j>=0 && store<arr[j]){             
            arr[j+1]=arr[j];                                       
            j--;
        }
        arr[j+1]=store;  
        for(int k=0;k<size;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;                                       
    }
}

int main(){
    int arr[]={5,4,1,3,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Selection Sort:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selection_sort(arr,size);

    int arr2[]={5,4,3,2,1};

    cout<<"Bubble Sort:";
    for(int i=0;i<size;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    bubble_sort(arr2,size);

    int arr3[]={5,4,3,2,1};

    cout<<"Insertion Sort:";
    for(int i=0;i<size;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    insertion_sort(arr3,size);    
    return 0;
}
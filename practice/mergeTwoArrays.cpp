#include<iostream>
using namespace std;

int main(){
    int arr1[]={1,5,8,9,16};
    int arr2[]={2,3,10,12,29};

    int size1=(sizeof(arr1)/sizeof(arr1[0]));
    // int size2=size1;

    // int ptr1=0;
    // int ptr2=0;

    // while(size1--){
    //     if(arr1[ptr1]>arr2[ptr2]){
    //         swap(arr1[ptr1++],arr2[ptr2++]);
    //     }else{
    //         ptr1++;
    //     }
    // }

    for(int i=0;i<size1;i++){
        for(int j=size1-1;j>=0;j--){
            if(arr1[i]>arr2[j]){
                swap(arr1[i],arr2[j]);
            }
        }
    }

    for(int i=0;i<size1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<size1;i++){
        cout<<arr2[i]<<" ";
    }

    return 0;
}
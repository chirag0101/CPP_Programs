#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr1[]={10,20,40};
    int arr2[]={20,50};

    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int totalSize=size1+size2;

    int arr3[totalSize];

    int i=0,j=0,k=0;

    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }else if(arr1[i]>arr2[j]){
            arr3[k++]=arr2[j++];
        }else{
            arr3[k++]=arr1[i++];
        }
    }

    while(i<size1){
        arr3[k++]=arr1[i++];
    }

    while(j<size2){
        arr3[k++]=arr2[j++];
    }

    for(int l=0;l<size1+size2;l++){
        cout<<arr3[l]<<" ";
    }    

}

// void rev(vector<int> &arr1,int m,vector<int> &arr2,int n){
    
// }

// int main(){
//     vector<int> v1={1,2,3,4,5};
//     int size1=v.size();

//     vector<int> v2={1,2,3,4,5};
//     int size2=v.size();

//     rev(v1,size1,v2,size2);

//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }

// }
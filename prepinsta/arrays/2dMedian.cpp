#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"size:";
    cin>>size;

    int arr[size][size];

    cout<<"eles:";

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>arr[i][j];
        }
    }

    int size1=size*size,arr2[size1],count=0;

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            arr2[count++]=arr[i][j];
        }
    }

    cout<<"arr:";

    for(int i=0;i<size1;i++){
        cout<<arr2[i]<<" ";
    }

    int i=0,j=size1-1;

    for(int i=0;i<size1;i++){
        for(int j=i+1;j<size1;j++){
            if(arr2[i]>arr2[j]){
                int temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }

    cout<<"\nsorted:";

    for(int i=0;i<size1;i++){
        cout<<arr2[i]<<" ";
    }

    int med=size1/2;

    cout<<"median:"<<arr2[med];

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int arr[10];

    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    
    int size=(sizeof(arr)/sizeof(arr[0]));
    int half=(size/2);

    for(int i=0;i<half;i++){
        for(int j=i+1;j<half;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=half;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

}
//5 4 3 2 1 6 7 8 9

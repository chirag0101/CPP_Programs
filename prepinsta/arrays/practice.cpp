#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]),num=4;
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            size--;
            for(int j=i;j<size;j++){
                arr[j]=arr[j+1];
            }
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    return 0;
}
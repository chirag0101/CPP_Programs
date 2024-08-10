#include<iostream>
using namespace std;
int main(){
    int arr[]={12,34,3,9,3,10};
    int size=sizeof(arr)/sizeof(arr[0]);

    int i=0;
    int j=size-1;

    while(i<j){
        if((arr[i]%2==0) && (arr[j]%2!=0)){
            i++;
            j--;
        }else if((arr[i]%2!=0) && arr[j]%2==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }else if((arr[i]%2!=0) && (arr[j]%2!=0)){
            j--;
        }else if((arr[i]%2==0) && (arr[j]%2==0)){
            i++;
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
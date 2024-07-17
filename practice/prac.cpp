#include<iostream>
using namespace std;

int main(){
    int arr[]={4,4,4,4,4,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    int appearOne=arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]!=-1){
            int count=0;
            for(int j=i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]=-1;
                }
            }
            if(count<1){
                appearOne=arr[i];
            }
        }
    }
    cout<<appearOne<<" ";
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int arr[5],size=5,count,visited[size];

    cout<<"Eles: ";
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        if(visited[i]!=1){
            count=0;
           for(int j=i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    count++;
                    visited[j]=1;
                }
            }
            if(count>0){
                cout<<"Repeated:"<<arr[i];
            }
        }
    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int arr[5],size=(sizeof(arr)/sizeof(arr[0])),visited[size];

    cout<<"Ele:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        if(visited[i]!=1){
            int count=1;
            for(int j=i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    count++;
                    visited[j]=1;
                }
            }
        }
    }

    return 0;
}
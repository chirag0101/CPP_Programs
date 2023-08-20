#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    int size=5,count;
    int visited[size];

    cout<<"Enter Ele:";
    
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        if(visited[i]!=1){
            count=1;
            for(int j=i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    count++;
                    visited[j]=1;
                }
            }
            cout<<"Element "<<arr[i]<<" "<<count<<" times\n";
        }
    }
    return 0;
}
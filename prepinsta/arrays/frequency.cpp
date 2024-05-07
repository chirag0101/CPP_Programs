#include<iostream>
using namespace std;

int main(){
    int arr[7],size=7,count;
    cout<<"Ele:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int visited[size];

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